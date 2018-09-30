#include<bits/stdc++.h>
using namespace std;

int missingNo(int arr[] , int n){
    int x1 = arr[0];
    int x2 = 1;

    for(int i=1;i<n;i++){
        x1 = x1^arr[i];
    }

    for(int i=2;i<=n+1;i++){
        x2 = x2^i;
    }

    return x1^x2;
}

int main(){
    int arr[] = {1,2,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int miss = missingNo(arr,size);
    cout<<"Missing number is: "<<miss;
    return 0;
}