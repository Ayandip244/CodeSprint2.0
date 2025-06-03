#include<iostream>
#include<stack>
using namespace std;

int main() {
    int n; cin >> n;
    stack<int> a,s;
    while(n--) {
        string op; cin >> op;
        if(op == "PUSH") {
            int x; cin >> x;
            s.push(x);
            if(a.empty() || x <= a.top()) a.push(x);
        } else if(op == "POP") {
            if(!s.empty()) {
                if(s.top() == a.top()) a.pop();
                s.pop();
            }
        } else {
            if(a.empty()) cout << "EMPTY\n";
            else cout << a.top() << '\n';
        }
    }
}
