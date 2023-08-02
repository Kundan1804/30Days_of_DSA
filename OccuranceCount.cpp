#include <iostream>
using namespace std;

int func(int arr[],int x, int n){
    int cnt=0;
    for(int i=0; i<n;i++){
        if(arr[i]==x){
            cnt++;
        }
    }
    cout<<cnt;
    return cnt;
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int arr[5] = {1,3,3,4,3};
    int x = 3;
    int n = sizeof(arr)/sizeof(int);

    func(arr,x, n);
    return 0;
}