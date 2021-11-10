#include <stdio.h>

int main(){
    
    int userInput, max;
    userInput = 1;
    max = 0;
    
    while (userInput != 0){
        printf("Insira um valor ");
        scanf(" %i", &userInput);
        if (max < userInput){
            max = userInput;
        }
    }
    printf("maximo %i\n", max);
    
    return 0;
}