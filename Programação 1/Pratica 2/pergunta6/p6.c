#include <stdio.h>

int main(){
    // declara variavel para storage
    float userInput;
    
    // pede o input do utilizador em graus celsius
    printf("Temperatura em graus Celsius: ");
    scanf("%f", &userInput);
    
    //mostra a sua conversão
    printf("Em kelvin: %.2f\n", userInput + 273.15);
    printf("Em fahrenheit: %.2f F\n", (userInput * (9.0/5)) + 32 );
    
    return 0;
}