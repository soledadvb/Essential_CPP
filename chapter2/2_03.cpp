#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

ofstream ofil("text_out1");
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

void bubble_sort(vector<int> &vec, ofstream *ofil = 0 )
{
    for (unsigned int ix = 0; ix < vec.size(); ++ix)
        for (int jx = ix + 1; jx < vec.size(); ++jx)
            if (vec[ix] > vec[jx])
            {
                if( ofil != 0 )
                (*ofil) << " about to call swap! "
                     << " ix: " << ix << " jx: " << jx << '\t'
                     << " swapping: " << vec[ix]
                     << " with " << vec[jx] << endl;
                swap3(vec[ix], vec[jx]);
            }
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
}
