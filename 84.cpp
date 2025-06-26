#include<bits/stdc++.h>
using namespace std;

struct node{
  int v;
  node *l, *r;
  node(int x) : v(x), l(NULL), r(NULL){}
};

node* build(vector<int>& a, int l, int r){
  if(l>r) return 0;
  int m=(l+r)/2;
  node* n = new node(a[m]);
  n->l = build(a,l,m-1);
  n->r = build(a,m+1,r);
  return n;
}

vector<string> order(node* r){
  vector<string> res;
  queue<node*> q;
  q.push(r);
  while(!q.empty()){
    node* n = q.front(); q.pop();
    if(n){
      res.push_back(to_string(n->v));
      q.push(n->l);
      q.push(n->r);
    }else res.push_back("null");
  }
  while(!res.empty() && res.back()=="null") res.pop_back();
  return res;
}

int main(){
  vector<int> a; cout<<"nums = ";
  string l,i; getline(cin,l);
  stringstream ss(l);
  while(ss>>i) a.push_back(stoi(i));
  node* r = build(a,0,a.size()-1);
  for(auto& s : order(r)) cout<<s<<" ";
}
