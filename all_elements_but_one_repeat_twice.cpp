//All elements except one element repeat twice. Find the non-repeated element

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int non_repeating(vector<int> &nums){
    int result=0;
    for(int i=0;i<nums.size();i++){
        result^=nums[i];
    }
    return result;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    arr.reserve(n);
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    int not_repeating=non_repeating(arr);
    cout<<not_repeating;
}