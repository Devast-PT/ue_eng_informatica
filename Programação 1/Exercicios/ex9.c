#include <stdio.h>
#include <math.h>


int main(){
    
    int input, calc;
    int aux;
    float p1, p2, p3;
    printf("Insira o valor de x: ");
    scanf("%i", &input);
    
    for (int a = 1; a <= 10; a++){
        aux = (a*2)-1;
        p1 = pow(-1, aux);
        p2 = 1 / aux;
        p3 = pow(input, aux);
        calc = calc + (p1*p2*p3);
        printf("%.2f p1. %.2f p2. %.2f p3. %f calc\n", p1, p2, p3, calc);
        
    }
    printf("Vamos la a ver: %i\n", calc);
    
    return 0;
}