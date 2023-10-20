#include <stdio.h>

void findNonzeroElements(int matrix[][10], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] != 0) {
        count++;
      }
    }
  }

  printf("The number of nonzero elements in the matrix is: %d\n", count);
}

void displayUpperTriangularMatrix(int matrix[][10], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i <= j) {
        printf("%d ", matrix[i][j]);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}

void displayElementsJustAboveAndBelowMainDiagonal(int matrix[][10], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j - 1 || i == j + 1) {
        printf("%d ", matrix[i][j]);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  int matrix[10][10];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter element [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  findNonzeroElements(matrix, n);
  displayUpperTriangularMatrix(matrix, n);
  displayElementsJustAboveAndBelowMainDiagonal(matrix, n);
return 0;
}
