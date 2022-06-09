#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
int *find(const vector<int> &vec, int value)
{
    for (int ix = 0; ix < vec.size(); ix++)
        if (vec[ix] == value)
            return &vec[ix];
    return 0;
}

template <typename elemType>
elemType *find(const vector<elemType> &vec, const elemType &value)
{
    for (int ix = 0; ix < vec.size(); ix++)
        if (vec[ix] == value)
            return &vec[ix];
    return 0;
}


template <typename elemType>
elemType* find( const elemType * array, int size, const elemType &value)
{
    if(!array || size < 1)
        return 0;
    for (int ix = 0; ix < size; ++ix, ++array)
        if (*array == value)
            return array;
    return 0;
}

template <typename elemType>
elemType * find( const elemType *first, const elemType *last, const elemType &value)
{
    if( ! first || ! last)
        return 0;

    // 当first不等于last，就把value拿来和first所指的元素比较
    // 如果两者相等，便返回first，否则将first递增1，令它指向下一个元素
    for (; first ! = last; ++first)
        if( *first == value)
            return first;
    return 0;
}

 



