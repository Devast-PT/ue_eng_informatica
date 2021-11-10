#include <stdio.h>


int main(){
    int mmc, a, b;
    int mdc[3];
    
    printf("Porfavor insira dois valores: ");
    scanf(" %i %i",&mdc[1], &mdc[2]);
    
    if (mdc[2] > mdc[1]){
        mdc[0] = mdc[2];
        mdc[2] = mdc[1];
    } else {
        mdc[0] = mdc[1];
        mdc[1] = mdc[2];
    }
    a = mdc[0];
    b = mdc [1];
    
    while ( (mdc[0]%mdc[1]) != 0){
        mdc[2] = mdc[0]%mdc[1];
        mdc[0] = mdc[1];
        mdc[1] = mdc[2];
    }
    mmc = (a*b) / mdc[2];
    printf("O mmc é : %i\n", mmc);

    
    return 0;
}