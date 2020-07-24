#include <iostream>

using namespace std;

void callByRef(int &p);
void callByVal(int *p);

int main(){
  int a = 10;

  // pointer
  int *ptr1 = &a;
  int *ptr2;
  ptr2 = &a;

  // reference
  // same as call_by_reference
  int &ref1 = a;
  int &refp = *ptr1;

  // Error!!!Can't declared as reference but not initialized
  // this can't be done with a reference. you have to use a pointer
  //int &ref2;
  //ref2 = a;


  cout << "int a = 10" << endl;
  cout << "int *ptr1 = &a" << endl;
  cout << "int *ptr2; ptr2 = &a" << endl;
  cout << "int &ref1 = a" << endl;
  cout << "int &refp = *ptr1" << endl;
  cout << endl;
  cout << " a    = " << a << endl;
  cout << " ref1 = " << ref1 << endl;
  cout << " refp = " << refp << endl;

  cout << "*ptr1 = " << *ptr1 << endl;
  cout << "*ptr2 = " << *ptr2 << endl;
  cout << endl;

  cout << " ptr1 = " << ptr1 << endl;
  cout << " ptr2 = " << ptr2 << endl;
  cout << endl;

  cout << "&a    = " << &a << endl;
  cout << "&ref1 = " << &ref1 << endl;
  cout << "&refp = " << &refp << endl;
  cout << "&ptr1 = " << &ptr1 << endl;
  cout << "&ptr2 = " << &ptr2 << endl;
  cout << endl;

  cout << "Conclusion:" <<endl;
  cout << " a =  ref1 =  refp = *ptr1 = *ptr2" << endl;
  cout << "&a = &ref1 = &refp =  ptr1 =  ptr2" << endl;

  cout << endl << endl;

  // Ans:
  //  a    = 10
  //  ref1 = 10
  // *ptr1 = 10
  // *ptr2 = 10
  //
  //  ptr1 = 0x000000cc
  //  ptr2 = 0x000000cc
  //
  // &a    = 0x000000cc
  // &ref1 = 0x000000cc
  // &ptr1 = 0x000000d0
  // &ptr2 = 0x000000d8


  cout << "Call by reference:a" << endl;
  callByRef(a);
  // Ans:
  //  p = 10
  // &p = 0x000000cc

  cout << "Call by reference:ref1" << endl;
  callByRef(ref1);
  // Ans:
  //  p = 10
  // &p = 0x000000cc

  cout << "Call by reference?*ptr1" << endl;
  callByRef(*ptr1);

  // Write call_by_reference:
  // int a = 10;
  // int &ref = a;  // ref = a
  // int *ptr = &a; // *ptr = a
  // func(a);
  // void func(int &p){
  //  // p = a;
  // }

  cout << "Call by value:ptr" << endl;
  callByVal(ptr1);
  // Ans:
  // *p = 10
  //  p = 0x000000cc
  // &p = 0x00000088
  //
  // Write call_by_value:
  // int a = 10;
  // int *ptr = &a;
  // func(ptr);
  // void func(int *p){
  //  // *p = *ptr;
  //  //  p = ptr;
  //  // &p
  // }

  // Conclusion:
  // int a = 10;
  // callByRef(a);
  // callByRef(int &p);
  //
  // int *ptr = &a;
  // callByVal(ptr);
  // callByVal(int *p);

  return 0;
}

void callByRef(int &p){
  cout << "func(n)" << endl;
  cout << "func(int &p)" << endl;
  cout << " p = " << p << endl;
  cout << "&p = " << &p << endl << endl;
}

void callByVal(int *p){
  cout << "func(n)" << endl;
  cout << "func(int *p)" << endl;
  cout << "*p = " << *p << endl;
  cout << " p = " << p << endl;
  cout << "&p = " << &p << endl << endl;
}
