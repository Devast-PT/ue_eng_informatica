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
void trianguloPascal(int n);

int main(int argc, char* argv[]){
    int input;
    
    scanf("%i", &input);
    printf("fact %i\n", factorial(input));
    
    
    scanf("%i", &input);
    printf("fib %i\n", fibonacci(input));
    
    scanf("%i", &input);
    printf("som %i\n", soma(input));

    {

    scanf("%i", &input);
    int i;
    scanf("%i", &i);
    printf("mult %i\n", multiplo(input, i));

    }

    scanf("%i", &input);
    int i;
    scanf("%i", &i);
    printf("mdc %i\n", mdc(input, i));



    scanf("%i", &input);
    scanf("%i", &i);
    printf("Ack %i\n", A(input, i));


    scanf("%i", &input);

    scanf("%i", &i);
    printf("Pasc %i\n", pascal(input, i));

    scanf("%i", &input);
    printf("PascTriang \n");
    trianguloPascal(input);


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

    if (c == 0 || l == c){
        return 1;
    } else {
        return pascal(l-1, c-1) + pascal(l-1,c);
    }
}

void trianguloPascal(int n){

    for(int l = 1; l < n; l++){
        for ( int c = 1; c < n; c++ ){
            printf("%i ", pascal(l, c));
        }               
        printf("\n");
    }
    }
