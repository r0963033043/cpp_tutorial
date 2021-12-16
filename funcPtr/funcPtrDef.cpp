#include <stdio.h>

void func1(int x, char c){
    printf("func1");
    printf("\n");
}

void func2(int x, char c){
    printf("func2");
    printf("\n");
}

void (*funcPtr1)(int x, char c); //{}

void (*funcPtr2)(int, char) = &func2;
void (*funcPtr3)(int, char) = func2;


int main(){

    funcPtr1 = &func1;
    funcPtr1 = func2;

    return 0;
}
