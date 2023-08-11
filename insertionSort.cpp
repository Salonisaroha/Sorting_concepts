#include<iostream>
using namespace std;
int InsertionSort(int arr[], int n){
      for(int i=1; i<n; i++){
    int temp = arr[i];

        for(int j= i-1;j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            arr[j+1] = temp;
        }
        
        
      }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
 int arr[] = {2,9,3,6,5};
 int size = 5;
 InsertionSort(arr, size);
 printArray(arr, size);
}