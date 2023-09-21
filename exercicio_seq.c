#include <stdlib.h>
#include <stdio.h>

#define N 500 /* Novo tamanho das matrizes */

int A[N][N], B[N][N], C[N][N];

int main(int argc, char *argv[]) {
    int i, j, k;

    // Inicialize as matrizes A e B conforme necessário
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = i + j; // Exemplo de inicialização
            B[i][j] = i - j; // Exemplo de inicialização
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = 0.0;
            for (k = 0; k < N; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    /* Resto do seu código, se necessário */

    return 0;
}

