#include <iostream>
using namespace std;
void binary(int *arr,int n,int key)
{
    int l=0,r=n-1;
    int c=0;
    while(l<r)
    {
        int mid=(l+r)/2;
        c++;
        if(arr[mid]==key)
        {
            cout<<key<<" found"<<endl;
            cout<<"number of comparision"<<endl;
            cout<<c<<endl;
            return ;
        }
        if(arr[mid]>key)
          r=mid-1;
        else
          l=mid+1;
    }
    cout<<key<<" not found"<<endl;
    cout<<"number of comparision"<<endl;
    cout<<c<<endl;
    return ;
}
int main()
{
cout<<"DevanshRautela_C_20_2018314"<<endl;
int t;
cout<<"enter no. of test"<<endl;
cin>>t;
 while(t!=0)
 {
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int c=0;
    binary(arr,n,key);
    t--;
 }
    return 0;
}
