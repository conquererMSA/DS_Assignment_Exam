#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        bool isAsceSorted=true;
        int len=size-1;
        for(int i=0; i<len; i++){
            if(arr[i]>arr[i+1]){
                isAsceSorted=false;
                break;
            }
        }
        if(isAsceSorted){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}