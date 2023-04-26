#include<iostream>
#include<vector>
using namespace std;

void BubbleSort(vector<int>& arr){
    bool swapped=false;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            } 
        }
        if(swapped==false) break;
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int>arr(size);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    BubbleSort(arr);
    for(int j=0; j<arr.size(); j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
