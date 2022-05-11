#include <iostream>
#include <math.h>
using namespace std;
void jumpsearch(int *arr,int n,int key)
{int r=pow(2,1);
  int l=0;
  int i=1;
  int c=0;
  while(r<=n)
  {
      c++;
      if(arr[r]<arr[i])
      {
        for(int j=l;j<=r;j++)
        {
        c++;
        if(arr[j]==key)
        {
            cout<<key<<" found"<<endl;
            cout<<"number of comparision"<<endl;
            cout<<c<<endl;
            return ;
        }
        }
      }
      i++;
      l=r;
      r=pow(2,i);
  }
  if(r>n){
        for(int j=l;j<n;j++){
        c++;
        if(arr[j]==key) {
            cout<<key<<" found"<<endl;
            cout<<"number of comparision"<<endl;
            cout<<c<<endl;
            return ;
        }  }  }
    cout<<key<<" not found"<<endl;
    cout<<"number of comparision"<<endl;
    cout<<c<<endl;
    return ;}
int main(){
cout<<"DevanshRautela_C_20_2018314"<<endl;
int t;
cout<<"enter no. of test"<<endl;
cin>>t;
 while(t!=0) {
    int n, key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<"enter the key"<<endl;
    cin>>key;
    jumpsearch(arr,n,key);
    t--;
 } return 0;
}		
