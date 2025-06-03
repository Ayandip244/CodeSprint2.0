#include <iostream>
#include <vector>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a), next(nullptr){}
};

vector<int> par(node* head){
  node *s=head, *f=head;
  while(f && f->next){
    s=s->next;
    f=f->next->next;
  }
  vector<int> r;
  while(s){
    r.push_back(s->info);
    s=s->next;
  }
  return r;
}

int main(){
  int n;
  cin>>n;
  
  if(n<=0){
    cout<<"List must contain at least one child.";
    return 0;
  }

  int a;
  cin>>a;
  node* head = new node(a);
  node* curr = head;

  for(int i=1;i<n;++i){
    cin>>a;
    curr->next = new node(a);
    curr = curr->next;
  }

  vector<int> r=par(head);
  for(int x : r) cout<<x<<" ";

  while(head){
    node* t = head;
    head = head->next;
    delete t;
  }
  return 0;
}
