#include<bits/stdc++.h>
using namespace std;

struct node{
  int info;
  node *l, *r;
  node(int x) : info(x), l(NULL), r(NULL){}
};

node* tree(vector<string>& v){
  if(v[0] == "null") return nullptr;
  node* root = new node(stoi(v[0]));
  queue<node*> q({root});
  for(int i=1;i<v.size();){
    node* cur = q.front(); q.pop();
    if(v[i] != "null") q.push(cur->l = new node(stoi(v[i])));
    i++;
    if(i<v.size() && v[i] != "null") q.push(cur->r = new node(stoi(v[i])));
    i++;
  }
  return root;
}

bool mirror(node* a, node* b){
  if(!a || !b) return a == b;
  return a->info == b->info && mirror(a->l, b->r) && mirror(a->r, b->l);
}

int main(){
  string s; getline(cin,s);
  stringstream ss(s);
  vector<string> v{istream_iterator<string>(ss),{}};
  node* root = tree(v);
  cout<<(mirror(root->l, root->r) ? "true":"false");
}
