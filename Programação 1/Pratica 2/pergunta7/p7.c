#include <stdio.h>


int main(){
    float real;
    char character;
    int inteiro;
    
    // Pede ao utilizador para inserir um real um character e um inteiro
    printf("real: ");
    scanf("%f", &real);
    
    printf("caracter: ");
    scanf("%s", &character);
    
    printf("inteiro: ");
    scanf("%i", &inteiro);
    
    
    // inverte a ordem no print
    printf("%i %c %.2f", inteiro, character, real);
    return 0;
}