#include <stdio.h>

main(){
    /*1. Faça um programa que 
    leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. */
    int n, i = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

   while(i <= n){
    printf("\n %d", i);
    i++;
   }
}