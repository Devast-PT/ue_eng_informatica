//cabeçalhos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//declarar funçoes

int pergunta2(void);
int pergunta3(void);
int pergunta4(void);
int pergunta5(void);
int pergunta7(void);
int pergunta8(void);
int pergunta9(void);
int pergunta10(void);
int pergunta11(void);
int pergunta12(void);


//main

int main(int argc, char *argv[]){
    char userInput;
    int check = 1;
    while (check){
        system("clear");
        if (argc == 1){
            printf("\n\n\n*========================*\n");
            printf("| 2 - Pergunta 2         |\n");
            printf("| 3 - Pergunta 3         |\n");
            printf("| 4 - Pergunta 4         |\n");
            printf("| 5 - Pergunta 5         |\n");
            printf("| 7 - Pergunta 7         |\n");
            printf("| 8 - Pergunta 8         |\n");
            printf("| 9 - Pergunta 9         |\n");
            printf("| A - Pergunta 10        |\n");
            printf("| B - Pergunta 11        |\n");
            printf("| C - Pergunta 12        |\n");            
            printf("| Q - Sair Programa      |\n");
            printf("*========================*\n");
            printf("Porfavor insira o numero da pergunta que pretende selecionar: ");
            scanf(" %c", &userInput);

    
        } else if (strlen( argv[1] ) == 2) {
            userInput = argv[1][0];
            
            printf("%c", argv[1][0]);
        }
            
        
        switch(userInput){
            case 50:
                pergunta2();
                break;
            case 51:
                pergunta3();
                break;
            case 52:
                pergunta4();
                break;
            case 53:
                pergunta5();
                break;
            case 55:
                pergunta7();
                break;
            case 56:
                pergunta8();
                break;
            case 57:
                pergunta9();
                break;
            case 65:
                pergunta10();
                break;
            case 66:
                pergunta11();
                break;
            case 67:
                pergunta12();
                break;                   
                                
            case 81:
            case 113:
                printf("Obrigado e Volte sempre\n");
                check = 0;
                break;
            default:
                printf("Nenhuma Opçao valida selecionada! \n");
                sleep(1);
        }
}
    
    return 0;
}






/* Funçoes para resolver cada exercicio
*
*   Funçao pergunta2:
*   Determina o perımetro, a area e o volume de uma circunferencia, cırculo e esfera (respetivamente) cujo raio e especificado pelo utilizador
*
*
*
*/

int pergunta2(void){
    // variable
    struct circuloPAV {
        float perim, pi, area, volume, raio;
    } circulo;
    circulo.pi = 3.141593;
    printf("\n\nQual o raio? ");
    scanf(" %f", &circulo.raio);
    
    circulo.perim = circulo.pi* (circulo.raio*2);
    printf("Perimetro da circunfer^encia = %.4F\n", circulo.perim);
    
    circulo.area = ( circulo.raio * circulo.raio ) * circulo.pi;    
    printf("Area do circulo = %F\n", circulo.area);

    circulo.volume = (4 * circulo.pi * (circulo.raio * circulo.raio * circulo.raio))/3;    
    printf("Volume da esfera = %F\n", circulo.volume);
    
    return 0;
}

int pergunta3(void){
    float dist, vel;
    printf("\n\nQual a velocidade em km\\h? ");
    scanf(" %F", &vel);
    
    dist = 0.5 * ((vel * vel) / (10 * 10));
    printf("A uma velocidade de %i km\\h, a sua distancia de travagem é %.2F metros", (int) vel, dist);
    
    return 0;
}

int pergunta4(void){
    //variaveis
    int userInput = 0;
    
    //input inteiro, output raiz quadrada desse numero
    
    printf("Qual o numero? ");
    scanf(" %i", &userInput);
    if (userInput < 0){
        printf("O numero inserido e negativo.\n");
        return 0;
    }
    userInput = sqrt(userInput);
    printf("A raiz quadrada e %i\n", userInput);
    sleep(2);
    
    return 0;
}

int pergunta5(void){
    int num_1, num_2, num_3;
    
    printf("numero 1: ");
    scanf(" %i", &num_1);
    printf("numero 2: ");
    scanf(" %i", &num_2);
    printf("numero 3: ");
    scanf(" %i", &num_3);

    if ( num_1 > num_2 && num_1 < num_3){
        printf("E o numero é %i\n", num_1);
    } else if (num_2 > num_1 && num_2 < num_3){
        printf("E o numero é %i\n", num_2);
    } else {
        printf("E o numero é %i\n", num_3);
    }
    sleep(1.5);
    return 0;
}

