//find word in matrix and return the position of word whether it is vertical,horizontal,diagonal.

#include<stdio.h>
#include<string.h>

void printMatrix(char matrix[100][100], int row, int col);
int searchMatrix(char *searchString, char matrix[100][100], int row, int col);
void stringToMatrix(char *input, char matrix[100][100], int row, int col);
void diagonalSearch(char *searchString, char matrix[100][100], int row, int col);

void diagonalSearch(char *searchString, char matrix[100][100], int row, int col) {
    int matches = 1, i;
    for(i = 0; i < row; i++){
        if(searchString[i]==matrix[i][i] && searchString[i]!='\0'){
            continue;
        } 
		else if(matrix[i][i]==' '){
            continue;
        } 
		else{
            matches=0;
            break;
        }
    }
    if(matches){
        printf("\nFound Diagonally %d,%d to %d,%d",i,i,i,i);
        return;
    } else {
        printf("\nNot Found");
    }
}

void printMatrix(char matrix[100][100], int row, int col) {
	int i,j;
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void stringToMatrix(char *input,char matrix[100][100],int row,int col) {
    int index = 0,i,j;
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            if (input[index]!='\0'){
                matrix[i][j]=input[index++];
            } 
			else{
                matrix[i][j]=' ';
            }
        }
    }
}

int searchMatrix(char *searchString, const char matrix[100][100], int row, int col) {
    int searchStringLen = strlen(searchString);
	int i,j,k;
    for(i=0;i<row;++i){
        for(j=0;j<=col-searchStringLen;j++){
            int match=1;
            for(k=0;k<searchStringLen;k++){
                if(searchString[k]!=matrix[i][j+k]){
                    match=0;
                    break;
                }
            }
            if(match){
                printf("Found at %d,%d to %d,%d", i, j, i, j + searchStringLen - 1);
                return 1;
            }
        }
    }

    for (j = 0; j < row;j++){
        for(i = 0; i <= row - searchStringLen;i++){
            int match=1;
            for(k=0;k<searchStringLen;k++) {
                if(searchString[k]!=matrix[i+k][j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                printf("Found at row %d, col %d to %d\n", i, j, i + searchStringLen - 1);
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    char inputString[100], input[100], matrix[100][100];
    int row, col, len, i, j, result;
    printf("Enter row: ");
    scanf("%d", &row);

    printf("\nEnter the string: ");
    scanf(" %[^\n]", input);

    len = strlen(input);
    col = (len + row - 1) / row;
    stringToMatrix(input, matrix, row, col);

    printf("Enter a string to search: ");
    scanf("%s", inputString);

    printMatrix(matrix, row, col);

    result = searchMatrix(inputString, matrix, row, col);

    if(result != 1){
        diagonalSearch(inputString, matrix, row, col);
    } 
	else{
        printf("Not Found");
    }

    return 0;
}

