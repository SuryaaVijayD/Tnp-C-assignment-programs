//max profit of week and purchase date of week

#include<stdio.h>
int main(){
	int a[10],n,max,min,locmax,locmin,i;
	printf("Enter the n");
	scanf("%d",&n);
	for ( i =0;i<n;i++){
		scanf("%d",&a[i]);		
	}
	max = a[0];
	min = a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
			locmax = i+1;
		}
	}
	for(i=0;i<locmax;i++){
		if(a[i]<min){
			min = a[i];
			locmin = i+1;
		}
	}
	printf("\nThe Max profit day is day%d",locmax);
	printf("\nThe buying day may be day%d",locmin);
	printf("\nProfit %d",max-min);
}
