// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#include<list>

int main() {
    // Write C++ code here
    list<int>n(5, 100);
    for(int i:n){
        cout << i <<" ";
    }cout << endl;
    
    
    list <int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    for(int i:l){
        cout << i <<" ";
    }
    cout << endl;
    
    l.erase(l.begin());
    for(int i:l){
        cout << i <<" ";
    }
    cout << endl;
    
    cout << l.size();
    return 0;
}
