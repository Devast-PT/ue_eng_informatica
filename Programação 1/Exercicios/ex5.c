#include <stdio.h>


int main(){
    
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
    
    while ( (mdc[0]%mdc[1]) != 0){
        mdc[2] = mdc[0]%mdc[1];
        mdc[0] = mdc[1];
        mdc[1] = mdc[2];
    }
    
    printf("O M.D.C é : %i\n", mdc[2]);
    
    
    
    return 0;
}