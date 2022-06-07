#include <iostream>
#include <vector>
using namespace std;

int min(int *array)
{
    cout << array[1] << endl;
    return 0;
}

int main()
{
    int array[3] = {0, 1, 2};

    min(array);
    return 0;
}