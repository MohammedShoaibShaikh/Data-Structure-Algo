#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0, last = n-1;

    while(start <= last){
        int mid = (start + last) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            last = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key; cin >> key;
    cout << BinarySearch(arr, n, key) << endl;

    return 0;
}