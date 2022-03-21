#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

void print_letters(char *a,int i){
    int idx=0;
    while(i>0){
        (i&1)?cout<<a[idx]:cout<<"";
        idx++;
        i=i>>1;
    }
    cout<<endl;
}
void generate_subsequences(char *word){
    int len=strlen(word);
    int range=(1<<len)-1;
    for(int i=0;i<=range;i++){
        print_letters(word,i);
    }
}
int main(){
    char arr[100];
    cin>>arr;
    generate_subsequences(arr);
}