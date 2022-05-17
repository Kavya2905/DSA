// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    // Write C++ code here
    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(3);
    v.push_back(2);
    v.push_back(10);
    
    sort(v.begin(), v.end()); //Always sort before BS
    
    cout << binary_search(v.begin(), v.end(), 3)<<endl; //To find a number via BS
    
    cout<<lower_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    
    cout<<upper_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    
    
    int a = 2, b = 5;
    cout<<max(a, b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    
    string s ="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    
    
    return 0;
}
