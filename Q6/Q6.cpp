#include <iostream>
using namespace std;
int main(){
cout<<"DevanshRautela_C_20_2018314"<<endl;
int t;
cout<<"enter no. of test"<<endl;
cin>>t;
 while(t!=0){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
      int f=0;
      int k;
      cout<<"enter key"<<endl;
      cin>>k;
      for(int i=0;i<n-1;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(arr[i]-arr[j]==k||arr[j]-arr[i]==k)
               f++;
          }
      }
      cout<<f;
      t--;
 }
}
