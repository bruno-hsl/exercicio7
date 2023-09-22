#include <stdio.h>

main(){
    /*2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */
    int n, i = 0;

    printf("Digite um numero maior que inteiro: ");
    scanf("%d", &n);

   while(i <= n){
    printf("\n %d", n);
    n--;
   }
}