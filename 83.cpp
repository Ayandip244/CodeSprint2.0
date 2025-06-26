#include<bits/stdc++.h>
using namespace std;

struct node{
  int v;
  node *l, *r;
  node(int x) : v(x), l(NULL), r(NULL){}
};

int count(node* n){
  if(!n) return 0;
  int lh=0, rh=0;
  node *a=n, *b=n;
  while(a) lh++, a=a->l;
  while(b) rh++, b=b->r;
  if(lh==rh) return (1<<lh)-1;
  return 1+count(n->l)+count(n->r);
}

node* build(vector<string>& v){
  if(v.empty() || v[0]=="null") return 0;
  node* r = new node(stoi(v[0]));
  queue<node*> q{{r}};
  int i=1;
  while(i<v.size()){
    node* n = q.front(); q.pop();
    if(v[i]!="null") q.push(n->l = new node(stoi(v[i])));
    i++;
    if(i<v.size() && v[i]!="null") q.push(n->r = new node(stoi(v[i])));
    i++;
  }
  return r;
}

int main(){
  vector<string> v;
  string l,w; getline(cin,l);
  stringstream ss(l);
  while(ss>>w) v.push_back(w);
  cout<<count(build(v))<<endl;
}
