#include "calc.h"
void calcSum(int a, int b){
    cout << a + b;
}

void calcDiv(int a, int b){
    if( b == 0 ){
        cout << "Illegal value: Divider is 0";
        return;
    }
    cout << (float) a / (float) b;
}

int retSum(int a, int b){
    return a + b;
}

float retDiv(int a, int b){
    if( b == 0 ){
        cout << "Illegal value: Divider is 0";
        return 0;
    }
    return (float) a / (float) b;
}
