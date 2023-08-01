#include<bits/stdc++.h>
#include<vector>
using namespace std;

int KthLargestElement(vector<int> arr,int n,int k){
    sort(arr.begin(),arr.end());  
        return arr[n-k];          

int main(){
    vector<int> arr{2,1,4,6,3,9,7};
    int n = arr.size();
    int k = 2;
    int x = KthLargestElement(arr,n,k);
    cout<<"Kth largest element is "<<x;
    return 0;
}