
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
           s = mid + 1;
        }
        else if(arr[mid] > key){
           e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            e = mid - 1;
        }
        else if(arr[mid] > key){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    // Write C++ code here
    int even[5] = {1, 2, 3, 3, 5};
    cout << "First Occurence is " << firstOcc(even, 5, 3)<<endl;
    cout << "Last Occurence is " << lastOcc(even, 5, 3)<<endl;

    return 0;
}

//Output
//First Occurence is 2
//Last Occurence is 3
