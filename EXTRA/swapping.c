/* using bitwise oprator */
#include<stdio.h>
int main(){
    int x=5,y=7;     /*5=0 1 0 1
                       7=0 1 1 1  here we use XOR operation for swappig purpose 
                       */
    x=x^y;
    y=x^y;
    x=x^y;

    printf("x=%d y=%d\n",x,y);
}