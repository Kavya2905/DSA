// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sortedMerge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i =0, j =0, k = 0;
    while(i < n && j < m){
        if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else{
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr2[j++];
    }
}


int main() {
    // Write C++ code here
    int n = 5, m = 3;
    int arr1 [n] = {1, 3, 5, 7, 9};
    int arr2 [m] = {2, 4, 6};
    int arr3[] = {};
    sortedMerge(arr1, 5, arr2, 3, arr3);
    for(int i=0; i < (n + m); i++){
        cout << arr3[i] << " ";
    }cout << endl;
    return 0;
}
