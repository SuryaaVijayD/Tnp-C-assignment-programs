// To store all even No's in left Slide and Odd No's in right Slide Array(One Array Only)

#include <stdio.h>

int main() {    
    int arr[] = {1,2,4,3,8,5,7,6};
    int n=8;
    int left = 0;
    int right = n-1;
    while (left<right){
        while(arr[left]%2==0 && left<right){
            left++;
        }
        while(arr[right]%2!=0 && left<right){
            right--;
        }
        if (left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}


// Output :

// I/P: {1, 2, 3, 4, 5}
// O/P: {4, 2, 3, 5, 1}

// I/P: {1, 5, 3, 2, 3, 4, 5, 6, 7, 8, 9}
// O/P: {8, 6, 4, 2, 3, 5, 3, 7, 5, 9, 1}
