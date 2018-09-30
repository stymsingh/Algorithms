#include<bits/stdc++.h>
using namespace std;
int searchSortedRotated(int arr[], int low, int high, int target){
    if(low>high) return -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;

        // if arr[0...mid] is sorted
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<=arr[mid]){
                return searchSortedRotated(arr,low, mid-1, target);
            }
            return searchSortedRotated(arr,mid+1,high,target);
        }

        /* If arr[l..mid] is not sorted, then arr[mid... r] 
            must be sorted*/
        if(target>=arr[mid] && target<=arr[high]){
            return searchSortedRotated(arr,mid+1,high, target);
        }
        return searchSortedRotated(arr,low,mid-1,target);
    }
}

int main(){
    int arr[] = {5,6,7,8,9,10,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = size-1;
    int target = 10;
    int out = searchSortedRotated(arr,low, high, target);
    cout<<"The element is found at: "<<out<<endl;
    return 0;
}