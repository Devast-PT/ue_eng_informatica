#include <stdio.h>



int main(){
    
    int n3_Algor, a1, a2, a3, result;
    
    printf("Insira o Numero de 3 Algorismos: ");
    scanf("%i", &n3_Algor);
    
    if ( (n3_Algor <100) || (n3_Algor > 999) ){
        printf("Error! Numero tem mais ou menos que 3 algorismos\n");
        return 1;
    }
    
    a3 = n3_Algor%10;
    
    a1 = n3_Algor;
    a1 /= 100;
    
    a2 = n3_Algor;
    a2 /= 10;
    a2 %= 10;
    
    result = (a1*a1*a1) + (a2*a2*a2) + (a3*a3*a3);
    if (result == n3_Algor){
        printf(" O algorismo é igual à soma do cubo dos algarismos que o constitui! \n");
        return 0;
    }
    printf(" O algorismo não é igual \n");

    
    
    
    return 0;
}