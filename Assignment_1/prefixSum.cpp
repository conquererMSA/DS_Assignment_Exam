#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    long long int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    long long int prefixArr[size];
    prefixArr[0]=arr[0];
    for(int i=1; i<size; i++){
        prefixArr[i]=arr[i]+prefixArr[i-1];
    }
    int len=size-1;
    for(int i=len; i>=0; i--){
        cout<<prefixArr[i]<<" ";
    }

    return 0;
}