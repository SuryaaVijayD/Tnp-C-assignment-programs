//Neon number

#include<stdio.h>
struct neon{
int n,arr[10];
};
void check(struct neon *x);
int main(){
struct neon s;
int i;
printf("Enter N:");
scanf("%d",&s.n);
for(i=0;i<s.n;i++){
printf("a[%d]:",i);
scanf("%d",&s.arr[i]);
}
check(&s);
}
void check(struct neon *x){
int i,count=0;
for(i=0;i<x->n;i++){
int temp = x->arr[i];
int sum = 0;
temp = temp * temp;
while(temp){
int x = temp % 10;
sum = sum + x;
temp = temp/10;
}
if(x->arr[i]==sum){
count++;
}
}
printf("%d",count);
}


//Enter N:5
//a[0]:1
//a[1]:9
//a[2]:12
//a[3]:38
//a[4]:19
//2
