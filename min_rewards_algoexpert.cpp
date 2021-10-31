#include <iostream>
using namespace std;
//min rewards algoexpert
void r_traverse(int arr[],int temp[],int n){
for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
        temp[i]+=temp[i-1];
    }
}
}
void l_traverse(int arr[],int temp[],int n){
for(int i=n-2;i>=0;i--){
    if(arr[i]>arr[i+1]&&temp[i]==1){
        temp[i]+=temp[i+1];

    }
}
}
int main()
{
    int n;
    cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp[i]=1;
    }
    r_traverse(arr,temp,n);
    l_traverse(arr,temp,n);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
