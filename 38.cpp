#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

int main(){
  int n; cin>>n;
  stack<string> s;
  unordered_map<string,int> freq;
  while(n--){
    string c,x;
    cin>>c;
    if(c=="PUSH"){
      cin>>x;
      s.push(x);
      freq[x]++;
    }else if(c=="POP"){
      if(!s.empty()){
        freq[s.top()]--;
        s.pop();
      }
    }else{
      if(s.empty()) cout<<"EMPTY\n";
      else cout<<freq[s.top()]<<'\n';
    }
  }
}
