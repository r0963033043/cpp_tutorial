#include <stdio.h>

int add(int x, int y){
    return x+y;
}

int multiply(int x, int y){
    return x*y;
}

int func(int x, int y, int (*funcPtr)(int,int)){
    return funcPtr(x,y);
}


/* Use typedef */
typedef int (*calculation)(int,int);

int operation(int x, int y, calculation calc){
    x++;
    y++;
    return calc(x,y);
}



int main(){

    int a = 5;
    int b = 7;
    int c;

    c = func(a, b, add);
    printf("%d + %d = %d\n", a, b, c);

    c = func(a, b, &multiply);
    printf("%d * %d = %d\n", a, b, c);
    printf("\n");



    /* Use typedef */
    c = operation(a, b, add);
    printf("%d + %d = %d\n", a+1, b+1, c);

    c = operation(a, b, multiply);
    printf("%d * %d = %d\n", a+1, b+1, c);

    return 0;
}
