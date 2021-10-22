//programa recebe dois numeros e dá output das operaçoes aritmeticas entre ambos

#include <stdio.h>


int main(){
    //declara variavels para storage
    int num_1, num_2;
    
    //pede ambos os numeros
    printf("Numero 1: ");
    scanf("%i", &num_1);
    printf("Numero 2: ");
    scanf("%i", &num_2);
    printf("Soma = %i\nDiferença = %i\nProduto = %i\nDivisão = %i\nResto da Divisão = %i\n", num_1+num_2, num_1-num_2, num_1*num_2, num_1/num_2, num_1%num_2);
    return 0;
}