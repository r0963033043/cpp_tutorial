/*
      a2 = *b
 *
 * */




#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a=10;

    int *b = &a;

    int a2 = *b;

    //int a3 = b;  --> Error


    cout << "int a = 10\n";
    cout << "int *b = &a\n";
    cout << "int a2 = *b\n";
    cout << "\n";


    cout << "     | a              | a2             | b\n";
    cout << "--------------------------------------------------------------------------------------------------------\n";
    cout << "  *N | " <<  "               |                | " <<  *b << "\n";
    cout << "**&N | " <<  "               |                | " <<  **&b << "\n";
    cout << "----------------------------------------------------------------------------------------------------------------------\n";
    cout << "   N | " <<   a << "             | " <<   a2 << "             | " <<   b << "\n";
    cout << " *&N | " << *&a << "             | " << *&a2 << "             | " << *&b << "\n";
    cout << "----------------------------------------------------------------------------------------------------------------------\n";
    cout << "  &N | " <<  &a << " | " <<  &a2 << " | " <<  &b << "\n";
    cout << "\n";



//    cout << "*b;  b = &a\n";
//    cout << "*b3;  b3 = b\n";
//    b = &a;
//    b3 = b;
//    //b3 = b2;





//    printf("&b = %p\n", &b);
//    cout << "&b = " << &b << "\n";

    //printf("     | a \t | b              | b2\n");
    //printf("--------------------------------------\n");
    //printf("  *N |   \t |  \t  |    \n");
    //printf("**&N | \n");
    //printf("--------------------------------------\n");
    //printf("   N | %d \t | %p | %p \n", a, b, b2);
    //printf(" *&N | \n");
    //printf("--------------------------------------\n");
    //printf("  &N | %p \t | %p | %p \n", &a, &b, &b2);
    //printf("\n");


//    printf("  a(d) = %d\n", a);
//    //printf(" &a(d) = %d\n", &a);
//    printf(" &a(p) = %p\n", &a);
//    printf("\n");
//    printf("*&a(d) = %d\n", *&a);
//
//    printf("--\n");
//    printf("*&a = *(&a) = a\n");
//
//
//
//    printf("------------------------\n");
//    b = &a;
//    printf("b = &a\n");
//
//    printf("\n");
//    //printf(" b(d) = %d\n", b);
//    printf("   b(p) = %p\n", b);
//    //printf (" &b(d) = %d\n", &b);
//    printf("  &b(p) = %p\n", &b);
//    printf("  *b(d) = %d\n", *b);
//    printf("  *b(p) = %p\n", *b);
//    printf("\n");
//    printf(" *&b(p) = %p\n", *&b);
//    printf("**&b(d) = %d\n", **&b);
//    printf("**&b(p) = %p\n", **&b);
//
//
//    printf("--\n");
//    printf(" *&b =  *(&b) =  b\n");
//    printf("**&b = *(*&b) = *b\n");



    return 0;
}

