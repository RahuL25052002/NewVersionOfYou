/* CALL BY VALUE */

#include<stdio.h>
int fun(int x,int y);
int main(){
    int x=10,y=20;
    fun(x,y);
    printf("x=%d y=%d \n",x,y);
}

// here only change occur but when the stack frame of function pop 
// the new value of the variable also vanish that time */
int fun(int x,int y){
    x=20;
    y=10;
}