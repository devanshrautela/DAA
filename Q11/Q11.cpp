#include<iostream>
#include<algorithm>
using namespace std;
int partition(int *arr,int l,int r,int *c,int *s){
    int piovt=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
       (*c)++;
        if(arr[j]<=piovt)
        {
           i++;
           swap(arr[i],arr[j]);
           (*s)++;
        }
    }
    swap(arr[i+1],arr[r]);
    (*s)++;
    return (i+1);
}
void quicksort(int *arr,int l,int r,int *c,int *s)
{
if(l<r)
{
int p=partition(arr,l,r,c,s);
quicksort(arr,l,p-1,c,s);
quicksort(arr,p+1,r,c,s);
}
}
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
 int s=0,c=0;
 cout<<"enter the element of array"<<endl;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
   quicksort(arr,0,n-1,&c,&s);
  for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 cout<<"comparision "<<c<<endl;
 cout<<"swaps "<<s<<endl;
 t--;
}
}
