/*
 * A c application that does a heavy computation - matrix multiplication
 *
 * Douglas Lenz 2015
 *
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // seed the random number generator
    srand(time(NULL));

    // Pick some arbitrary constraints to make the problem harder
    const int SIZE_XY = 100;
    const int MIN_VAL = 5600;
    const int MAX_VAL = 7900000;
    
    int i, j, k; // iterators

    // Generate two 2D arrays to be filled with random numbers
    // and an array, c, with all 0s
    int *a[SIZE_XY];
    int *b[SIZE_XY];
    int *c[SIZE_XY];
    for(i=0; i<SIZE_XY; i++) {
	a[i] = (int *)malloc(SIZE_XY * sizeof(int));
	b[i] = (int *)malloc(SIZE_XY * sizeof(int));
	c[i] = (int *)malloc(SIZE_XY * sizeof(int));
    }

    for(i=0; i<SIZE_XY; i++) {
	for(j=0; j<SIZE_XY; j++) {
	    a[i][j] = (rand() % MAX_VAL) + MIN_VAL;
	    b[i][j] = (rand() % MAX_VAL) + MIN_VAL;
	    c[i][j] = 0;
	}
    }

    printf("Array A allocated and filled with random numbers ...\n");
    printf("Array B allocated and filled with random numbers ...\n");
    printf("Array C initialized ...\n");

    // Dot product the two arrays together into c
    for(i=0; i<SIZE_XY; i++) {
	for(j=0; j<SIZE_XY; j++) {
	    for(k=0; k<SIZE_XY; k++) {
		c[i][j] = c[i][j] + a[i][k] * b[k][j];
	    }
	}
    }

    printf("Matrices multiplied ...\n");
    printf("The first three values of A x B are %d, %d, %d\n", c[0][0], c[0][1], c[0][2]);
    printf("Done. Exiting ...\n");
}
