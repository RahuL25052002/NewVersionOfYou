#include<iostream>
using namespace std;
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
}