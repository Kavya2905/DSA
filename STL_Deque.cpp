// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<deque>

int main() {
    // Write C++ code here
    deque <int> d;
    
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout << i << " ";
    }cout << endl;
    
    //d.pop_front();
    cout << "Element at index 1:"<<d.at(1)<<endl;
    
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    
    cout<<d.size()<<endl;
    
    d.erase(d.begin(), d.begin()+1); //to delete first element
    
    cout<<d.size()<<endl;
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    return 0;
}
