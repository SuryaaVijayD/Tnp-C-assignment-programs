// To read Stack values and transfer to a make 2D array

#include <stdio.h>
#include<stdlib.h>

int main() {
    int stack[100],count,top=-1,val,i=1,a[100][100],row,col;
    printf("Enter the stack elements:(99 to stop):\n");
    while(val!=99){
        printf("element %d: ",i);
        scanf("%d",&val);
        i++;
        stack[++top] = val;
    }
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter column:");
    scanf("%d",&col);
    top--;
    if(top>row*col){
        printf("Matrix size is insufficient");
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(top<0){
                a[i][j] = 0;
            }
            else{
                a[i][j] = stack[top];
                top--;
            }
        }
    }
    printf("Array elements are:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

//Enter the stack elements:(99 to stop):
//element 1: 1
//element 2: 2
//element 3: 3
//element 4: 4
//element 5: 5
//element 6: 99
//Enter row:3
//Enter column:3
//Array elements are:
//5 4 3 
//2 1 0 
//0 0 0 
