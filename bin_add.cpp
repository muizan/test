#include <bits/stdc++.h>
using namespace std;
vector<bool>str1,str2,ans;
pair<bool,bool> addhelp(bool a,bool b){
bool sum=((!a)*b)+((!b)*a);
bool carry=a*b;
return {sum,carry};
}
void addbin(int bl){
int i=bl-1;
bool check=0;
bool temp=0,carry=0;
while(i>=0){
   // cout<<str1[i]<<str2[i]<<endl;
    pair<bool,bool>var=addhelp(str1[i],str2[i]);
    bool sum=var.first,ms;
    carry=var.second;
   // cout<<"sum:"<<sum<<"carry"<<carry<<endl;
    if(!check){
       ans.push_back(sum);
       temp=carry;
       i--;
        check=1;
        continue;
    }
    pair<bool,bool>entry=addhelp(sum,temp);
    ms=entry.first;
    if(entry.second){
        temp=entry.second;
    }else{
    temp=carry;}
    ans.push_back(ms);
    i--;
}
if(temp){
    ans.push_back(temp);
}
}
int main(){
int n,m;
cin>>n;
cin>>m;
int bl=max(n,m);
for(int i=0;i<bl;i++){
    if(i<bl-n){
        str1.push_back(0);
continue;
    }
    int a;
    cin>>a;
    str1.push_back(a);

}
for(int i=0;i<bl;i++){
    if(i<bl-m){
        str2.push_back(0);
        continue;
    }
    int a;
    cin>>a;
    str2.push_back(a);
}
addbin(bl);
int lent=ans.size();
lent--;
cout<<"sum:";
while(lent>=0){
    cout<<ans[lent--];
}
}

/*ector<int>str1,str2,ans;
pair<int,int> addhelp(int a,int b){
int sum=((!a)*b)+((!b)*a);
int carry=a*b;
return {sum,carry};
}
void addbin(int bl){
int i=bl-1;
bool check=0;
int temp=0,carry=0;
while(i>=0){
   // cout<<str1[i]<<str2[i]<<endl;
    pair<int,int>var=addhelp(str1[i],str2[i]);
    int sum=var.first,ms;
    carry=var.second;
   // cout<<"sum:"<<sum<<"carry"<<carry<<endl;
    if(!check){
       ans.push_back(sum);
       temp=carry;
       i--;
        check=1;
        continue;
    }
    pair<int,int>entry=addhelp(sum,temp);
    ms=entry.first;
    if(entry.second){
        temp=entry.second;
    }else{
    temp=carry;}
    ans.push_back(ms);
    i--;
}
if(temp){
    ans.push_back(temp);
}
}
int main(){
int n,m;
cin>>n;
cin>>m;
int bl=max(n,m);
for(int i=0;i<bl;i++){
    if(i<bl-n){
        str1.push_back(0);
continue;
    }
    int a;
    cin>>a;
    str1.push_back(a);

}
for(int i=0;i<bl;i++){
    if(i<bl-m){
        str2.push_back(0);
        continue;
    }
    int a;
    cin>>a;
    str2.push_back(a);
}
addbin(bl);
int lent=ans.size();
lent--;
cout<<"sum:";
while(lent>=0){
    cout<<ans[lent--];
}
}*/
