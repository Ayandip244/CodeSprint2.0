#include <iostream>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a), next(nullptr){}
};

node* color(node* head){
  if(!head || !head->next) return head;

  node *z = new node(0), *o = new node(0), *t = new node(0);
  node *zero=z, *one=o, *two=t;

  node* curr=head;
  while(curr){
    if(curr->info == 0) zero->next=curr,zero=zero->next;
    else if(curr->info == 1) one->next=curr,one=one->next;
    else two->next = curr, two = two->next;
    curr = curr->next;
  }

  zero->next = o->next ? o->next : t->next;
  one->next = t->next;
  two->next = nullptr;

  head = z->next;
  delete z, delete o, delete t;
  return head;
}

node* create(int n){
  if(n==0) return 0;
  int a;
  cin>>a;
  node *head = new node(a), *tail=head;
  for(int i=1;i<n;++i){
    cin>>a;
    tail->next = new node(a);
    tail = tail->next;
  }
  return head;
}

void p(node* head){
  while(head){
    cout << head->info;
    if(head->next) cout<<"-";
    head = head->next;
  }
  cout<<endl;
}

int main(){
  int n;
  cout<<"No. of packages: ";
  cin>>n;
  cout<<"Color codes (0=Red, 1=Blue, 2=Green): ";
  node* head = create(n);
  head = color(head);
  cout<<"Sorted: ";
  p(head);
  return 0;
}
