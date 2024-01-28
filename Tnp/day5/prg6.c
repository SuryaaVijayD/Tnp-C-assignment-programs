//To make a Billing program in college canteen apply dynamic Structure

 #include <stdio.h>
#include<stdlib.h>
struct bill{
    char item[10];
    float price;
    struct bill* next;
};
struct student{
    char name[10];
    int id,tot;
    struct bill *bnext;
    struct student *snext;
};
int main() {
    char option;
    int n;
    struct student* shead = NULL;
    struct student* sptr = NULL;
    struct bill* bptr = NULL;
    struct bill* bhead = NULL;
    
    printf("---Billing System---\n");
    do{
        struct student* x = (struct student*)malloc(sizeof(struct student));
        printf("Enter name:");
        scanf("%s",&x->name);
        printf("Enter id:");
        scanf("%d",&x->id);
        printf("Enter no of items:");
        scanf("%d",&n);
        int sum = 0;
        for(int i=0;i<n;i++){
            struct bill* b=(struct bill*)malloc(sizeof(struct bill));
            printf("Enter item name %d:",i+1);
            scanf("%s",&b->item);
            printf("Enter the amount:");
            scanf("%f",&b->price);
            sum+=b->price;
            if(bhead==NULL){
                bhead = b;
                bptr = bhead;
            }
            else{
                bptr->next = b;
                bptr = bptr->next;
            }
        }
        x->tot = sum;
        x->bnext = bhead;
        if (shead == NULL) {
            shead = x;
            sptr = shead;
        } 
        else {
            sptr->snext = x;
            sptr = sptr->snext;
        }
       printf("If you want to enter another student (Y/N): ");
        scanf(" %c", &option);
    }while(option =='Y' );
    int i =1;
    struct student* ptr = shead;
    while (ptr != NULL) {
        printf("---Bill for student %d---\n",i);
        printf("Name: %s\n", ptr->name);
        printf("ID: %d\n", ptr->id);
        struct bill* bptr = ptr->bnext;
        while (bptr != NULL) {
            printf("Item: %s, Price: %.2f\n", bptr->item, bptr->price);
            bptr = bptr->next;
        }
        printf("Total: %d\n", ptr->tot);
        printf("\n");
        ptr = ptr->snext;
        i++;
    }
}

//---Billing System---
//Enter name:Suryaa
//Enter id:101
//Enter no of items:2
//Enter item name 1:Chips
//Enter the amount:5
//Enter item name 2:soda
//Enter the amount:15
//If you want to enter another student (Y/N): Y
//Enter name:Syed
//Enter id:102
//Enter no of items:3
//Enter item name 1:samosa
//Enter the amount:15
//Enter item name 2:JimJam
//Enter the amount:10
//Enter item name 3:vegRoll
//Enter the amount:15
//If you want to enter another student (Y/N): n
//---Bill for student 1---
//Name: Suryaa
//ID: 101
//Item: Chips, Price: 5.00
//Item: soda, Price: 15.00
//Item: samosa, Price: 15.00
//Item: JimJam, Price: 10.00
//Item: vegRoll, Price: 15.00
//Total: 20
//
//---Bill for student 2---
//Name: Syed
//ID: 102
//Item: Chips, Price: 5.00
//Item: soda, Price: 15.00
//Item: samosa, Price: 15.00
//Item: JimJam, Price: 10.00
//Item: vegRoll, Price: 15.00
//Total: 40
