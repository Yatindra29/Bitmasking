#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    a=a^b;
    b=b^a;
    a=a^b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}