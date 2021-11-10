#include <stdio.h>

int main(){
    
    int userInput, max, pos, counter;
    pos = 0;
    counter = 0;
    userInput = 1;
    max = 0;
    
    while (userInput != 0){
        printf("Insira um valor ");
        scanf(" %i", &userInput);
        
        if (userInput != 0){
            counter++;
        }
        
        if (max < userInput){
            max = userInput;
            pos = counter;
        }
    }
    printf("maximo %i na posiçao %i\n", max, pos);
    
    return 0;
}