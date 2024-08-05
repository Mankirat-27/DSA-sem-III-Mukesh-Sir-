#include<stdio.h>
int main(){
    float vel;
    int count = 0;
    printf("Enter the dropping velocity of the ball: ");
    scanf("%f", & vel);

    while(vel!=0) {
        count = count + 1;
        vel = vel/2;
    }

    printf("The Number of times ball bounced =  %d", count);
    return 0;
}