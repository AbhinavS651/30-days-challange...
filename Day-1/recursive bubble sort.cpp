#include<bits/stdc++.h>
using namespace std;

void bubblesorthelp(vector <int> &nums,int n){
    if(n==1) return;
    for(int i=0;i<n-1;i++){
        if(nums[i]>=nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }
    bubblesorthelp(nums,n-1);
}

vector<int> bubbleSort(vector<int>& nums) {
    int n=nums.size();
    bubblesorthelp(nums,n);
    return nums;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bubbleSort(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}