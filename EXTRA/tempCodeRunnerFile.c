#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        scanf("%d",(arr1+i));
    }
    for(int j=0;j<n;j++){
        scanf("%d",(arr2+j));
    }
    
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            count1++;
        }
        if(arr1[i]<arr2[i]){
            count2++;
        }
    }
    printf("%d %d\n",count1,count2);
}