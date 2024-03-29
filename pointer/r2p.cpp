/*
      c =  a
     &c = &a

    *&c = c = a

    ---

     c2 = *b =  a
    &c2 =  b = &a
   &&c2 --> not define

   *&c2 = c2 = *b = a


 *
 *
 * */




#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int a2 = 20;


    // pointer
    int *b = &a;

    // reference
    int &c = a;
    //int &c2 = *b;


    // reference to pointer
    int *&d = b;
    //d = b;
    //d = &a;

    //int *&d = &a;  --> Error


    cout << "int a = 10\n";
    cout << "int a2 = 20\n";
    cout << "int *b = &a\n";

    cout << "int &c = a\n";

    cout << "int *&d = b\n";
    cout << "\n";


    cout << "      | a              | a2            | b              | c              | d\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "   *N | " <<  "               |               | " <<  *b << "             |                | " << *d << "\n";
    cout << " **&N | " <<  "               |               | " << **&b << "             |                | " << **&d << "\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "    N | " <<   a << "             | " <<   a2 << "            | " <<   b << " | " <<    c << "             | " << d << "\n";
    cout << "  *&N | " << *&a << "             | " << *&a2 << "            | " << *&b << " | " << *&c << "             | " << *&d << "\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "   &N | " <<  &a << " | " <<  &a2 << "| " << &b  << " | " <<  &c << " | " << &d << "\n";
    cout << "\n";


    cout << "*&d;  d = &a2\n";
    d = &a2;

    cout << "      | a              | a2            | b              | c              | d\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "   *N | " <<  "               |               | " <<  *b << "             |                | " << *d << "\n";
    cout << " **&N | " <<  "               |               | " << **&b << "             |                | " << **&d << "\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "    N | " <<   a << "             | " <<   a2 << "            | " <<   b << " | " <<    c << "             | " << d << "\n";
    cout << "  *&N | " << *&a << "             | " << *&a2 << "            | " << *&b << " | " << *&c << "             | " << *&d << "\n";
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "   &N | " <<  &a << " | " <<  &a2 << "| " << &b  << " | " <<  &c << " | " << &d << "\n";
    cout << "\n";





//    printf("&b = %p\n", &b);
    //cout << "*d = " << *d << "\n";

    return 0;
}

