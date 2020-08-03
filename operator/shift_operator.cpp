#include <iostream>

using namespace std;

int main(){
  // shift operator 位移運算子
  // <<, >>
  // 左移, 右移
  int num = 1;
  cout << "num = " << num << endl;
  num = num << 1;
  cout << "2 的 1 次方 = " << num << endl;

  num = num << 1;
  cout << "2 的 2 次方 = " << num << endl;

  num = num << 1;
  cout << "2 的 3 次方 = " << num << endl;

  return 0;
}
