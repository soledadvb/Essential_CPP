#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

ofstream ofil("text_out1");
vector<int> fibon_seq(int size);
void display(vector<int> vec)
{
    for (int ix = 0; ix < vec.size(); ++ix)
        cout << vec[ix] << ' ';
    cout << endl;
}

void swap(int val1, int val2)
{
    ofil << "swap ( " << val1
         << ", " << val2 << " ) \n";
    int temp = val1;
    val1 = val2;
    val2 = temp;

    ofil << "after swap(): val1 " << val1
         << " val2: " << val2 << "\n";
}

void swap3(int &val1, int &val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void bubble_sort(vector<int> &vec)
{
    for (unsigned int ix = 0; ix < vec.size(); ++ix)
        for (int jx = ix + 1; jx < vec.size(); ++jx)
            if (vec[ix] > vec[jx])
            {
                ofil << " about to call swap! "
                     << " ix: " << ix << " jx: " << jx << '\t'
                     << " swapping: " << vec[ix]
                     << " with " << vec[jx] << endl;
                swap3(vec[ix], vec[jx]);
            }
}

vector<int> fibon_seq(int size)
{
    if (size <= 0 || size > 1024)
    {
        cerr << "Warning:fibon_seq(): "
             << size << "not supported -- resetting to 8\n";
        size = 8;
    }

    vector<int> elems(size);
    for (int ix = 0; ix < size; ++ix)
    {
        if (ix == 0 || ix == 1)
            elems[ix] = 1;
        else
            elems[ix] = elems[ix - 1] + elems[ix - 2];
    }
    return elems;
}

int main()
{
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia + 8);

    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    cout << "vector after sort: ";
    display(vec);

    display(fibon_seq(10));
}
