#include <iostream>
using namespace std;

struct node{
  int data;
  node* next;
  node(int a) : data(a),next(nullptr){}
};

bool find(node* head){
  node *s=head, *f=head;
  while(f && f->next){
    s = s->next;
    f = f->next->next;
    if(s==f) break;
  }
  if(!f || !f->next) return true;

  s = head;
  if(s == f){
    while(f->next != s) f=f->next;
  }else{
    while(s->next != f->next){
      s = s->next;
      f = f->next;
    }
  }
  f->next = nullptr;
  return true;
}

int main(){
  int n,pos;
  cout<<"no. of nodes = ";
  cin>>n;

  cout<<"Linked list = ";
  node *head=nullptr, *tail=nullptr;
  for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    node* m = new node(a);
    if(!head){
      head = tail = m;
    }else{
      tail = tail->next = m;
    }
  }

  cout<<"pos = ";
  cin>>pos;
  if(pos>0){
    node* a = head;
    for(int i=1;i< pos && a;i++){
      a = a->next;
    }
    if(tail) tail->next=a;
  }
  cout<<(find(head) ? "true":"false");
  return 0;
}
