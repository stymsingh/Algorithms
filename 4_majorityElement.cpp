#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int size){
    int maj_index = 0, count = 1;
    for(int i=1;i<size;i++){
        if(arr[maj_index] == arr[i])
            count++;
        else
            count --;
        
        if(count==0){
            maj_index = i;
            count = 1;
        }
    }

    return arr[maj_index];
}

int Majority(int arr[], int size){
    int cand = majorityElement(arr,size);
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==cand) count++;
        if(count>size/2){
            return cand;
            break;
        }
    }
    return 0;
}
int main(){
    int arr[] = {3,1,3,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The majority element is: "<<Majority(arr,size)<<endl;
    return 0;
}