#include <stdio.h>

int main(){
    int userInput;
    
    
    // pede pelo numero de 3 algorismos
    printf("Numero: ");
    scanf("%i", &userInput);
    
    // devolve numeros em separado
    
    printf("%i \n%i \n%i \n", userInput/100, (userInput/10)%10,  userInput%10);
    return 0;
}