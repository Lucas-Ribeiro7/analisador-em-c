#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");
    //Variaveis 
    float numero, analisador, maior = 0, menor = 0, soma = 0, media;

    //Entrada de Dados
    for(int i = 0; i <= 9; i++){
        printf("Digite um Numero:");
        scanf("%f", &numero);
        soma += numero;
        if(i==0){
            maior = numero;
            menor = numero;
        }else if(numero > maior){
            maior = numero;
        }else if(numero < menor){
            menor = numero;
        }            
    }
    media = (soma/10);
    //Sa��da dos Resultado
    printf("O Valor maior �: %f", maior);
    printf("\nO Valor menor �: %f", menor);
    printf("\nA M�dia dos valores %f", media);
    printf("\nSoma dos Numeros: %f", soma);


}