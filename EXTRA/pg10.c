/*array of find second largest element in the array\n");
*/

#include<stdio.h>
void main(){
    int size;
    printf("Enter size\n");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&*(arr+i));
    }
    int max=arr[0];
    int sec_max=0;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        if(arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];
        }
    }
        printf("%d\n",sec_max);
}

 