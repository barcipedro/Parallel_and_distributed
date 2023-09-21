#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n, i;
    double mypi, h, sum, x, a,pi;

    n = atoi(argv[1]);
    h = 1.0 / (double)n;
    sum = 0.0;

    #pragma omp parallel for private(i,x) shared(h) reduction(+: sum)
    for (i = 1; i <= n; i++) {
        x = h * ((double)i - 0.5);
        sum += 4.0 / (1.0 + x * x);
    }

    mypi = h * sum;
    printf("pi is approximately %.16f\n", mypi);

    return 0;
}

