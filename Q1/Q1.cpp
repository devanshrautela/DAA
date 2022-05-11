#include <iostream>
using namespace std;
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
    int c=0,f=0;
    for(int i=0;i<n;i++)
    {	 c++;
        if(arr[i]==key)
        {
            cout<<key<<" found"<<endl;
            cout<<"number of comparision"<<endl;
            cout<<c<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    cout<<key<<" not found"<<endl;
    t--;
 }
    return 0;
}
