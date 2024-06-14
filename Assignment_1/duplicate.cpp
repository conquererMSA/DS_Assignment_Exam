#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    long long int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    sort(arr, arr+size);
    bool isDuplicate=false;
    int len=size-1;
    for(int i=0; i<len; i++){
       if(arr[i]==arr[i+1]){
        isDuplicate=true;
        break;
       }
    }
    if(isDuplicate){
        cout<<"YES";
    }else{
         cout<<"NO";
    }
    return 0;
}