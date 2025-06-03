#include <iostream>
#include <stack>
using namespace std;

int main(){
  string s;
  cin>>s;
  stack<string> st;
  for(char c:s){
    if(isalnum(c)) st.push(string(1,c));
    else{
      string b=st.top(); st.pop();
      string a=st.top(); st.pop();
      st.push(c+a+b);
    }
  }
  cout<<st.top();
  return 0;
}
