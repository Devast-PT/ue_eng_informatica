#include <stdio.h>
#include <math.h>


int main(){
    // vars
    
    float a, b, c, x1, x2;
    
    float divisor, raiz;
    
    printf("Insira o valor de a: ");
    scanf(" %f", &a);
    printf("Insira o valor de b: ");
    scanf(" %f", &b);
    printf("Insira o valor de c: ");
    scanf(" %f", &c);
    
    //contas
    if ( (2*a) == 0){
        printf("Erro! O valor de a nao pode ser 0\n");
        return 1;
    } else {
        divisor = 2*a;
    }
    
    raiz = ( b * b ) - (4 * a * c);
    
    if (raiz < 0){
        printf("Erro ! Valor da Raiz nao pode ser inferior a 0\n");
        return 1;
    } 
    
    x1 = ( -b + sqrt(raiz) )/divisor;
    x2 = ( -b - sqrt(raiz) )/divisor;
    
    printf("As raizes nao x1 %.2f e x2 %.2f\n", x1, x2);
    
    return 0;

}