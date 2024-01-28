// A-I-D operation in array

#include<stdio.h>
void append(int a[], int size, int val);
void insert(int a[], int size, int val, int index);
void delet(int a[], int size, int index);
void display(int a[], int size);
int main() {
 int a[20], n, val, option, i;
 printf("Enter n (less than 15): ");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for (i = 0; i < n; i++) {
 scanf("%d", &a[i]);
 }
 do {
 printf("\nOptions:\n1. Insert\n2. Append\n3. Delete\n4. Display\nEnter the option (exit: 0): ");
 scanf("%d", &option);
 switch (option) {
 case 1:
 printf("Enter the value to insert: ");
 scanf("%d", &val);
 printf("Enter the index: ");
 int index;
 scanf("%d", &index);
 insert(a, n, val, index);
 n++; 
 break;
 case 2:
 printf("Enter the value to append: ");
 scanf("%d", &val);
 append(a, n, val);
 n++; 
 break;
 case 3:
 printf("Enter the index value to delete: ");
 scanf("%d", &index);
 delet(a, n, index);
 n--; 
 break;
 case 4:
 display(a, n);
 break;
 }
 } while (option != 0);
 return 0;
}
void append(int a[], int size, int val) {
 a[size] = val;
}
void insert(int a[], int size, int val, int index) {
 int i;
 for (i = size; i > index; i--) {
 a[i] = a[i - 1];
 }
 a[index] = val;
}
void delet(int a[], int size, int index) {
int i;
 if (index < size) {
 for (i = index; i < size - 1; i++) {
 a[i] = a[i + 1];
 }
 } else {
 printf("\nInvalid index");
 }
}
void display(int a[], int size) {
int i;
 for (i = 0; i < size; i++) {
 printf("arr[%d] = %d\n", i, a[i]);
 }
}


//Enter n (less than 15): 5
//Enter array elements: 1
//2
//3
//4
//5
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 1
//Enter the value to insert: 3
//Enter the index: 3
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 4
//arr[0] = 1
//arr[1] = 2
//arr[2] = 3
//arr[3] = 3
//arr[4] = 4
//arr[5] = 5
//
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 2
//Enter the value to append: 6
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 4
//arr[0] = 1
//arr[1] = 2
//arr[2] = 3
//arr[3] = 3
//arr[4] = 4
//arr[5] = 5
//arr[6] = 6
//
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 3
//Enter the index value to delete: 3
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 4
//arr[0] = 1
//arr[1] = 2
//arr[2] = 3
//arr[3] = 4
//arr[4] = 5
//arr[5] = 6
//
//Options:
//1. Insert
//2. Append
//3. Delete
//4. Display
//Enter the option (exit: 0): 0
//
