//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
    int arr[10],front = -1,rear = -1,n,i;
    printf("Enter the number of elements in queue");
    scanf("%d",&n);
    int *queue = (int*)calloc(n,sizeof(int));
    for(rear = 0,i=0;rear>front,i<n;rear++,i++){
        scanf("%d",&queue[rear]);
    }
    if(queue == NULL){
        printf("Queue is empty");
    }
    else{
        printf("Array elements are:\n");
        for(front = 0,i=0;front<rear,i<n;front++,i++){
            arr[i] = queue[front];
            printf("Arr[%d]:%d\n",i,arr[i]);
        }
    }
}

//Enter the number of elements in queue5
//1
//2
//3
//4
//5
//Array elements are:
//Arr[0]:1
//Arr[1]:2
//Arr[2]:3
//Arr[3]:4
//Arr[4]:5
