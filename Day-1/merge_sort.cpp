#include <bits/stdc++.h>
using namespace std;

void merger(vector <int>& arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector <int> vec;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            vec.push_back(arr[left]);
            left++;
        }
        else{
            vec.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        vec.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        vec.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=vec[i-low];
    }
}

void mergesort(vector <int>& arr,int low,int high){
    if(low>=high) return;
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merger(arr,low,mid,high);
}



int main(){
    int a;
    cin>>a;
    vector <int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,a-1);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}