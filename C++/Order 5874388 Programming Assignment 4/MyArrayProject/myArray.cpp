#include "myArray.h"
#include <iostream>
#include <cstdlib>

myArray::myArray()
{
    size = 0;
    startIdx = 0;
    arr = nullptr;
}

myArray::myArray(int sz, int start)
{
    size = sz;
    startIdx = start;
    arr = new int[size];
}

myArray::~myArray()
{
    delete[] arr;
}

int& myArray::operator[](int index)
{
    int idx = index - startIdx;
    if (idx >= 0 && idx < size)
        return arr[idx];
    else {
        std::cerr << "Error: Array index out of bounds!" << std::endl;
        exit(1);
    }
}

myArray& myArray::operator=(const myArray& other)
{
    if (this == &other)
        return *this;

    if (arr != nullptr)
        delete[] arr;

    size = other.size;
    startIdx = other.startIdx;
    arr = new int[size];

    for (int i = 0; i < size; i++)
        arr[i] = other.arr[i];

    return *this;
}

bool myArray::operator==(const myArray& other) const
{
    if (size != other.size || startIdx != other.startIdx)
        return false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != other.arr[i])
            return false;
    }

    return true;
}

bool myArray::operator!=(const myArray& other) const
{
    return !(*this == other);
}
