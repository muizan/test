#include <bits/stdc++.h>

using namespace std;
int min_jumps(int arr[],int n){
int jumps=0;
int temp,i=0;
int max_reach=arr[0];
if(arr[0]==0){
    return 0;
}
while(1){
    int j;
    if(max_reach>=n-1){
        cout<<"min no of jumps:";
        return jumps+1;
    }
    int limit=max_reach;
    for(j=i+1;j<=limit;j++){
       max_reach=max(max_reach,arr[j]+j);
    }
    if(!arr[max_reach]&&max_reach!=n-1){return 0;}
  // cout<<max_reach<<" "<<j;
    i=j-1;
    jumps++;

   // cout<<jumps;
}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=min_jumps(arr,n);
    cout<<ans;
    return 0;
}
