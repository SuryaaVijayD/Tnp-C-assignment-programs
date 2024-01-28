//matrix multiplication:

#include<stdio.h>
struct matrix{
int arr[10][10],n;
};
int main(){
int i,j;
struct matrix x;
struct matrix y;
printf("Enter n:");
scanf("%d",&x.n);
y.n = x.n;
for(i=0;i<x.n;i++){
for(j=0;j<x.n;j++){
scanf("%d %d",&x.arr[i][j],&y.arr[i][j]);
x.arr[i][j] *= y.arr[i][j];
}
}
for(i=0;i<x.n;i++){
for(j=0;j<x.n;j++){
printf("%d\t",x.arr[i][j]);
}
printf("\n");
}
}


//Enter n:2
//1 2
//3 4
//5 6
//7 8
//2	12	
//30 56	
