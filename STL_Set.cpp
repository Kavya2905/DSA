// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<set>

int main() {
    // Write C++ code here
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(7);
    
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    set<int>::iterator it = s.begin();
    it++;
    
    s.erase(it);//deletes 1st element
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<s.count(2)<<endl;   //checks if element present
    
    set<int>::iterator itr = s.find(5);//finds the element
   
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    
    //cout<<*s.find(7)<<endl; ....prints 7 as output

    return 0;
}
