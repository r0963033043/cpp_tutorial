#include <stdio.h>

int g_int = 10;
int p_int = 20;
int r_int = 30;

void copyPtr(int *pInt){
    pInt = &g_int;
}

/* pointer to pointer */
void p2p(int **pInt){
    *pInt = &p_int;
}

/* reference to pointer */
/* only for C++ */
void r2p(int *&rInt){
    rInt = &r_int;
}


int main(){

    int localInt = 1;
    int *localPInt = &localInt;

    copyPtr( localPInt );
    printf("%d  --> Not change\n", *localPInt);

    p2p( &localPInt );
    printf("%d  --> Change!!!\n", *localPInt);

    r2p( localPInt );
    printf("%d  --> Change!!!\n", *localPInt);
    // --> int *&a = localPInt;


    //r2p( &localInt );  --> Error



    return 0;
}
