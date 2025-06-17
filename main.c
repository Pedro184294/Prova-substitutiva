#include <stdio.h>

// Fun��o que calcula a m�dia das notas
float calcularMedia(float notas[], int quantidade) {
    float soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

// Fun��o que encontra a maior nota
float encontrarMaior(float notas[], int quantidade) {
    float maior = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int main() {
    float notas[10];
    int quantidade;

    // Leitura da quantidade de notas (com valida��o)
    do {
        printf("Quantas notas deseja inserir? (1 a 10): ");
        scanf("%d", &quantidade);
        if (quantidade < 1 || quantidade > 10) {
            printf("Quantidade inv�lida. Tente novamente.\n");
        }
    } while (quantidade < 1 || quantidade > 10);

    // Leitura das notas
    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // C�lculos
    float media = calcularMedia(notas, quantidade);
    float maior = encontrarMaior(notas, quantidade);

    // Resultados
    printf("\nResultados:\n");
    printf("M�dia das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);

    return 0;
}
