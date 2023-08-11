#include<iostream>
using namespace std;
int Bubblesort(int arr[], int size){
for(int i=1; i<size; i++){
    for(int j=0;j<size-i;j++){
         if(arr[j]>arr[j+1]){
         swap(arr[j], arr[j+1]);
                
                }
            
            }
}
}

int main(){
    int arr[] = {10,1,7,6,14,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Bubblesort(arr, n);
    
    }
