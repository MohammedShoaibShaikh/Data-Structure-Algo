#include<iostream>
using namespace std;

// 1. Find the count of every distinct element in the array.
// 2. Calculate the position of each element in sorted array.
void CountSort(int arr[], int n){
    // For finding the Maximum Value in the array.
    int k = arr[0];
    for(int i = 0; i < n; i++){
        k = max(k, arr[i]);
    }
    // Now Making the Count Array of the size k
    // And count Array will contain the Count of the Elements in Array.
    int count[10] = {0};
    
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    // Modifing the Count Array.
    for(int i = 1; i <= k; i++){
        count[i]+= count[i-1];
    }
    // Final Output Array.
    int output[n];
    for(int i = n-1; i >= 0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << output[i] << " ";
    }

}
int main(){
    int arr[] = {0, 1, 2, 1, 3, 4, 3};
    CountSort(arr, 7);
    
    return 0;
}