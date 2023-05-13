#include<stdio.h>
void main(){
        int arr[]={10,20,30,40,50};

        int *ptr1=&arr[1];
        int *ptr2=&arr[2];

        printf("%p\n",ptr1);
        printf("%p\n",ptr2);

        ptr1++;
        --ptr2;

        printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);

        printf("%p\n",ptr1);
        printf("%p\n",ptr2);

        printf("%ld\n",(ptr1-ptr2)+2);
        printf("%p\n",ptr2+(ptr1-ptr2));
        printf("%d\n",*(ptr2+(ptr1-ptr2)));

       /* printf("%p\n",(ptr1*2));
        printf("%d\n",*(ptr1*ptr2));
        printf("%p\n",(ptr1/2));*/
}
