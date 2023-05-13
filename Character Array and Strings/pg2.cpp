#include<iostream>
using namespace std;
void reverse(char name[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        char temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
        //swap(name[start++],name[end--]);
    }
    cout<<"Reverse String is : "<<name<<endl;
}
int lengthofString(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    cout<<"Enter the name"<<endl;
    char name[20];
    cin>>name;
    int length=lengthofString(name);
    cout<<"Length of Strig is : "<<length<<endl;
    reverse(name,length);
}