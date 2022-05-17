// Reverse an Array (Swap)
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int>v;

void reverse(vector<int> &v){
    int s =0, e = v.size()-1;
    swap(v[s], v[e]);
    s++;
    e--;
}

int main() {
    // Write C++ code here
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    reverse(v);
    
    for(int i:v){
        cout<<i<<" ";
    }cout << endl;

    return 0;
}
