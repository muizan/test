#include <bits/stdc++.h>

using namespace std;
 void np(vector<int>&nums){
 do{
    cout<<nums[0]<<nums[1]<<nums[2];
 }while(next_permutation(nums.begin(),nums.end()));
 }

int main()
{
 int n;
 cin>>n;

 vector<int>nums;
 for(int i=0;i<n;i++){
    int a;
    cin>>a;
    nums.push_back(a);
 }
np(nums);
 return 0;
}
/*vector<vector<int>> threeSum(vector<int>& nums) {
         set<int>p;
         sort(nums.begin(),nums.end());
         vector<vector<int>>v;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(p.count(nums[i])==0){
               set<int>s;
            int target=-nums[i];
            cout<<"target"<<target;
             set<int>temp;
        for(int j=i;j<n;j++){

            int sum=target-nums[j];
           if(s.count(sum)==1&&(!temp.count(nums[j])||!temp.count(sum))){
                cout<<nums[j]<<sum<<nums[i]<<endl;
                temp.insert(sum);
                temp.insert(nums[j]);
                v.push_back({nums[i],nums[j],sum});
            }else{
                s.insert(nums[j]);
            }
        }
    }
    p.insert(nums[i]);
        }
  }*/
/* vector<int> twoSum(vector<int>& nums, int target) {
        int n=(int)nums.size();
        vector<int>v;
        set<int>s;
        int temp=0;
        int t=0;
        for(int i=0;i<n;i++){
           int sum=target-nums[i];
            if(s.count(sum)==1){
                temp=i;
                t=sum;
                break;
            }
            else{
                    cout<<nums[i];
                s.insert(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==t&&i!=temp){
                v.push_back(temp);
                v.push_back(i);
                break;
            }
        }
        return v;
    }*/

  /*int removeDuplicates(vector<int>& nums) {
     int i=0, j=1;
        int temp=nums[i];
        int n=nums.size();

        while(j<n){
            if(temp==nums[j]){
                j++;
                continue;
            }
            else{
                nums[++i]=nums[j];
                temp=nums[j++];
            }
        }
    return i+1;
    }*/
  /*int  threeSum(vector<int>& nums) {
     int temp=nums[0];
     bool check=0,check2=0;
     int cnt=0,cnt2=0;
     for(int i=1;i<nums.size();i++){
        if(temp==nums[i]){
            if(!check){
               cout<<"what";
                cnt++;
            }
            check=1;
        }else{
        if(!check2){
            cout<<"why";
            cnt2++;
            check2=1;
        }
        temp=nums[i];
        check2=0;
        check=0;
        }
     }
     int ans=cnt*2+cnt2;
     return ans;
    }*/
