#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"DevanshRautela_C_20_2018314"<<endl;
int t;
    cout<<"enter no. of test"<<endl;
    cin>>t;
    while(t!=0)
    {
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int count[26];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;++i)
    {
        int k=arr[i];
        ++count[k-97];
    }
    int l=count[0],j=0;
    for(int i=1;i<26;i++)
    {
        if(l<count[i])
        {
          l=count[i];
          j=i;
        }
    }
    if(l>1)
    {
        char a='a'+j;
        cout<<a<<"-"<<l;
    }
    else
    {
       cout<<"no duplicate found"<<endl;    
    }
    t--;
    }
}