int pergunta7(void){
    float altura_input;
    
    printf("Qual a altura da pessoa? ");
    scanf("%f", &altura_input);
    
    if (altura_input >= 1.3 && altura_input < 1.6){
        printf("Essa pessoa é baixa!\n");
        sleep(1.5);
        return 0;
    } else if (altura_input >= 1.6 && altura_input < 1.75){
        printf("Essa pessoa é mediana!\n");
        sleep(1.5);
        return 0;        
    }else if (altura_input >=1.75 && altura_input < 1.9){
        printf("Essa pessoa é alta!\n");
        sleep(1.5);
        return 0;       
    }else if (altura_input > 1.9){
        printf("Essa pessoa é altissima!\n");
        sleep(1.5);
        return 0;       
    } else {
        printf("Essa pessoa é baixissima!\n");
        sleep(1.5);
    }
    
    return 0;
}

int pergunta8(void){
    int numero_utilizador[2];
    
    printf("Indique os numeros 1 e 2: ");
    scanf("%i %i", &numero_utilizador[0], &numero_utilizador[1]);
    
    if ( (numero_utilizador[0]%numero_utilizador[1]) == 0){
        printf(" %i é multiplo de %i\n", numero_utilizador[0], numero_utilizador[1]);
        sleep(1.5);
    } else {
        printf(" %i nao é multiplo de %i\n", numero_utilizador[0], numero_utilizador[1]);
        sleep(1.5);
    }
    
    return 0;
}

int pergunta9(void){
    int numero_3algo;
    int check = 1;
    while (check){
        printf("Insira um numero de tres algorismos ");
        scanf(" %i", &numero_3algo);
        if (numero_3algo < 1000 && numero_3algo > 99){
            check = 0;
        }
    }
    if ((numero_3algo/100) == (numero_3algo%10)){
        printf("%i é capicua\n", numero_3algo);
    } else {
        printf("%i nao é capicua\n", numero_3algo);
    }
    sleep(1.5);
    
    return 0;
}

int pergunta10(void){
    float coord_x, coord_y;
    printf("Indique as coordenadas x e y: ");
    scanf("%f %f", &coord_x, &coord_y);
    
    if (coord_x > 0 && coord_y > 0) {
        printf("O ponto encontra-se no quadrante 1.\n");
        sleep(1.5);
    } else if (coord_x < 0 && coord_y > 0) {
        printf("O ponto encontra-se no quadrante 2.\n");
        sleep(1.5);
    } else if (coord_x < 0 && coord_y < 0) {
        printf("O ponto encontra-se no quadrante 3.\n");
        sleep(1.5);
    } else if (coord_x > 0 && coord_y > 0) {
        printf("O ponto encontra-se no quadrante 4.\n");
        sleep(1.5);
    } else if (coord_x == 0 && coord_y == 0) {
        printf("Coordenada na origem (0 , 0).\n");
        sleep(1.5);
    } else if (coord_x == 0) {
        printf("Coordenada no eixo dos Y.\n");
        sleep(1.5);
    } else {
        printf("Coordenada no eixo dos X.\n");
        sleep(1.5);        
    }
    
    return 0;
}

int pergunta11(void){
    float ponto1_x, ponto1_y, ponto2_x, ponto2_y;
    
    printf("Indique as coordenada x e y do ponto 1: ");
    scanf("%f %f", &ponto1_x, &ponto1_y);
    printf("Indique as coordenada x e y do ponto 2: ");
    scanf("%f %f", &ponto2_x, &ponto2_y);
    
    ponto2_x -= ponto1_x;
    ponto2_y -= ponto1_y;
    printf("A distancia entre os dois pontos: %f\n", (float) sqrt( (((float)pow(ponto2_x, 2)) + ((float)pow(ponto2_y, 2)) )));
    
    sleep(1.5);
    
    
    return 0;
}

int pergunta12(void){
    int ano;
    
    printf("Introduza o ano: ");
    scanf("%i", &ano);
    
    if ( ( ( ano % 4 ) == 0) &&  ( ( ( ano % 100 ) != 0 ) || ( ( ano % 400 ) == 0 )) ){
        printf("O ano é bisexto\n");
        sleep(1.5);        
    }else {
    printf("O ano nao é bisexto\n");
    sleep(1.5);
    }
    return 0;
}