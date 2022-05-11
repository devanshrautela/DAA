#include <iostream>
#include <algorithm>
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
 int arr[n];
 int j;
 int c=0,s=0;
 cout<<"enter the element of array"<<endl;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
     int temp=arr[i];
     j=i-1;
     while(j>=0&&temp<arr[j])
     {
         arr[j+1]=arr[j];
         c++;
         s++;
         j--;
     }
     arr[j+1]=temp;
     s++;
 }
  for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 cout<<"comparision "<<c<<endl;
 cout<<"shifts "<<s-1<<endl;
 t--;
 }
}
