#include <stdio.h>

int main(){
    float n1, n2, b1, b2, aux;
    
    
    printf("Insira o primeiro numerador: ");
    scanf("%f", &n1);
    printf("Insira o primeiro denominador: ");
    scanf("%f", &b1);
    
    
    printf("Insira o segundo numerador: ");
    scanf("%f", &n2);
    printf("Insira o segundo denominador: ");
    scanf("%f", &b2);
    
    printf("\n Conta a Efectuar: (%.2f / %.2f) + (%.2f / %.2f)\n", n1, b1, n2 ,b2);
    
    if (b1 != b2){
        n1 *= b2;
        aux = b1;
        b1 *= b2;
        
        n2 *= aux;
        b2 *= aux;
    }
    
    aux = n1 + n2;
    printf("\n Conta a Efectuar: ((%.2f + %.2f) / %.2f) = %.2f\n", n1, n2, b1, aux/b1);
    
    return 0;
    
    
}