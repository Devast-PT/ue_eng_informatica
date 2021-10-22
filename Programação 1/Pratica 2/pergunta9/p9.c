#include <stdio.h>


int main(){
    int userInput, dias, horas, minutos;
    
    // Pede ao utilizador para inserir segundos
    
    printf("Quantos segundos: ");
    scanf("%i", &userInput);
    
    // converte para dias e deixa no buffer do userInput os restantes segundos
    
    dias = userInput/((60*60)*24);
    userInput = userInput - (((60*60)*24)*dias);
    
    // converte para horas e deixa no buffer do userInput os restantes segundos
     
    horas = userInput /(60*60);
    userInput = userInput -((60*60)*horas);
    
    // converte para minutos e deixa no buffer do userInput os restantes segundos
    
    minutos = userInput / 60;
    userInput = userInput - (60*minutos);
    
    printf("dias: %i \nhoras: %i \nminutos: %i \nsegundos: %i\n", dias, horas, minutos, userInput);
    return 0;
}

