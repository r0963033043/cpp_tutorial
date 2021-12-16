#include <iostream>

using namespace std;

int main(){

    char *str = (char*)"hello";
    size_t len = sizeof(str);

    char *strRev;
    strRev = (char*)malloc(len * sizeof(char));

    //cout << "len = " << len << "\n";

    int i;
    for(i=0; i<len; i++){
        *(strRev+i) = *(str+len-i-1);
    }


    for(i=0; i<len; i++){
        cout << *(str+i);
    }
    cout << "\n";

    for(i=0; i<len; i++){
        cout << *(strRev+i);
    }
    cout << "\n";



    return 0;
}
