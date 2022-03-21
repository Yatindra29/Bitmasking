#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//rightmost bit is 0th bit
void clearing_ith_bit(int &num,int i){
    int mask=~(1<<i);
    num=num&mask;
}
int main(){
    int n,i;
    cin>>n>>i;
    clearing_ith_bit(n,i);
    cout<<"New number:"<<n;
}