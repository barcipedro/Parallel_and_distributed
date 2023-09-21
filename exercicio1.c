#include <stdlib.h>
#include <stdio.h>

#define N 500 /* Novo tamanho das matrizes */

int A[N][N], B[N][N], C[N][N];


int main(int argc, char *argv[]) {
    int i, j, k;

#pragma omp parallel shared(A,B,C,N) private(i,j,k)
#pragma omp for
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                C[i][j] = 0.0;
                for (k = 0; k < N; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
    }

    /* Resto do seu código */

    return 0;
}

