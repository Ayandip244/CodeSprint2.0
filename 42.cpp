#include<iostream>
#include<queue>
#include<sstream>
using namespace std;

int main(){
  string l;
  cout<<"deck = ";
  getline(cin,l);
  stringstream ss(l);
  queue<int> q;
  int a;
  while(ss>>a) q.push(a);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    if(!q.empty()){
      q.push(q.front());
      q.pop();
    }
  }
}
