#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int factorial(int n);
int fibonacci(int n);
int soma(int n);
int multiplo(int n, int i);
int mdc(int m, int n);
int A(int m, int n);
int pascal(int l, int c);
int trianguloPascal(int n, int* linha, int* coluna);

int main(int argc, char* argv[]){
    int input;
    int i;
    int choice;
    printf("Escolha a pergunta: ");
    scanf("%i", &choice);

    if(choice == 1){
        printf("Escolha um numero para o factorial: ");
        scanf("%i", &input);
        printf("fact %i\n", factorial(input));
    }else if (choice == 2){
        printf("Escolha o numero do fibonacci: ");
        scanf("%i", &input);
        printf("fib %i\n", fibonacci(input));
    } else if (choice == 3){
        printf("Escolha o numero para o somatorio: ");
        scanf("%i", &input);
        printf("som %i\n", soma(input));
    } else if (choice == 4){
        printf("Escolha o numero para fazer o multiplo: ");
        scanf("%i", &input);
        scanf("%i", &i);
        printf("mult %i\n", multiplo(input, i));
    }else if (choice == 5){
        printf("Escolha os dois numero para achar o minimo multiplo comun: ");
        scanf("%i", &input);
        scanf("%i", &i);
        printf("mdc %i\n", mdc(input, i));
    } else if (choice == 6){
        printf("Escolha os dois numeros para o Ack");
        scanf("%i", &input);
        scanf("%i", &i);
        printf("Ack %i\n", A(input, i));
    } else if (choice == 7){
        printf("Posiçao de pascal: ");
        scanf("%i", &input);
        scanf("%i", &i);
        printf("Pasc %i\n", pascal(input, i));
    } else if (choice == 8) {
        scanf("%i", &input);
        printf("Triangulação das Bermudas: \n");
        int linha = 1, coluna = 1;
        trianguloPascal(input, &linha, &coluna);
    }
    return 0;
}




int factorial(int n){
    int output = 1;
    while(n>0){
        output *= n;
        n--;
    }
    
    return output;
}

int fibonacci(int n){
    if (n == 1 || n == 2){
        return n;
    } else if (n > 1){
        return fibonacci(n -1) + fibonacci(n - 2);
    }
}


int soma(int n){

    if (n == 1){
        return 1;
    } else {
        return n + soma(n-1);
    }
}


int multiplo(int n, int i){

    if (i == 1){
        return n;
    } else {
        return n + multiplo(n, i-1);
    }
    printf("Erro");
    return 0;
}



int mdc(int m,int n){
    if (m == n){
        return m;
    } else if(m > n){
        return mdc(m-n, n);
    } else if(m < n){
        return mdc(m, n-m);
    }
}


int A(int m, int n){

    if (m == 0){
        return n+1;
    } else if (m > 0 && n == 0){
        return A( m - 1 , 1);
    } else if (m > 0 && n > 0){
        return A( m -1 , A(m , n -1));
    }
    return 0;
}



int pascal(int l, int c){

    if (c == 1 || l == c){
        return 1;
    } else {
        return pascal((l-1), (c-1)) + pascal((l - 1), c);
    }
}
/*
void trianguloPascal(int n){

    for(int linha = 1; linha <= n; linha++){
        for ( int coluna = 1; coluna <= linha; coluna++ ){
            int returning;
            returning = pascal(linha, coluna);
            printf("%i ", returning);
        }               
        printf("\n");
    }
}
*/

int trianguloPascal(int n, int* linha, int* coluna){
    if (*linha == n && *coluna == *linha){
        printf("%i\n", pascal(*linha, *coluna));
    } else if (*linha == *coluna){
        printf("%i \n", pascal(*linha, *coluna));
        *linha = *linha + 1;
        *coluna = 1;
        trianguloPascal(n, linha, coluna);
    } else if (*linha > *coluna){
        printf("%i ", pascal(*linha, *coluna));
        *coluna = *coluna + 1;
        trianguloPascal(n, linha, coluna);
    }
    
}