#include <stdio.h>

int main() {
  int m, n, i, j, k;
  scanf("%d %d", &m, &n); //Getting the rows and columns 

  int A[m][n], B[m][n], C[m][n];


  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }


  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      C[i][j] = 0;
      for (k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j]; //Multiplication of matrix A and B
      }
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", C[i][j]); //Printing matric C
    }
    printf("\n");
  }

  return 0;
}