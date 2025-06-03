#include<bits/stdc++.h>
using namespace std;

int main(){
  string l;
  cout<<"arr = ";
  getline(cin, l);

  istringstream ss(l);
  vector<string> arr{istream_iterator<string>{ss}, istream_iterator<string>{}};

  stack<int> s;
  for(auto &t : arr){
    if(t=="+"||t=="-"||t=="*"||t=="/"){
      int b=s.top(); s.pop();
      int a=s.top(); s.pop();
      if(t=="+") s.push(a+b);
      else if(t=="-") s.push(a-b);
      else if(t=="*") s.push(a*b);
      else s.push(a/b);
    }else{
      s.push(stoi(t));
    }
  }
  cout<<s.top();
  return 0;
}
