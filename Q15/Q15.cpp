#include<iostream>
using namespace std;
int main(){
    cout<<"DevanshRautela_C_20_2018314"<<endl;
    int t;
    cout<<"enter no. of test"<<endl;
    cin>>t;
    while(t!=0)
    {
        int m;
        cout<<"enter the size of array"<<endl;
        cin>>m;
        int arr1[m];
        cout<<"enter the element of array"<<endl;
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        int n;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        int arr2[n];
        cout<<"enter the element of array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        int i=0,j=0;
        while(i<m&&j<n)
        {
            if(arr1[i]==arr2[j]&&(arr1[i-1]!=arr1[i]||arr2[j-1]!=arr2[j]))
            {
              cout<<arr1[i]<<" ";
              i++;
              j++;
            }
            else if(arr1[i]>arr2[j])
              j++;
            else
              i++;
        }
        t--;
    }
}
