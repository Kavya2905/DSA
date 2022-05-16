// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <queue>

int main() {
    // Write C++ code here
    priority_queue<int>maxi;
    
    priority_queue<int, vector<int>, greater<int>> mini;
    
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout << maxi.size()<<endl;
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout << maxi.top()<<" ";
        maxi.pop();
    }cout << endl;
    
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    mini.push(5);
    cout << mini.size()<<endl;
    int m = mini.size();
    for(int i = 0; i < m; i++){
        cout << mini.top()<<" ";
        mini.pop();
    }cout << endl;
    
    cout<<mini.empty()<<endl; // empty as all elements are popped
    return 0;
}
