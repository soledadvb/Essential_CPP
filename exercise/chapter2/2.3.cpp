#include <iostream>
#include <vector>
using namespace std;

vector<int> Pentagonal_count(int num)
{
    vector<int> vec;
    for (int i = 1; i <= num; i++)
    {
        vec.push_back(i * (3 * i - 1) / 2);
    }
    return vec;
}

void print_vector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    int num;
    cout << "Please input a number: " << endl;
    cin >> num;
    if( num <= 0 || num > 1024)
    {
        cout << "invalid number: " << num << endl;
        return 0;
    }
    vec = Pentagonal_count(num);
    print_vector(vec);
    return 0;
}
