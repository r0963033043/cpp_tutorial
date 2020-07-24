#include <iostream>
using namespace std;

void print(int &ptr, int *A, int &n);

int main(){

  int n = 5;
  int A[n]={1,2,3,4,5};
  int *ptr = A;

  cout << "1st" << endl;
  print(ptr, A, n);
  //
  cout << endl << endl;

  *(ptr++) += 1;

  cout << "2nd" << endl;
  print(ptr, A, n);
  //


  return 0;
}

void print(int &ptr, int *A, int &n){
  cout << "ptr= " << ptr << endl;
  cout << "*ptr= " << *ptr << endl;
  cout << "A= " << A << endl;
  cout << "*ptr= ";
  for(int i = 0; i < n ; i++){
    cout << ptr[i] << " ";
  }
  cout << endl;
  cout << "A[i]= ";
  for(int i = 0; i < n ; i++){
    cout << A[i] << " ";
  }
  cout << endl << endl;

  cout << "ptr++= " << ptr++ << endl;
  cout << "*ptr++= " << *(ptr++) << endl;

}
