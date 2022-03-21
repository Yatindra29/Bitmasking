#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void set_ith_bit_and_return(int& num,int i){
    int mask=1<<i;
    num=(num | mask);
}
int main(){
    int n,i;
    cin>>n>>i;
    set_ith_bit_and_return(n,i);
    cout<<"New number:"<<n;
}