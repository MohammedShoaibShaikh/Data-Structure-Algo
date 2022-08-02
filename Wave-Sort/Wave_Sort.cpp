#include<iostream>
using namespace std;

void swap(int arr[], int m, int n){
    int temp = arr[n];
    arr[n] = arr[m];
    arr[m] = temp;
}

void WaveSort(int arr[], int n){
    for(int i = 1; i < n; i+=2){
       if(arr[i] > arr[i-1]){
           swap(arr, i, i-1);
       }
       if(arr[i] > arr[i+1] && i <= n-2){
           swap(arr, i, i+1);
       } 
    }
}

int main(){
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    WaveSort(arr, 7);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}