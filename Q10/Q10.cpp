#include <bits/stdc++.h>
using namespace std;
int _mergeSort(int arr[], int temp[], int left, int right,int *c);
int merge(int arr[], int temp[], int left, int mid,int right,int *c);
int mergeSort(int arr[], int array_size,int *c)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1,c);
}
int _mergeSort(int arr[], int temp[], int left, int right,int *c)
{
    int mid, inv_count = 0;
    if (right > left) {
    
        mid = (right + left) / 2;
        inv_count += _mergeSort(arr, temp, left, mid,c);
        inv_count += _mergeSort(arr, temp, mid + 1, right,c);
        inv_count += merge(arr, temp, left, mid + 1, right,c);
    }
    return inv_count;
}
int merge(int arr[], int temp[], int left, int mid,int right,int *c)
{
    int i, j, k;
    int inv_count = 0;

    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) {
        *c=*c+1;
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
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
 int c=0;
 cout<<"enter the element of array"<<endl;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
    int s = mergeSort(arr, n,&c);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<"comparision "<<c<<endl;
    cout << "inversions " <<s<<endl;
  t--;
}
}
