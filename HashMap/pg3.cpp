#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int>m;
int n;
cout<<"Enter the numbr"<<endl;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
}
int q;
cin>>q;
while(q--){
    string s;
    cin>>s;
    cout<<m[s]<<endl;
}
}