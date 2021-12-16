#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    const int aa = 111;
    int const bb = 222;
    // const int const cc = 333;  --> Error, dulpicate 'const'
    // int const int dd = 444;   --> Error, two or more data types in declaration of 'dd'





    // *ptr = const
    // ptr指向常數變數
    // Cannot change *ptr
    // *ptr = 55;   --> Error, read-only
    const int *ptr11;
    int const *ptr12;
    int const* ptr13;


    // ptr = const
    // ptr是常數指標
    // Cannot change ptr
    // ptr = &b;   --> Error, read-only
    int *const ptr21 = NULL;
    int* const ptr22 = NULL;
    // int *const ptr;  --> Error, need initialized
    // *const int ptr = NULL;   --> Error, cannot define like this


    // 指向常數變數的常數指標
    // Cannot change both ptr and *ptr
    const int *const ptr31 = NULL;
    // const int *const ptr31;   --> Error, need initialized


    // const int const* ptr4;  --> Error, duplicate 'const', cannot define like this



    int a = 10;
    int b = 20;


    cout << "const int *ptr11,  ptr11 = &a\n";
    cout << "int const *ptr12,  ptr12 = &b\n";
    ptr11 = &a;
    ptr12 = &b;

    // ptr21 = &a;   --> Error, read-only
    cout << "int *const ptr23 = &a\n";
    int *const ptr23 = &a;

    //  ptr31 = &a;   --> Error, read-only
    // *ptr31 = 44;   --> Error, read-only
    cout << "const int *const ptr32 = &a\n";
    const int *const ptr32 = &a;

    cout << "     | a              | b              | ptr11          | ptr12          | ptr23          | ptr32\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  *N | " << "               |                | " <<  *ptr11 << "             | " << *ptr12 << "             | " << *ptr23 << "             | " << *ptr32  << "\n";
//    cout << "**&N | " <<  "               |                | " <<  **&b2 << "             | " << **&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "   N | " << a << "             | " << b << "             | " <<   ptr11 << " | " << ptr12 << " | " << ptr23 << " | " << ptr32 << "\n";
//    cout << " *&N | " << *&a << "             |                | " << *&b2 << " | " << *&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  &N | " << &a << " | " << &b << " | " <<  &ptr11 << " | " << &ptr12 << " | " << &ptr23 << " | " << &ptr32 << "\n";
    cout << "\n";



    cout << "ptr11 = &b\n";
    cout << "ptr23 = &b;   --> Error, read-only\n";
    cout << "ptr32 = &b;   --> Error, read-only\n";
    ptr11 = &b;
    // ptr23 = &b;   --> Error, read-only
    //  ptr32 = &b;    --> Error, read-only

    cout << "     | a              | b              | ptr11          | ptr12          | ptr23          | ptr32\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  *N | " << "               |                | " <<  *ptr11 << "             | " << *ptr12 << "             | " << *ptr23 << "             | " << *ptr32  << "\n";
//    cout << "**&N | " <<  "               |                | " <<  **&b2 << "             | " << **&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "   N | " << a << "             | " << b << "             | " <<   ptr11 << " | " << ptr12 << " | " << ptr23 << " | " << ptr32 << "\n";
//    cout << " *&N | " << *&a << "             |                | " << *&b2 << " | " << *&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  &N | " << &a << " | " << &b << " | " <<  &ptr11 << " | " << &ptr12 << " | " << &ptr23 << " | " << &ptr32 << "\n";
    cout << "\n";




    cout << "*ptr11 = a, *ptr12 = 11   --> Error, read-only\n";
    cout << "b = 22\n";
    cout << "*ptr23 = 33\n";
    cout << "*ptr32 = 44   --> Error, read-only\n";

    // *ptr11 = a;   --> Error, read-only
    // *ptr12 = 11;  --> Error, read-only
    b = 22;
    *ptr23 = 33;
    // *ptr32 = 44;    --> Error, read-only

    cout << "     | a              | b              | ptr11          | ptr12          | ptr23          | ptr32\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  *N | " << "               |                | " <<  *ptr11 << "             | " << *ptr12 << "             | " << *ptr23 << "             | " << *ptr32  << "\n";
//    cout << "**&N | " <<  "               |                | " <<  **&b2 << "             | " << **&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "   N | " << a << "             | " << b << "             | " <<   ptr11 << " | " << ptr12 << " | " << ptr23 << " | " << ptr32 << "\n";
//    cout << " *&N | " << *&a << "             |                | " << *&b2 << " | " << *&b3 << "\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  &N | " << &a << " | " << &b << " | " <<  &ptr11 << " | " << &ptr12 << " | " << &ptr23 << " | " << &ptr32 << "\n";
    cout << "\n";



    return 0;
}
