// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>

using namespace std;

int main() {
    // Write C++ code here
    map<int, string>m;
    m[1] = "K";
    m[3] = "v";
    m[2] = "a";
    
    m.insert({4, "y"});
    m.insert({5, "a"});
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    
    cout<<m.count(4)<<endl; //checking for an element
    
    m.erase(5);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    
    auto it = m.find(2);
    
    for(auto i = it; i != m.end(); i++){
        cout<<(*i).first<< " "<<(*i).second<<endl;
    }cout<<endl;
    
    return 0;
}
