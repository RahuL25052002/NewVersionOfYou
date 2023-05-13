/*call by reference*/


#include<stdio.h>
int add(int *ptr1,int *ptr2);
int main(){
    int x=10,y=20;
    printf("This is call by reference program\n");
    add(&x,&y);
    printf("x=%d  y=%d \n",x,y);
}
int add(int *ptr1 ,int *ptr2){
    *ptr1=20;
    *ptr2=10;
}