//To read a node values and verify palindrome or not

#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* next;
};
int main()
{
    int n;
    struct node *head = NULL;
    struct node *trav = NULL;
    struct node *ptr = NULL;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter node %d value:",i);
        scanf("%d",&newnode->val);
        if(head==NULL){
            head = newnode;
            ptr = head;
        }
        else{
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    trav = head;
    printf("LinkedList representation are:\n");
    while(trav!=NULL){
        printf("(%d)=>",trav->val);
        trav = trav->next;
    }
    printf("NULL\n");
    printf("Corresponding palindrome values are:\n");
    trav = head;
    while(trav!=NULL){
        int copy = trav->val;
        int rev = 0;
        while(copy>0){
            int digit = copy%10;
            rev = rev *10 + digit;
            copy/=10;
        }
        printf("%d ",(trav->val==rev)?1:0);
        trav = trav->next;
    }
}

//enter n:5
//enter node 0 value:121
//enter node 1 value:111
//enter node 2 value:134
//enter node 3 value:123
//enter node 4 value:1
//LinkedList representation are:
//(121)=>(111)=>(134)=>(123)=>(1)=>NULL
//Corresponding palindrome values are:
//1 1 0 0 1 
