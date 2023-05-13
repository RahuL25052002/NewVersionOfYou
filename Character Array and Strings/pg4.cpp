// in this program it consider the only integer and alphabets 
//it ignore all the special characters and things
#include<iostream>
using namespace std;
bool palindrome(char arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(arr[start]>=0 &&arr[start]<=47 ||arr[start]>=58 && arr[start]<=64 || arr[start]>=91 && arr[start]<=96 ||arr[start]>=123 && arr[start]<=126){
            start++;
        }else
         if(arr[end]>=0 &&arr[end]<=47 ||arr[end]>=58 && arr[end]<=64 || arr[end]>=91 && arr[end]<=96 ||arr[end]>=123 && arr[end]<=126){
            end--;
        }else{
                if(arr[start]!=arr[end]){
                    return 0;
                }else{
                    start++;
                    end--;
                }
            }
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