// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <stack>

int main() {
    // Write C++ code here
    stack <string> s;
    s.push("Kavya");
    s.push("K");
    s.push("a");
    
    cout << s.top() <<endl;
    
    s.pop();
    
    cout << s.top() <<endl;
    
    cout << s.size() <<endl;
    
    cout << s.empty() <<endl;

    return 0;
}
