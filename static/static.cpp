#include <iostream>

using namespace std;

void func();

int main(){

  int n = 5;
  for(int i = 0; i < n; i++){
    cout << i+1 << ". ";
    func();
    cout << endl;
  }

  return 0;
}

// local static
// 用法和 global 變數相似
void func(){
  // static 變數只有在第一次呼叫function時才被初始化
  static int x = 0;
  int y = 0;

  x++;
  y++;

  cout << "x = " << x << ", y = " << y << endl;
}
