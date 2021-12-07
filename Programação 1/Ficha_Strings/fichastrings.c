#include <stdio.h>
// enunciado nao deixa usar #include <string.h>
#include <stdlib.h>
#define MAX_CHARS 25



//Prototipos

int strlen(char s[]);
int tamanho(char s[]); //ex 1
void letras_While(char s[]); //ex 2
void letras_For(char s[]); //ex 2
void letras_inv(char s[]); //ex 3
void sub_cadeia(char s[]); //ex 4
void espelho(char s[]); //ex 5
int palindromo(char s[]); //ex 6
int vogal(char c); //ex 7
int conta_vogais(char s[]); //ex7



int main(){
    
    //exercicio 1
    
    char s_Var[25];
    printf("Exercicio 1\n");
    printf("Insira o seu primeiro e ultimo nome(max 25 characteres): ");
    gets(s_Var);
    printf("O tamanho do seu nome é: %i\n", tamanho(s_Var));
    
    printf("\nprima qualquer tecla para continuar.....");
    char c = getchar();
    
    //exercicio 2
    printf("\n\n");
    printf("Exercicio 2\n");
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    letras_While(s_Var);
    printf("Usando o while loop, prima qualquer tecla para continuar.....\n");
    c = getchar();
    letras_For(s_Var);
    printf("Usando o for loop, prima qualquer tecla para continuar.....\n");
    c = getchar();
    
    
    //exercicio 3
    printf("\n\n");
    printf("Exercicio 3\n");
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    letras_inv(s_Var);
    printf("prima qualquer tecla para continuar.....");
    c = getchar();
    
    
    //exercicio 4
    printf("\n\n");
    printf("Exercicio 4\n");
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    sub_cadeia(s_Var);
    printf("prima qualquer tecla para continuar.....");
    c = getchar();
    
    
        
    //exercicio 5
    printf("\n\n");
    printf("Exercicio 5\n");
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    espelho(s_Var);
    printf("prima qualquer tecla para continuar.....");
    c = getchar();
    
    
    
    //exercicio 6
    printf("\n\n");
    printf("Exercicio 6\n");
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    int checker = palindromo(s_Var);
    if (checker == 0)
    {
        printf("É um palindromo!\n");
    } else {
        printf("Não é um palindromo!\n");
    }
    printf("prima qualquer tecla para continuar.....");
    c = getchar();
    
    
    
    
        //exercicio 7
    
    printf("\n\n");
    printf("Exercicio 7\n");
    printf("Insira um character: ");
    scanf(" %c", &c);
    
    checker = vogal(c);
    if (checker == 1)
    {
        printf("É vogal!\n");
    } else {
        printf("Não É vogal\n");
    }
    c = getchar();
    printf("Insira uma frase(max 25 characteres): ");
    gets(s_Var);
    printf("O numero de vogais é: %i\n", conta_vogais(s_Var));



    printf("prima qualquer tecla para continuar.....\n");
    c = getchar();   
    
    
    
    
    
    return 0;
}






//para nao usar cabeçalho string.h implementei propria strlen
int strlen(char s[]){
    int contador = 0;
    while(1){
        if(s[contador] == '\0'){
            return contador;
        }
        contador++;
    }
}


//exercicio 1

int tamanho(char s[]){
    //loop para verificar cada character
    int espacos = 0; //variavel para contar os espaços em branco
    for (int contador = 0; contador < MAX_CHARS; contador++)
    {
        if (s[contador] == '\0')
        {
            return contador - espacos; // devolve numero de characteres - espaços em branco
        } else if (s[contador] == ' ')
        {
            espacos++;
        }
    }
}


//exercicio 2

void letras_While(char s[])
{
    int contador = 0;
    while (contador < MAX_CHARS)
    {
        if (s[contador] == '\0')
        {
            break;
        }
        printf("%c\n", s[contador]);
        contador++;
    }    
    
}
    
void letras_For(char s[])
{
    for (int contador = 0; contador < MAX_CHARS ; contador++)
    {
        if (s[contador] == '\0')
        {
            break;
        }
        printf("%c\n", s[contador]);
    }

    
}


//exercicio 3

void letras_inv(char s[]){
    int size = strlen(s) - 1; //comprimento da string menos o \0
    for (size; size >= 0; size--) //loop invertido
    { 
        printf("%c\n", s[size]);
    }
}


//exercicio 4

void sub_cadeia(char s[])
{
    int tamanho = strlen(s);
    for (tamanho; tamanho > 0; tamanho--)
    {
        for(int c = 0; c < tamanho; c++)
        {
            printf("%c", s[c]);    
        }    
        printf("\n");
    }
    
    
}


//exercicio 5
void espelho(char s[])
{
    int tamanho = strlen(s);

    
    for (int frente = 0; frente < tamanho; frente++)
    {
        printf("%c",s[frente]);    
    }
    for (int tras = tamanho; 0 <= tras; tras--) //sound sketchy af
    {
        printf("%c",s[tras]);    
    }
    printf("\n");
}

//exercicio 6
int palindromo(char s[])
{
    int finish = strlen(s) - 1;
    for (int start = 0; start < strlen(s); start++)
    {
        if (s[start] != s[finish])
        {
            return 1;    
        }    
        finish--;
    }
    return 0;
    
}

//exercicio 7
int vogal(char c)
{
    char vogal[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int contador = 0; contador < 10; contador++)
    {
        if( vogal[contador] == c)
        {
            return 1;    
        }   
    }
    return 0;
    
}

int conta_vogais(char s[])
{
    int n_Vogais = 0, tamanho = strlen(s);
    for (tamanho; tamanho >= 0; tamanho--)
    {
        n_Vogais += vogal(s[tamanho]);   
    }
    
    
    return n_Vogais;    
}