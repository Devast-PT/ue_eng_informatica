#include <stdio.h>



int main(){
    // input utilizador
    
    int userInput;
    
    printf("Insira um numero: ");
    scanf("%i", &userInput);
    
    
    //check Multiplo de 3 e Impar
    if ( (userInput % 3) == 0 && (userInput % 2) != 0 ) {
        printf("Numero é multiplo de 3 e impar\n");
    } else if ( (userInput % 3) == 0 ){
        printf("Numero é multiplo de 3\n");
    } else if ( (userInput % 2) != 0 ){
        printf("Numero é impar\n");
    } else {
        printf("Numero nao é impar nem multiplo de 3\n");
    }
    
    return 0;
}