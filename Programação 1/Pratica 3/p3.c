//cabeçalhos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//declarar funçoes

int pergunta2(void);
int pergunta3(void);

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
            printf("| Q - Sair Programa      |\n");
            printf("*========================*\n");
            printf("Porfavor insira o numero da pergunta que pretende selecionar: ");
            scanf(" %c", &userInput);

    
        } else if (strlen( argv[1] ) == 2) {
            userInput = argv[1][0];
        }
        
        switch(userInput){
            case 50:
                pergunta2();
                printf("\nObrigado e Volte sempre\n");
                check = 0;
                break;
            case 51:
                pergunta3();
                printf("\nObrigado e Volte sempre\n");
                check = 0;
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