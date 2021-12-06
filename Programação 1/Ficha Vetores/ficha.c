#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// var constantes
const int A[] = {1,2,2}, B[5]={1,2,3,4,5}, C[2]={2,4}, D[2]={7,8};

//prototypos
int verifica_ordem( int vec[], int sz );
int conta_elementos( int v1[], int v2[], int sz1, int sz2 );
int aux_conta_elementos(int checker, int v3[], int sz3);
int matriz_identidade( int matriz[][4], int n );
float primeiro( float v[], int sz);
float segundo( float v[], int sz );
float terceiro( float v[], int sz );
int acumulado(int vec[], int sz, int index);
float class_nota(float notas[], int sz);
float class_nota_v2(float notas[], int sz);
int contaRepetidos(int v[], int sz, int num);
float calcula_somatorio(float v[], int n);
void imprimir_vetor(float v[], int n);
float media(int v[]);
int minimo(int v[]);
int maximo(int v[]);





int main(){
    
    //exercicio 1
    
    {
    printf("Exercicio 1, verificar ordem: \n");
    printf("  Vector A: %i\n", verifica_ordem(A, 3));
    printf("  Vector B: %i\n", verifica_ordem(B, 5));
    printf("  Vector C: %i\n", verifica_ordem(C, 2));
    printf("  Vector D: %i\n", verifica_ordem(D, 2));
    }
    
    //exercicio 2
    {
    printf("\n\nExercicio 2, conta elementos iguais: \n");
    printf("  Vector A com B: %i\n", conta_elementos(A, B, 3, 5));
    printf("  Vector A com C: %i\n", conta_elementos(A, C, 3, 2));
    printf("  Vector A com D: %i\n", conta_elementos(A, D, 3, 2));
    printf("  Vector B com C: %i\n", conta_elementos(B, C, 5, 2));
    printf("  Vector B com D: %i\n", conta_elementos(B, D, 5, 2));
    printf("  Vector C com D: %i\n", conta_elementos(C, D, 2, 2));
    }
    //exercicio 3
    {
    printf("\n\nExercicio 3, verifica se matriz é identidade: \n");
    int matriz_1[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    int matriz_2[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}};
    int matriz_3[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    
    printf("Matriz 1: \n");
    matriz_identidade( matriz_1,4);
    printf("Matriz 2: \n");
    matriz_identidade( matriz_2,4);
    printf("Matriz 3: \n");
    matriz_identidade( matriz_3,2);
    }
    //exercicio 4
    {
        printf("\n\nExercicio 4, classificação segundo o tempo de cada atleta: \n");
        printf("Quandos tempos pretende inserir? ");
        
            int tempos;
            float arrayTempos[10];
            float aux = 0;
            scanf(" %i", &tempos);
            for (int a = 0; a < tempos; a++)
            {
                printf("Tempo  do atleta: ");
                scanf(" %f", &aux);
                arrayTempos[a] = aux;
            }
        printf("O primeiro classificado fez: %.2f\n", primeiro(arrayTempos, tempos));
        printf("O segundo classificado fez: %.2f\n", segundo(arrayTempos, tempos));
        printf("O terceiro classificado fez: %.2f\n", terceiro(arrayTempos, tempos));
    }
    
    
    
    //exercicio 5
    {       
        printf("\n\nExercicio 5, devolve o acumulado de cada vector :\n");
        printf("Vector A: %i\n", acumulado(A, 3, 0) );
        printf("Vector B: %i\n", acumulado(B, 5, 0) );
        printf("Vector C: %i\n", acumulado(C, 2, 0) );
        printf("Vector C: %i\n", acumulado(C, 2, 0) );
    }
    
    
    //exercicio 6
    {
        printf("\n\nExercicio 6, classificação do aluno durante 15 semanas :\n");
        int semana = 0;
        float notas[15] = {-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1, 20};
        printf("A sua nota final foi: %.2f\n\n", class_nota(notas,15));
    }
    //exercicio 7
    
    {
        float notas[15] = {-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1, 20};

        printf("\n\nExercicio 7, classificação do aluno durante 15 semanas :\n");
        printf("A sua nota final foi: %.2f\n\n", class_nota_v2(notas,15));
    }
    
    
    //exercicio 8
    {    
        printf("\n\nExercicio 8, devolve repetidos :\n");
        int exemplo[] = { 1,2,3,4,4,1,3,4,-1 };
        int n = 4;
        printf("O numero de repetidos do numero %i é: %i\n\n", n, contaRepetidos(exemplo, 9, n));
    }
    
    
    //exercicio 9
    {
        printf("\n\nExercicio 9, cria e soma vector :\n");
        int dimensaoVector = -1;
        float v[15];
        while ( dimensaoVector < 1 || dimensaoVector > 16)
        {
        
            printf("Indique o tamanho do vector que pretende (max = 15||min = 1): ");
            scanf(" %i", &dimensaoVector);
           
        }
        
        printf("O somatório do vector é: %.2f\n", calcula_somatorio(v, dimensaoVector));
        }
    
            
    //exercicio 10
    {            
        printf("\n\nExercicio 10, cria vector e mostra a média, maximo, minimo, vector:\n");
        int v[10], min, max;
        float med = 0.0;
        for (int pos = 0; pos < 10; pos++)
        {
            printf("Insira o numero inteiro:  v[%i] = ", pos);
            scanf("%i", &v[pos]);
        }

        med = media(v);
        min = minimo(v);
        max = maximo(v);
        printf("A média do vector é: %.2f\n", med);
        printf("O máximo do vector é: %i\n", max);
        printf("O minimo do vector é: %i\n", min);
        
        for (int pos = 0; pos < 10; pos++){
        if (pos == 5)
        {
            printf("\n");
        }
        printf("V[%i]= %i ", pos, v[pos]);
    }
    printf("\n");
    
        
        
    }
    
    

    return 0;
}



//Funçoes Exercicio 1



int verifica_ordem( int vec[], int sz ){
    int FIFO = vec[0];
    for (int counter = 0; counter < sz; counter++){
        
        if (sz == 1){
            return 1;
        } else if (FIFO <= vec[counter]){
            FIFO = vec[counter];
        } else {
            return 0;
        }
    }
    return 1;
}

//Funçoes Exercicio 2


int conta_elementos( int v1[], int v2[], int sz1, int sz2 ){
    int comon_Elements = 0;
    for (int counter = 0; counter < sz1; counter++){
        comon_Elements += aux_conta_elementos(v1[counter], v2, sz2);
    }
    
    return comon_Elements;
}
int aux_conta_elementos(int checker, int v3[], int sz3){
    int contador = 0;
    for (int counter2 = 0; counter2 < sz3; counter2 ++){
        if (checker == v3[counter2]){
            contador +=1;
        }
    }
    return contador;
}


//Funçoes Exercicio 3

int matriz_identidade( int matriz[][4], int n ){
    for (int rows = 0; rows < n; rows++){
        for (int colunas = 0; colunas < n; colunas++){
            if (rows == colunas){
                if (matriz[rows][colunas] == 0){
                    printf("Não é matriz identidade!\n");
                    return 0;
                }
            } else {
                if (matriz[rows][colunas] != 0){
                    printf("Não é matriz identidade!\n");
                    return 0;
                }
            }
        }
    }
    printf("É Matriz Identidade!\n");
}



//Funçoes Exercicio 4

float primeiro( float v[], int sz){
    
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    
    }
    return v[0];
}

