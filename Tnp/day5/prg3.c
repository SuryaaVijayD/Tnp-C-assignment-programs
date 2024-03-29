//To print duck no’s from Stack using LL

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
    int val;
    struct node* next;
};
struct node* head;
int main() {
    int n,inputVal,duck=0;
    struct node* trav;
    struct node* ptr;
    printf("Enter n:");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(int i=0;i<n;i++){
        printf("Node %d:",i);
        scanf("%d",&inputVal);
        if(inputVal == 0){
            duck = 1;
        }
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->val = inputVal;
        if(head==NULL){
            head = newnode;
            ptr = newnode;
        }
        else{
            ptr->next = newnode;
            ptr = ptr->next;
        }
    }
    printf("Linked List Representation:\n");
    trav = head;
    while(trav!=NULL){
        printf("%d->",trav->val);
        trav=trav->next;
    }
    printf("NULL");
    if(duck == 0){
        printf("\nNot a Duck number");
    }
    else{
        printf("\nDuck number");
    }
}

//Enter n:3
//enter the values:
//Node 0:1
//Node 1:0
//Node 2:3
//Linked List Representation:
//1->0->3->NULL
//Duck number
