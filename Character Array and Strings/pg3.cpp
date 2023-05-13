#include<iostream>
using namespace std;
bool palindrome(char arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;

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
    bool br=palindrome(name,length);
    if(br)
        cout<<"String is Palindrome"<<endl;
    else
        cout<<"String is not palindrome";
}