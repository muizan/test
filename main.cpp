#include <bits/stdc++.h>

using namespace std;
bool tempstr(string str,string  tar,int i,int j){
    string temp;
    int l=0;
for(int k=i;k<=i+j;k++){
   if(tar[l]!=str[k]){
    return 0;
   }
l++;
}
return 1;
}

int main()
{
    string s,ans;
    string tar;
    cout<<"enter your string ";
    cin>>s;
    cout<<"enter target";
    cin>>tar;

    int len=tar.length();
    for(int i=0;i<s.length();i++){
      bool check=0;
       if(s[i]==tar[0]){
        if(tempstr(s,tar,i,len-1)){
            check=1;}
       }

       if(check){
        for(int j=i+len;s[j]!=',';j++){
            cout<<s[j];
        }
        cout<<endl;
       } else{
        while(s[i]!=','){
            i++;
        }
        continue;
       }

    }
    return 0;
}
