#include<stdio.h>
int main(){

    int arr1[5];
    int i;
    int ans=1;
    int arr2[5];

    printf("Enter 5 numbers: ");

    for(i=0;i<5;i++) {
        scanf("%d", & arr1[i]);
    }

    printf("\nArray A = {%d, %d, %d, %d, %d}", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

    for(i=0;i<5;i++) {
        ans = ans * arr1[i];
    }

    for(i=0;i<5;i++) {
        arr2[i] = ans / arr1[i];
    }

    printf("\n\nArray B = {%d, %d, %d, %d, %d}", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);

    return 0;
}