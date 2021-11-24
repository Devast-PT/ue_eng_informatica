#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int factorial(int n);
int fibonacci(int n);

int main(int argc, char* argv[]){
    int input;
    
    scanf("%i", &input);
    printf("%i\n", factorial(input));
    
    
    scanf("%i", &input);
    printf("%i\n", fibonacci(input));
    
    
    
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
        return n + fibonacci(n - 1);
    }
}