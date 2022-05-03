
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start)/2;      //(start+end)/2   ....using this code to avoid out of index error if start and end becomes (2^31)-1, the start+end will become its double which is above integer range that is (2^31) - 1
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start +(end-start)/2;  //(start + end)/2;
    }
    return -1;
}

int main() {
    // Write C++ code here
    int even[5] = {2, 4, 6, 8, 10};
    int index = BinarySearch(even, 5, 10);
    cout << "Index of the key is "<<index<<endl;

    return 0;
}

// Output
//Index of the key is 4
