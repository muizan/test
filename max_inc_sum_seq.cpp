#include <bits/stdc++.h>
#define NONE -1
using namespace std;
void max_seq(int arr[],int n,int ans[],int loc[]){
ans[0]=arr[0];
//loc[0]=-1;
for(int i=1;i<n;i++){
     int minn=arr[0];
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]&&minn<=arr[j]){
                minn=arr[j];
                int temp=arr[i]+ans[j];
                if(temp>ans[i]){
                    ans[i]=temp;
                    loc[i]=j;
                    cout<<"temp:"<<temp;
                }else{
                ans[i]=arr[i];}
        }
}

}}
int main()
{
    int n;
    cin>>n;
    int arr[n],ans[n],loc[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
         ans[i]=0;
    }
    max_seq(arr,n,ans,loc);
    int maxx=0;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
        maxx=max(maxx,ans[i]);
    }
    cout<<"sum:"<<maxx;
    int temp;
    for(int i=0;i<n;i++){
        if(ans[i]==maxx){
            temp=i;
            break;
        }
    }
     int index=temp;
     for(int i=0;i<n;i++){
        cout<<loc[i]<<" ";
     }
     cout<<arr[index];

    return 0;
}
