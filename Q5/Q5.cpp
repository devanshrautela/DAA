#include <iostream>
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
    cout<<"enter the element of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
      int f=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i<<" "<<j<<" "<<k;
                    f=1;
                    break;
                }
            }
            if(f==1)
              break;
        }
        if(f==1)
         break;
    }
    if(f==0)
     cout<<"not found";
     t--;
 }
}
