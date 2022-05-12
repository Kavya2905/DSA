// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int bSearch(vector<int> arr, int n, int m){
    sort(arr.begin(), arr.end());
    int s = 0, e = arr[n - 1];
    int mid;
    long long int count;
    
    while(s < e){
        mid = s + (e-s+1)/2;
        count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > mid){
                count = count + (arr[i] - mid);
            }
            
        }
        if(count >= m){
            s = mid;
        }
       //mid = s + (e-s)/2; 
       else{
           e = mid - 1;
       }
        
    }
    //mid = s + (e-s)/2;
    return s;
    
}

int main() {
    // Write C++ code here
    int n = 4, m = 7;
    vector<int> arr= {20, 15, 10, 17};
    cout << bSearch(arr,n, m);

    return 0;
}
