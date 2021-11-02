#include <stdio.h>
#include <math.h>


//dec funçoes
int map(int input);
int pergunta1(void);
int pergunta2(void);
int pergunta3(void);
int pergunta4(void);
int pergunta5(void);
int pergunta6(void);
int pergunta7(void);
int pergunta8(void);
int pergunta9(void);
int pergunta10(void);

//main

int main(int argc, char* argv[]){
    int input;
    int check = 1;
    while (check){
        printf("Insira o numero da pergunta que pretende: ");
        scanf("%i", &input);
        
        
        if (input > 0 && input < 11){
            check = map(input);
            
        } else {
            check = 1;
        }
    }
    

    return 0;
}

//funçoes

int map(int input){
    if ( input == 1){
        pergunta1();
        return 0;
    } else if ( input == 2) {
        pergunta2();
        return 0;
        
    } else if ( input == 3) {
        pergunta3();
        return 0;
        
    } else if ( input == 4) {
        pergunta4();
        return 0;
        
    } else if ( input == 5) {
        pergunta5();
        return 0;
        
    } else if ( input == 6) {
        pergunta6();
        return 0;
        
    } else if ( input == 7) {
        pergunta7();
        return 0;
        
    } else if ( input == 8) {
        pergunta8();
        return 0;
        
    } else if ( input == 9) {
        pergunta9();
        return 0;
        
    } else if ( input == 10) {
        pergunta10();
        return 0;
    }
    return 1;
}

int pergunta1(void){
    // var
    int x, y;
    
    printf("\nInsira o numero 1: ");
    scanf(" %i", &x);
    printf("Insira o numero 2: ");
    scanf(" %i", &y);
    
    if (x > y){
        
        printf("1\n");
        return 0;
        
    } else if (x == y){
        
        printf("0\n");
        return 0;
        
    } else {
        
        printf("-1\n");
        return 0;
    
    }
    return 0;
}

int pergunta2(void){
    // var
    float cateto_1, cateto_2, hipotenusa;
    
    printf("Qual o comprimento do cateto 1: ");
    scanf(" %f", &cateto_1);
    
    printf("Qual o comprimento do cateto 2: ");
    scanf(" %f", &cateto_2);
    
    hipotenusa = sqrt( ( ( cateto_1 * cateto_1 ) + ( cateto_2 * cateto_2) ));
    printf("%.1f\n", hipotenusa);
    
    return 0;
}

int pergunta3(void){
    //var
    int limite;
    
    printf("Qual o limite da contagem? ");
    scanf(" %i", &limite);
    
    for (int i = 1 ; limite >= i ; i++){
        printf("%i\n", i);
    }
    for (int i = limite - 1 ; i >= 0 ; i--){
        printf("%i\n", i);
    }
    
    return 0;
}

int pergunta4(void){
    //var
    float userInput = 1.0;
    float sum = 0;
    
    while ( 1 ){
    printf("Qual o valor? ");
    scanf(" %f", &userInput);
    if (userInput == 0){
        printf("A soma é %.1f\n", sum);
        return 0;
    } else {
        sum += userInput;
    }
    }
    
    return 0;
}

int pergunta5(void){
    //var
    float userInput = 1.0;
    float sum = 0;
    int count = 0;
    
    while ( 1 ){
    printf("Qual o valor? ");
    scanf(" %f", &userInput);
    if (userInput == 0){
        printf("Valores introduzidos: %i\n", count);
        if (count != 0){
            printf("Media %.1f\n", sum/count);
        }
        return 0;
    } else {
        sum += userInput;
        count++;
    }
    }
    
    return 0;
}

int pergunta6(void){
    //var
    float user, est_1, est_2, epsilon;
    
    printf("Qual o valor de n? ");
    scanf(" %f", &user);
    
    epsilon = 0.0001;
    est_1 = user/2;
    printf("Qual o valor da estimativa inicial? %i\n", (int) est_1);
    
    est_2 = (est_1 + (user / est_1)) / 2;
    
    while ( ((est_2 - est_1) * (est_2 - est_1)) >= epsilon){
        est_1 = est_2;
        est_2 = (est_1 + (user / est_1)) / 2;
    }
    printf("raiz= %f\n", est_2);
    
    return 0;
}

int pergunta7(void){
    //var
    float gasolina95, gasoleo, gasolina98, litros;
    int numb = 0;
    
    printf("Quantos litros? ");
    scanf(" %f", &litros);
    while (! (numb >= 1 && numb <= 3)){
        printf("Qual o combustivel (1:gasolina95, 2:gasoleo, 3:gasolina98) ? ");
        scanf(" %i", &numb);
    }
    if (numb == 1){
        gasolina95 = 1.798;
        int dia;
        printf("Qual o dia do abastecimento? ");
        scanf(" %i", &dia);
        if ( dia >= 15){
            gasolina95 += 0.021;
        }
        printf("O custo e %.2f\n", gasolina95 * litros);
        
    }   else if (numb == 2){
        gasoleo = 1.711;
        int dia;
        printf("Qual o dia do abastecimento? ");
        scanf(" %i", &dia);
        if ( dia >= 15){
            gasoleo += 0.023;
        }
        printf("O custo é %.2f\n", gasoleo * litros);
        
    } else {
        gasolina98 = 1.838;
        printf("O custo é %.2f\n", gasolina98 * litros);
    }
    
    return 0;
}

int pergunta8(void){
    //var
    int user;
    
    printf("Qual o numero? ");
    scanf(" %i", &user);
    
    if (user < 0){
        printf("Valor Negativo \n");
    } else if (user == 0 || user == 1) {
        printf("O factorial é 1\n");
    } else {
        int increment = user;
        user--;
        
        while ( user > 0 ){

            increment *= user;
            user--;
        }
        printf("O factorial é %i\n", increment);
    }
    return 0;
}

int pergunta9(void){
    //var
    int a, b;
    
    printf("valor a: ");
    scanf(" %i", &a);
    printf("valor b: ");
    scanf(" %i", &b);
    
    for (int i = 1 ; i <= 50 ; i++){
        if ( (i%a) == 0 ){
            printf("%i\n", i);
        } else if ((i%b) == 0){
           printf("%i\n", i);
        }
    }
    return 0;
}

int pergunta10(void){
    int a, b;
    
    printf("valor a: ");
    scanf(" %i", &a);
    printf("valor b: ");
    scanf(" %i", &b);
    
    for (int i = 1 ; i <= 50 ; i++){
        if ( ( (i%a) == 0 ) && ( (i%b) == 0 )){
            
            printf("%i: %i %i\n", i, a , b);
        
            
        } else if ( (i%a) == 0 ){
            
            printf("%i: %i\n", i, a);
        
            
        } else if ((i%b) == 0){
            
           printf("%i: %i\n", i, b);
        
            
        }
    }
    return 0;

}