float segundo( float v[], int sz){
    
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    
    }
    return v[1];
}

float terceiro( float v[], int sz){
    
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    
    }
    return v[2];
}


//Funçoes Exercicio 5

int acumulado(int vec[], int sz, int index){
    int aux = 0;
    for (int counter = index; counter < sz; counter++){
        aux += vec[counter];
    }
    return aux;
}


//Funçoes Exercicio 6


float class_nota(float notas[], int sz){
    float aux = 0;
    for (int sort1 = 0; sort1 < sz; sort1++){
        for (int sort2 = sort1; sort2 < sz; sort2++){
            if ( notas[sort1] < notas[sort2]){
                aux = notas[sort1];
                notas[sort1] = notas[sort2];
                notas[sort2] = aux;
            }    
    }    
    }
    
    float soma = 0;
    for (int a = 1; a < sz-1; a++){
        soma += notas[a];
    }
    return soma;
}



//Funçoes Exercicio 7



float class_nota_v2(float notas[], int sz){
    float aux = 0;
    for (int sort1 = 0; sort1 < sz; sort1++){
        for (int sort2 = sort1; sort2 < sz; sort2++){
            if ( notas[sort1] < notas[sort2]){
                aux = notas[sort1];
                notas[sort1] = notas[sort2];
                notas[sort2] = aux;
            }    
    }    
    }
    
    float soma = 0, naoEntregou = 0;
    for (int a = 0; a < sz-1; a++){
        if (notas[a] == -1){
            if (naoEntregou < 3){
                notas[a] = 0;
            }
        }
        
        soma += notas[a];
    }
    return soma;
}


//Funçoes Exercicio 8


int contaRepetidos(int v[], int sz, int num){
    int numero_repetidos = 0;
    int max = 0;
    for (int a = 0; a < sz; a++){
        
        
     if (numero_repetidos > max){
                max = numero_repetidos;
            }
        
        if (v[a] == num){
            numero_repetidos++;
            printf("%i\n", numero_repetidos);
           
            
        } else {
            numero_repetidos = 0;
            
        }
    }

    return max;
}


//Funçoes Exercicio 9


float calcula_somatorio(float v[], int n){
    float soma = 0;

    for (int counter = 0; counter < n; counter++){
        float aux = 0;
        printf("Indique o valor do vector na posição %i: ",  counter);
        scanf(" %f", &aux);
        v[counter] = aux;
        soma += aux;
    }
    imprimir_vetor(v, n);
    return soma;
}

void imprimir_vetor(float v[], int n){
    int cleaner = 1;
    for (int counter = 0; counter < n; counter++){
        printf("V[%i]: %.2f  ", counter, v[counter]);
        if (cleaner == 3){
            printf("\n");
            cleaner = 0;
        }
        cleaner++;
    }
    printf("\n");
}


//Funçoes Exercicio 10


float media(int v[]){
    float med = 0;
    
    for (int pos = 0; pos < 10; pos++){
        med += v[pos];
    }
    
    return med/10;
}


int minimo(int v[]){
    float min = v[0];
    
    for (int pos = 1; pos < 10; pos++){
        if (min > v[pos]){
            min = v[pos];
        }
    }
    
    return min;
}
int maximo(int v[]){
    float max = v[0];
    
    for (int pos = 1; pos < 10; pos++){
        if (max < v[pos]){
            max = v[pos];
        }
    }
    
    return max;
}
