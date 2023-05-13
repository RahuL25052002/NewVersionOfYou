#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the valuse you want to sum : ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"The valuse of sum is: "<<sum<<endl;
    return 0;
}