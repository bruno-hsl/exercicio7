#include <stdio.h>

main(void){

    int menu, qtd, total, valor = 0;

    printf("1 => ABACAXI: 5,00 a unidade \n 2 => MAÇA: 1,00 a unidade \n 3 => PERA : 4,00 a unidade\n");

 do{
    printf("Numero do produto: ");
    scanf("%d", &menu);

    switch(menu){
        case 1:
        printf("Abacaxi\n");
        valor += 5;
        break;
         case 2:
        printf("Maca\n");
        valor += 1;
        break;
         case 3:
        printf("Pera\n");
        valor += 4;
        break;
    }

    printf("Digite a quantidade:");
    scanf("%d", &qtd);

    total = valor * qtd;

    printf("%d reais\n", total);
  } while(menu != -1);


}