#include<iostream>
using namespace std;
void merge(int *arr, int start, int end){
    int mid=(start+end)/2;
    
    int lin1=mid-start+1;
    int lin2=end-mid;

    int *first = new int[lin1];
    int *second = new int[lin2];
    
    int mainindex=start;
    for(int i=0; i<lin1; i++){
        first[i]=arr[mainindex++];        
    }

    mainindex=mid+1;
    for(int j=0; j<lin2; j++){
        second[j]=arr[mainindex++];
    }

    int index1=0;
    int index2=0;

    mainindex=start;
    while(index1<lin1 && index2<lin2){
        if(first[index1]<second[index2]){
            arr[mainindex++]=first[index1++];
        }
        else arr[mainindex++]=second[index2++];
    }
    while(index1<lin1){
        arr[mainindex++]=first[index1++];
    }
    while(index2<lin2){
        arr[mainindex++]=second[index2++];
    }
}
void merge_sort(int *arr, int start, int end){
    if(start>=end) return;

    int mid=(start+end)/2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, end);
}
int main(){
        int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    merge_sort(arr, 0, size-1); // Call the sorting function directly
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}