// To read array values and replace that values in Odd node List

#include <stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};
int main() {
    int a[10],n,i,input;
    struct node* head = NULL;
    struct node* ptr = NULL;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter the array values:\n");
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        if((i+1)%2==0){
            newnode->val = a[i];
        }
        else{
            printf("Enter the node Value %d:",i);
            scanf("%d",&input);
            newnode->val = input;
        }
        if(head==NULL){
            head = newnode;
            ptr = head;
        }
        else{
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    ptr = head;
    while(ptr!=NULL){
        printf("(%d)=>",ptr->val);
        ptr = ptr->next;
    }
    printf("NULL");
}

    //Enter N:5
    //Enter the array values:
    //Element 0:1
    //Element 1:2
    //Element 2:3
    //Element 3:4
    //Element 4:5
    //Enter the node Value 0:11
    //Enter the node Value 2:22
    //Enter the node Value 4:33
    //(11)=>(2)=>(22)=>(4)=>(33)=>NULL
