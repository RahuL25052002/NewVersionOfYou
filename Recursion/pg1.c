// say digits

#include<stdio.h>
void saydigits(int n,char **arr){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    printf("%s",arr[digit]);
    saydigits(n,arr);
    //printf("%c",arr[digit]);
}
int main(){
    char *arr[]={"zero","one","two","three","four",
    "five","six","seven","eight","nine"};
    int n;
    printf("Enter the digits\n");
    scanf("%d",n);
    saydigits(n,&arr);
    return 0;
}