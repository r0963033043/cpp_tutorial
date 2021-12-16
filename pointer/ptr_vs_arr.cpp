#include <iostream>
using namespace std;

void printRef2Ptr(int *&ptr, int *A, int &n){
  cout << "ptr= " << ptr << endl;
  cout << "*ptr= " << *ptr << endl;
  cout << "A= " << A << endl;
  cout << "*ptr= ";
  for(int i = 0; i < n ; i++){
    cout << *(ptr+i) << " ";
  }
  cout << endl;
  cout << "A[i]= ";
  for(int i = 0; i < n ; i++){
    cout << A[i] << " ";
  }
  cout << endl << endl;

  //cout << "ptr++= " << ptr++ << endl;
  //cout << "*ptr++= " << *(ptr++) << endl;

}

void printPtr2Ptr(int **ptr, int *A, int &n){
  cout << "*ptr= " << *ptr << endl;
  cout << "**ptr= " << **ptr << endl;
  cout << "A= " << A << endl;
  cout << "**ptr= ";
  for(int i = 0; i < n ; i++){
    cout << *(*ptr+i) << " ";
  }
  cout << endl;
  cout << "A[i]= ";
  for(int i = 0; i < n ; i++){
    cout << A[i] << " ";
  }
  cout << endl << endl;

  //cout << "ptr++= " << ptr++ << endl;
  //cout << "*ptr++= " << *(ptr++) << endl;

}

int main(){

  int n = 5;
  int A[n]={10,20,30,40,50};
  int *ptr = A;

  cout << "1st  reference to pointer" << endl;
  printRef2Ptr(ptr, A, n);
  //
  cout << endl << endl;

  *(ptr++) += 1;

  cout << "2nd  pointer to pointer" << endl;
  printPtr2Ptr(&ptr, A, n);
  //


  return 0;
}
