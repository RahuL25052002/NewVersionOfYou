/*write a program to swap values using pointer */

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x\n");
    scanf("%d",&x);

    printf("Enter the value of y\n");
    scanf("%d",&y);
    printf("BRFORE SWAPPING.........\n");
    printf("x=%d y=%d\n",x,y);

    int *ptr1=&x;
    int *ptr2=&y;

    
    *ptr1=*ptr1^*ptr2;
    *ptr2=*ptr1^*ptr2;
    *ptr1=*ptr1^*ptr2;
    printf("AFTER SWAPPING....\n");
    
    printf("x=%d y=%d",x,y);
}