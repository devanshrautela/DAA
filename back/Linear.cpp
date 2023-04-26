#include<iostream>
using namespace std;
bool linearSearch(int arr[], int target, int size){
    for(int i=0; i<size; i++){
        if(target==arr[i]) return true;
    }
    return false;
}
int main()
{
    int size, target, result;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target";
    cin>>target;
    result=linearSearch(arr,target,size);
    if(result==1) cout<<"Target is present";
    else cout<<"Target is not present";
    return 0;
}