//no. of bits reqd to be changed to convert a to b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//take xor and count set bits of xor result
//This function takes O(number of bits) time
int countSetBits(int num){
    int count=0;
    while(num>0){
        count+=(num&1);
        num=num>>1;
    }
    return count;
}
//This function takes O(Number of set bits) time
int countSetBits2(int num){
    int count=0;
    while(num){
        num=num&(num-1);
        count++;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int diff=a^b;
    cout<<"Number of bits that need to be changed="<<countSetBits2(diff)<<endl;
}