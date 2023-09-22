#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_habitantes = 0;
    int mulheres_castanhas_castanhas = 0;

    printf("Digite os dados dos habitantes (ou -1 para encerrar):\n");

    while (1) {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'f' || sexo == 'm') {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);

            if (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') {
                printf("Cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &cabelos);

                if (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') {
                    printf("Idade (entre 10 e 100 anos): ");
                    scanf("%d", &idade);

                    if (idade >= 10 && idade <= 100) {
                        printf("Salário: ");
                        scanf("%f", &salario);

                        if (salario >= 0) {
                            total_habitantes++;

                            if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
                                mulheres_castanhas_castanhas++;
                            }
                        } else {
                            printf("Salário não pode ser negativo. Tente novamente.\n");
                        }
                    } else {
                        printf("Idade fora do intervalo permitido. Tente novamente.\n");
                    }
                } else {
                    printf("Cor dos cabelos inválida. Tente novamente.\n");
                }
            } else {
                printf("Cor dos olhos inválida. Tente novamente.\n");
            }
        } else if (idade == -1) {
            break; 
        } else {
            printf("Sexo inválido. Tente novamente.\n");
        }
    }

    if (total_habitantes > 0) {
        float porcentagem = (float)mulheres_castanhas_castanhas / total_habitantes * 100;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante foi cadastrado.\n");
    }

    return 0;
}
