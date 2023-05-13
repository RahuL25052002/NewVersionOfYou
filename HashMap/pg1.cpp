#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    //creation

    unordered_map<string,int> m;

    //insertion
    //1
    pair<string,int> p=make_pair("Nikale",1);
    m.insert(p);
    //2
    pair<string,int> pair2("Rahul",2);
    m.insert(pair2);
    //3
    m["Sai"]=3;
    m["Sai"]=5;//here updation occurs becuse only assign once

    //searching
    cout<<m["Sai"]<<endl;
    cout<<m.at("Nikale")<<endl;

    //cout<<m.at("Unknown")<<endl;
    /*terminate called after throwing an instance of 'std::out_of_range'
    what():  _Map_base::at*/

    cout<<m["unknown"]<<endl;//it gives the 0 
    cout<<m.at("unknown")<<endl;//now it give the zero because 
    //firstly 0 is assign unknown value that why it not give the error

    cout<<m.size()<<endl;
    // for checking preasence use count;
    cout<<m.count("Sai")<<endl;//it return boolean value 

    //erase
    m.erase("unknown");
    cout<<m.size()<<endl;

    //for accesing we have to use loop and iterator too
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    //using iterator
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
/*
    //using map
    //creation

    map<string,int> m;

    //insertion
    //1
    pair<string,int> p=make_pair("Nikale",1);
    m.insert(p);
    //2
    pair<string,int> pair2("Rahul",2);
    m.insert(pair2);
    //3
    m["Sai"]=3;
    m["Sai"]=5;//here updation occurs becuse only assign once

    //searching
    cout<<m["Sai"]<<endl;
    cout<<m.at("Nikale")<<endl;

    //cout<<m.at("Unknown")<<endl;
    /*terminate called after throwing an instance of 'std::out_of_range'
    what():  _Map_base::at

    cout<<m["unknown"]<<endl;//it gives the 0 
    cout<<m.at("unknown")<<endl;//now it give the zero because 
    //firstly 0 is assign unknown value that why it not give the error

    cout<<m.size()<<endl;
    // for checking preasence use count;
    cout<<m.count("Sai")<<endl;//it return boolean value 

    //erase
    m.erase("unknown");
    cout<<m.size()<<endl;

    //for accesing we have to use loop and iterator too
    /*for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    //using iterator
    map<string,int>::iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

*/
}