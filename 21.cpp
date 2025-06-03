#include <iostream>
#include <vector>
using namespace std;

struct node{
  int data;
  node* next;
  node(int a) : data(a),next(nullptr){}
};

void append(node* &head, int v){
  if(!head){
    head = new node(v);
    return;
  }
  node* cur = head;
  while(cur->next) cur = cur->next;
  cur->next = new node(v);
}

void zigzag(node* head){
  vector<int> v;
  node* cur = head;
  while(cur){
    v.push_back(cur->data);
    cur = cur->next;
  }
  int start=0, end=(int)v.size() - 1;
  while(start <= end){
    cout<<v[start++]<<" ";
    if(start <= end)
      cout<<v[end--]<<" ";
  }
}

int main(){
  int n;
  cin>>n;
  node* head = nullptr;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    append(head,a);
  }
  zigzag(head);
}
