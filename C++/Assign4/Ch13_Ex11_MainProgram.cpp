// #include "stdafx.h"
#include <iostream>
#include "myArray.h"

using namespace std;

int main() {
    myArray list1(5);
    myArray list2(9);
    int i;

    cout << "list1: ";
    for (i = 0; i < 5; i++)
        cout << list1[i] << " ";
    cout << endl;

    cout << "Enter 5 integers: ";
    for (i = 0; i < 5; i++)
        cin >> list1[i];
    cout << endl;

    cout << "After filling list1: ";
    for (i = 0; i < 5; i++)
        cout << list1[i] << " ";
    cout << endl;

    list2 = list1;
    cout << "list2: ";
    for (i = 0; i < 5; i++)
        cout << list2[i] << " ";
    cout << endl;

    cout << "Enter 3 elements: ";
    for (i = 0; i < 3; i++)
        cin >> list1[i];
    cout << endl;
    cout << "First three elements of list1: ";
    for (i = 0; i < 3; i++)
        cout << list1[i] << " ";
    cout << endl;

    myArray list3(-2, 6);
    cout << "list3: ";
    for (i = -2; i < 6; i++)
    cout << list3[i] << " ";
    cout << endl;
    list3[-2] = 7;
    list3[4] = 8;
    list3[0] = 54;
    list3[2] = list3[4] + list3[-2];
    cout << "list3: ";

    for (i = -2; i < 6; i++){
        cout << list3[i] << " ";
    }
    cout << endl;

    system("pause");

    return 0;
}