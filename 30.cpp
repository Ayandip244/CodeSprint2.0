#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct node{
  int val;
  node* prev;
  node* next;
  node(int a){
    val=a;
    prev=next=nullptr;
  }
};

node* create(vector<int>& a){
  if(a.empty()) return nullptr;
  node* head=new node(a[0]);
  node* curr=head;
  for(int i=1;i<a.size();i++){
    node* t = new node(a[i]);
    curr->next = t;
    t->prev = curr;
    curr = t;
  }
  return head;
}

node* remove(node* head,int t){
  node* curr = head;
  while(curr){
    if(curr->val==t){
      node* d=curr;
      if(curr->prev) curr->prev->next = curr->next;
      else head=curr->next;
      if(curr->next) curr->next->prev = curr->prev;
      curr=curr->next;
      delete d;
    }else{
      curr=curr->next;
    }
  }
  return head;
}

void display(node* head){
  cout<<"head = ";
  while(head){
    cout<<head->val;
    if(head->next) cout<<" ";
    head=head->next;
  }
}

int main(){
  string l;
  cout<<"head = ";
  getline(cin,l);

  stringstream ss(l);
  int b;
  vector<int> a;
  while(ss>>b) a.push_back(b);

  int t;
  cout<<"target = ";
  cin>>t;

  node* head=create(a);
  head=remove(head,t);
  display(head);
  return 0;
}
