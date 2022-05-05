//Pivot is the minimum element in an array which is sorted in 2 equal halves


#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] > arr[0]){
            s = mid + 1;
            
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int main() {
    // Write C++ code here
    int arr[5] = {4, 8, 10, 2, 3};
    std::cout << "Pivot is "<< getPivot(arr, 5)<<endl;

    return 0;
}

//Output
//Pivot is 3
