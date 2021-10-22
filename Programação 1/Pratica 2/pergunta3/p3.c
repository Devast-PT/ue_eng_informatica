#include <stdio.h>

// CONSTANTES
float DOLARTOEURO = 0.85; //Taxa Cambio Dolar para Euro


int main(){
    
    float userInput; //variavel para armazenar resposta
    
    // Recebe input do utilizador e devolve conversão
    printf("Valor em USD: ");
    scanf("%f", &userInput);
    printf("Valor em EUR: %.2f\n", userInput*DOLARTOEURO);
    return 0;
}