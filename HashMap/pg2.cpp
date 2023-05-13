#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m;
    cout<<"Enter number of string do you want "<<endl;
    int n;
    string s;
    cin>>n;
    cout<<"Enter the strings"<<endl;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]=m[s]+1;//that increment that value when it comes count that elemeny
        //m[s]++;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}