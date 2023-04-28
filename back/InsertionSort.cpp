#include<iostream>
using namespace std;
void InsertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];;
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    InsertionSort(arr,size);
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
