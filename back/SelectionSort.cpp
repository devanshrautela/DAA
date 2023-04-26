#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){  // Changed the return type to void
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){  // Changed the loop variable from i to j
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    SelectionSort(arr, size); // Call the sorting function directly
    for(int j=0; j<size; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
