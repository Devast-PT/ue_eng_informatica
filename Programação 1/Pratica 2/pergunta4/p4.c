#include <stdio.h>

// CONSTANTES
float DOLARTOEURO = 0.85; //Taxa Cambio Dolar para Euro


int main(){
    
    float userInput; //variavel para armazenar resposta
    
    // Recebe input do utilizador e devolve conversão
    printf("Valor em EUR: ");
    scanf("%f", &userInput);
    printf("Valor em DOL: %.1f\n", userInput/DOLARTOEURO);
    return 0;
}