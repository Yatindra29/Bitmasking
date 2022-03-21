#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Assuming rightmost bit to be 0th bit
int ith_bit(int num,int i){
    return (num&(1<<i))!=0?1:0;
}
int main(){
    int n,i;
    cin>>n>>i;
    cout<<ith_bit(n,i);
}