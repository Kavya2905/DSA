// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int SqrtInt(int n){
    int s = 0, e = n;
    long long int mid = s + (e  - s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int sq = mid*mid;
        if(sq = mid*mid){
            return mid;
        }
        else if(sq < mid*mid){
            ans = sq;
            s = mid + 1;
        }
        else if(sq > mid*mid){
            e = mid - 1;
        }
        mid = s + (e  - s)/2;
    }
    return ans;
}

double precision(int n, int p, int tempSol){
    
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i < p; i++){
        factor = factor/10;
        for(double j = tempSol; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    // Write C++ code here
    int n = 3;
    int tempSol = SqrtInt(n);
    std::cout << "Square root is " << precision(n, 3,tempSol) << endl;

    return 0;
}
