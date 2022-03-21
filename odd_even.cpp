#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool odd(int num){
    return (num&1)==1;
}
int main(){
    int num;
    cin>>num;
    if(odd(num)){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
}