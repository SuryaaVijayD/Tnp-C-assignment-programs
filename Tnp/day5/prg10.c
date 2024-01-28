// To count no of repeated letter from node lists

#include<stdio.h>
#include<stdlib.h>
struct node {
    char val;
    struct node* next;
};
int main() {
    int n;
    struct node* head = NULL;
    struct node* trav = NULL;
    struct node* ptr = NULL;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter node %d value: ", i);
        scanf(" %c", &newnode->val);
        if (head == NULL) {
            head = newnode;
            ptr = head;
        } else {
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    trav = head;
    printf("Linked List representation: \n");
    while (trav != NULL) {
        printf("(%c)=>", trav->val);
        trav = trav->next;
    }
    printf("NULL\n");
    struct node* f = head;
    int count = 0;
    while(f!=NULL){
        int flag = 1;
        struct node* r = f->next;
        while(r!=NULL){
            if(f->val == r->val){
                flag = 0;
                break;
            }
            r=r->next;
        }
        if(flag == 0){
            count++;
        }
        f=f->next;
    }
    printf("Repeated elements are: %d",count);
} 

//Enter n: 6
//Enter node 0 value: s
//Enter node 1 value: u
//Enter node 2 value: r
//Enter node 3 value: y
//Enter node 4 value: a
//Enter node 5 value: a
//Linked List representation: 
//(s)=>(u)=>(r)=>(y)=>(a)=>(a)=>NULL
//Repeated elements are: 1
