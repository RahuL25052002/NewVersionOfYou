//uncommon character in String
// by using C++;

#include<iostream>
#include<map>
#include<set>
using namespace std;

string Uncommonchar(string A,string B){
    string ans="";
    set<char>s;
    map<char,int>mA;
    map<char,int>mB;

    for(int i=0;i<A.length();i++)
        mA[A[i]]++;
    for(int i=0;i<B.length();i++)
        mB[B[i]]++;
    for(int i=0;i<A.length();i++){
        if(mA.find(A[i])!=mB.end()){
            s.insert(A[i]);
        }
    }
     for(int i=0;i<B.length();i++){
        if(mB.find(B[i])!=mA.end()){
            s.insert(B[i]);
        }
    }
    cout<<s.size()<<endl;
    for(auto i:s)
        ans+=i;
    return ans;
}
int main(){
    string A;
    string B;
    cout<<"Enter A String"<<endl;
    cin>>A;
    cout<<"Enter B String"<<endl;
    cin>>B;

    string result=Uncommonchar(A,B);

    cout<<"UNcoomon String : "<<result<<endl;
}