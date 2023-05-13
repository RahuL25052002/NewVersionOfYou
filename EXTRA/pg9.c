/* WAP print the sum of diagonal element of array\n");
/*/
#include<stdio.h>
void main(){
    int row,column;
    printf("Enter the row\n");
    scanf("%d",&row);
    printf("enter the column\n");
    scanf("%d",&column);

    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&*(*(arr+i)+j));
        }
    }
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                printf("%d\t",*(*(arr+i)+j));
                sum=sum+arr[i][j];
            }else if(i+j==row-1){
                printf("%d\t",*(*(arr+i)+j));
                sum=sum+arr[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal element is %d\n",sum);
}

   