#include <iostream>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a), next(nullptr){}
};

node* rev(node* head){
  node* prev=nullptr;
  while(head){
    node* t=head->next;
    head->next = prev;
    prev = head;
    head = t;
  }
  return prev;
}

node* dbl(node* head){
  head = rev(head);
  node *r=nullptr, *tail=nullptr;
  int c=0;
  while(head || c){
    int sum=c+(head ? head->info*2 : 0);
    c=sum/10;
    node* n=new node(sum%10);
    if(!r) r=tail=n;
    else tail=tail->next=n;
    if(head) head=head->next;
  }
  return rev(r);
}

int main(){
  int n,a;
  cin>>n;
  node *head=nullptr, *tail=nullptr;
  for(int i=0;i<n;++i){
    cin>>a;
    node* t=new node(a);
    if(!head) head=tail=t;
    else tail=tail->next=t;
  }

  node* r=dbl(head);
  while(r){
    cout<<r->info<<" ";
    r=r->next;
  }
}
