#include <iostream>

using namespace std;

class A {
  public:
    static int num1;
    static int num2;

    int getNum3(){
      return num3;
    }
    void setNum3(int num){
      num3 = num;
    }
    int getNum4(){
      return num3;
    }
    void setNum4(int num){
      num4 = num;
    }

  private:
    static int num3;
    static int num4 = 0;
};
// 必須定義在外面，不寫不行
int A::num1 = 0;
int A::num2;
int A::num3 = 0;

int main(){

  cout << "A::num1 = " << A::num1 << endl;
  cout << "A::num2 = " << A::num2 << endl;
  // Ans:
  // num1 = 0
  // num2 = 0

  // ERROR!
  // cout << "A::num3 = " << A::num3 << endl;
  A a;
  cout << "get num3 = " << a.getNum3() << endl;
  a.setNum3(10);
  cout << "set num3 = " << a.getNum3() << endl;
  cout << "get num4 = " << a.getNum4() << endl;
  a.setNum4(20);
  cout << "set num4 = " << a.getNum4() << endl;
  // Ans:
  // get num3 = 0
  // set num3 = 10

  return 0;
}
