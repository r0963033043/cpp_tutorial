#include <iostream>

using namespace std;

int main(){
  // Conditional operator 條件運算子
  // 如果(判斷式)成立，執行前者，否則執行後者
  // (判斷式) ? (成立) : (不成立)
  // (xxx) ? if : else

  // Logical operator 邏輯運算
  // &&, ||, !
  // and, or, not
  int num = 10;
  cout << "num = " << num << endl;

  cout << "num 介於5-15嗎? ";
  if(num > 5 && num < 15)
    cout << "yes";
  else
    cout << "no";
  cout << endl << endl;

  cout << "num < 5 或 > 15嗎? ";
  cout << ( (num < 5 || num > 15) ? "yes": "no" ) << endl;

  cout << "num 並非 < 5 或 > 15嗎? ";
  cout << ( !(num < 5 || num > 15) ? "yes": "no" ) << endl;
  cout << endl;

  // Bitwise operator 位元運算
  // &, |, !, ^, ~
  // AND, OR, NOT, XOR, 補數(0->1, 1->0)
  cout << "AND" << endl;
  cout << "0 AND 0 = " << (0 & 0) << endl;
  cout << "0 AND 1 = " << (0 & 1) << endl;
  cout << "1 AND 0 = " << (1 & 0) << endl;
  cout << "1 AND 1 = " << (1 & 1) << endl;
  cout << endl;

  cout << "OR" << endl;
  cout << "0 OR 0 = " << (0 | 0) << endl;
  cout << "0 OR 1 = " << (0 | 1) << endl;
  cout << "1 OR 0 = " << (1 | 0) << endl;
  cout << "1 OR 1 = " << (1 | 1) << endl;
  cout << endl;

  cout << "XOR" << endl;
  cout << "0 XOR 0 = " << (0 ^ 0) << endl;
  cout << "0 XOR 1 = " << (0 ^ 1) << endl;
  cout << "1 XOR 0 = " << (1 ^ 0) << endl;
  cout << "1 XOR 1 = " << (1 ^ 1) << endl;
  cout << endl;

  cout << "NOT" << endl;
  cout << "NOT 0 = " << !0 << endl;
  cout << "NOT 1 = " << !1 << endl;
  cout << endl;

  // ^ 補數
  // 1補數, 2補數
  // 0->1, 1->0
  cout << "補數" << endl;
  char n = 255;
  cout << "char n = 255" << endl;
  cout << "n = " << n << endl;
  cout << "~n = " << ~n << endl;
  cout << "~0001 = " << ~0001 << endl;
  cout << "~1110 = " << ~1110 << endl;
  cout << endl;


  cout << "應用1" << endl;
  cout << "num = " << num << endl;
  cout << "num 是 偶數 還是 奇數? ";
  cout << ( (num & 1) ? "奇數" : "偶數" ) << endl;
  cout << endl;

  cout << "應用2" << endl;
  char ch = 'A';
  cout << "ch = " << ch << endl;
  ch = ch ^ 0x7;
  cout << "encoding: ch = " << ch << endl;
  ch = ch ^ 0x7;
  cout << "decoding: ch = " << ch << endl;

  return 0;
}
