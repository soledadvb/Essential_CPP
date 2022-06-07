#include <iostream>
#include <cstdlib>
using namespace std;

bool fibon_elem(int, int &);

int main()
{
    int pos;
    cout << "Enter the position of the element: ";
    cin >> pos;
    int elem;
    if ( fibon_elem( pos, elem))
        cout << "elem # " << pos << " is " << elem << endl;
        else cout << "sorry " << pos << " could not calculate element # " << pos << endl;
}

bool fibon_elem(int pos, int & elem)
{
    // 检查位置值是否合法
    if ( pos <= 0 || pos > 1024)
    {
        elem = 0;
        return false;
    }
    elem = 1;
    int n_2 = 1, n_1 = 1;
    for (int ix = 3; ix <= pos ; ++ix)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }
    return true;
}
