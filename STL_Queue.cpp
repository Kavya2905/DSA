// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#include <queue>

int main() {
    // Write C++ code here
    queue <string> q;
    q.push("Kavya");
    q.push("K");
    q.push("a");
    
    cout << q.front()<<endl;
     cout<<q.size()<<endl;
    
    q.pop();
    
    cout << q.front()<<endl;
    cout<<q.size()<<endl;
    

    return 0;
}
