#include<stdio.h>
void toh(int N,char A,char B,char C){
    if(N>0){
        toh(N-1,'A','C','B');
        printf("%c->%c\n",A,B);
        toh(N-1,'C','B','A');
    }
}
void main(){
    int N=2;
    toh(N,'A','B','C');
}