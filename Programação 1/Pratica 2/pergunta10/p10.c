
#include <stdio.h>

int main(){
    //pede ao utilizador input de um numero real
    
    float userInput, y;
    printf("Insira um numero: ");
    scanf("%f", &userInput);
    
    
    //Devolve so com 3 casas decimais

    y = userInput * 1000;
    userInput = (int) y;
    userInput  = userInput/1000.0;
    
    printf("%.3f\n", userInput);
    
    return 0;
}