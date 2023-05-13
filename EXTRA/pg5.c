#include<stdio.h>
char fun(char *ptr1,char *ptr2){
    *ptr1='D';
    *ptr2='F';
}
void main(){
    char ch1='A';
    char ch2='B';
    printf("ch1=%c  ch2=%c \n",ch1,ch2);
    fun(&ch1,&ch2);
    printf("ch1=%c  ch2=%c \n",ch1,ch2);

}
