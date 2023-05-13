/* maximum Occuring charcter*/
#include<iostream>
using namespace std;
char maxOfCharacter(string s){
    char arr[26]={0};
    int number=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        number=ch-'a';
        arr[number]++;
    }
    int max=-1;
    char ans;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            ans=i;
            max=arr[i];
        }
    }
    return 'a'+ans;
}
int main(){
    string s;
    cout<<"Ennter the String"<<endl;
    cin>>s;
    cout<<maxOfCharacter(s)<<endl;

}