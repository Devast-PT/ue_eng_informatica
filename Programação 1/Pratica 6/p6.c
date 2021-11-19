//librarys
#include <stdio.h>



//Call Functions
void menu(void);
void sucessor(int* n);
void quadradoDoSucessor(int* n);
float vel_Carro(int VelocidadeInicial, int Aceleraçao, float Tempo);
float pos_Carro(int VelocidadeInicial,int PosiçaoInicial, int Aceleraçao, float Tempo);
float custosEnvio(int numeroDeLivros,float preçoPrimeiraCopia, float preçoRestoCopias);
float custoEncomenda(int numeroCopias, float preçoUnitario, float pesoEncomenda);
int tempoDecorrido(int velocidade, int distancia);
int trianguloCheck(float ladoA, float ladoB, float ladoC);
int triangulo(float ladoA, float ladoB, float ladoC);
//main


int main (int argc, char* argv[]){

    menu();


    return 0;
}




void menu(void){
    int userInput;

    printf("Escolha a pergunta de 1 a 10: ");
    scanf("%i", &userInput);
    printf("\n\n******************************\n\n\n");
    
    if (userInput == 1){
        printf("Porfavor insira um numero: ");
        scanf("%i", &userInput);
        sucessor(&userInput);
        printf("O sucessor é: %i\n\n", userInput);

    } else if (userInput == 2){
        printf("Porfavor insira um numero: ");
        scanf("%i", &userInput);
        sucessor(&userInput);
        quadradoDoSucessor(&userInput);
        printf("O quadrado do sucessor é: %i\n\n", userInput);
    } else if (userInput == 3){
        int a, v0; 
        float t;
        printf("Velocidade inicial: ");
        scanf("%i", &v0);
        printf("Aceleraçao Constante: ");
        scanf("%i", &a);
        printf("Tempo decorrido(segundos): ");
        scanf("%f", &t);
        t = vel_Carro(v0, a, t);
        printf("A velocidade do carro é: %i\n\n", (int) t);
    } else if (userInput == 4){
        int p, p0, v0, a; 
        float t;
        printf("Velocidade inicial: ");
        scanf("%i", &v0);
        printf("Posiçao inicial: ");
        scanf("%i", &p0);
        printf("Aceleraçao Constante: ");
        scanf("%i", &a);
        printf("Tempo decorrido(segundos): ");
        scanf("%f", &t);
        t = pos_Carro(v0, p0, a, t);
        printf("A posiçao do carro é: %i\n\n", (int) t);
    } else if (userInput == 5){
        int n_Livros;
        float prim_Copia, copias;
        printf("Quantos livros: ");
        scanf("%i", &n_Livros);
        printf("Custo envio primeira copia: ");
        scanf("%f", &prim_Copia);
        printf("Custo envio resto copias: ");
        scanf("%f", &copias);
        copias = custosEnvio(n_Livros, prim_Copia, copias);
        printf("O custo total: %.2f\n\n", copias);
    } else if (userInput == 6){
        int n_Livros, peso;
        float preçoUnit;
        printf("Quantos livros: ");
        scanf("%i", &n_Livros);
        printf("Preço Unitário: ");
        scanf("%f", &preçoUnit);
        printf("Peso da encomenda: ");
        scanf("%i", &peso);
        preçoUnit = custoEncomenda(n_Livros, preçoUnit, peso); 
        printf("\nO custo total: %.2f\n\n", preçoUnit);
    } else if (userInput == 7){
        int velocidade, distancia;
        int tempo;
        printf("Distancia a percorrer: ");
        scanf("%i", &distancia);
        printf("Velocidade: ");
        scanf("%i", &velocidade);
        tempo = tempoDecorrido(velocidade, distancia);
        printf("\nA distancia é percorrida em: %i\n\n", tempo);
    } else if (userInput == 9){
        float lA, lB, lC;
        printf("Primeiro Lado: ");
        scanf("%f",&lA);
        printf("Segundo Lado: ");
        scanf("%f",&lB);
        printf("Terçeiro Lado: ");
        scanf("%f",&lC);
        userInput = trianguloCheck(lA, lB, lC);
        if (userInput == 1){
            printf("\nÉ um triangulo!!\n\n");
        } else {
            printf("\nNão é um triangulo...\n\n");
        }
    } else if (userInput == 10){
        float lA, lB, lC;
        printf("Primeiro Lado: ");
        scanf("%f",&lA);
        printf("Segundo Lado: ");
        scanf("%f",&lB);
        printf("Terçeiro Lado: ");
        scanf("%f",&lC);
        userInput = triangulo(lA, lB, lC);
        if (userInput == -1){
            printf("\nNão é um triangulo...\n\n");
        } else if (userInput == 1){
            printf("\nÉ um triangulo escaleno!\n\n");
        } else if (userInput == 2){
            printf("\nÉ um triangulo isósceles!\n\n");
        } else if (userInput == 3){
            printf("\nÉ um triangulo equilátero!\n\n");
        }
    }


    
}

void sucessor(int* n){
    *n += 1;
}

void quadradoDoSucessor(int* n){
    *n= *n+*n;
}

float vel_Carro(int VelocidadeInicial, int Aceleraçao, float Tempo){
    return VelocidadeInicial + ( Aceleraçao * Tempo);
}

float pos_Carro(int VelocidadeInicial,int PosiçaoInicial, int Aceleraçao, float Tempo){
    return PosiçaoInicial + (VelocidadeInicial * Tempo) + (0.5 * Aceleraçao * (Tempo * Tempo) );
}

float custosEnvio(int numeroDeLivros,float preçoPrimeiraCopia, float preçoRestoCopias){
    return preçoPrimeiraCopia + (preçoRestoCopias * (numeroDeLivros -1) );
}

float custoEncomenda(int numeroCopias, float preçoUnitario, float pesoEncomenda){
    float output;
    if (numeroCopias == 1){
        return 3;
    } else {
        return (preçoUnitario + (0.2 * pesoEncomenda) ) + custoEncomenda(numeroCopias - 1, preçoUnitario, pesoEncomenda);
    }
}

int tempoDecorrido(int velocidade, int distancia){
    int n = distancia/velocidade;
    return n;
}

int trianguloCheck(float ladoA, float ladoB, float ladoC){
    
    if ( ((ladoA+ladoB) > ladoC)  &&  ( (ladoA+ladoC) > ladoB ) && ((ladoB + ladoC) > ladoA)){
        return 1;
    } else {
        return 0;
    }
}

int triangulo(float ladoA, float ladoB, float ladoC)
{    
    if ( !(((ladoA+ladoB) > ladoC)  &&  ( (ladoA+ladoC) > ladoB ) && ((ladoB + ladoC) > ladoA)) ){
        return -1;
    } else {
        if (ladoA == ladoB && ladoB == ladoC){
            return 3;
        } else if ( (ladoA == ladoB && ladoB != ladoC) || (ladoA == ladoC && ladoB != ladoC) || (ladoB==ladoC && ladoA != ladoC)){
            return 2;
        } else {
            return 1;
        }
    }

}