#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 elements of the arrary: ");
    int i,j,k;

    for(i=0;i<10;i++){
         scanf("%d" , & arr[i]);
    }

    printf("\n\n");

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            for(k=0;k<10;k++){
                if(arr[i] + arr[j] == arr[k]){
                    printf("No. %d and No. %d's sum is equal to No. %d \n", i+1, j+1, k+1);
                    printf("%d + %d = %d \n\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return 0;
}
