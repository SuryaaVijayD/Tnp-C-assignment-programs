//Perform transpose of Matrix apply dynamic Array format

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            perror("Memory allocation failed");
            return 1;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element %d:",i);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Input matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(i<j){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
            
        }
    }
    printf("Transpose Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

}

//Enter the number of rows: 3
//Enter the number of columns: 3
//Element 0:1
//Element 0:2
//Element 0:3
//Element 1:4
//Element 1:5
//Element 1:6
//Element 2:7
//Element 2:8
//Element 2:9
//Input matrix:
//1 2 3 
//4 5 6 
//7 8 9 
//Transpose Matrix:
//1 4 7 
//2 5 8 
//3 6 9 
