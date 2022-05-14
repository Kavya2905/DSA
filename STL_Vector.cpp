// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<vector>

int main() {
    // Write C++ code here
    vector <int> a(4,1);
    vector <int> last(a);
    for(int i:last){
        cout<<i <<" ";
    }cout<<endl;
    
    vector <int> v;
    cout << "Capacity:" << v.capacity() <<endl;
    
    v.push_back(1);
    cout << "Capacity:" << v.capacity() <<endl;

    v.push_back(1);
    cout << "Capacity:" << v.capacity() <<endl;
    
    v.push_back(3);
    cout << "Capacity:" << v.capacity() <<endl;
    
    cout<<"Size:"<< v.size() << endl;
    
    cout << "Element at index 2:" << v.at(2) << endl;
    
    cout << "Front:" << v.front() << endl;
    
    cout << "Back:" << v.back() << endl;
    
    cout<<"Before pop:";
    for(int i:v){
        cout <<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    
    cout<<"After pop:";
    for(int i:v){
        cout <<i<<" ";
    }
    
    cout<<"Before clear:";
    cout<<v.size()<<endl;
    
    v.clear();
    
    cout<<"After clear:";
    cout <<v.size()<<endl;
    
    
    return 0;
}
