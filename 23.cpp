#include <iostream>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a),next(nullptr){}
};

node* temp(node* head){
  if(!head || !head->next) return head;
  node *prev=head, *curr=head->next;
  while(curr){
    if(curr->info < 0){
      prev->next = curr->next;
      curr->next = head;
      head = curr;
      curr = prev->next;
    }else{
      prev = curr;
      curr = curr->next;
    }
  }
  return head;
}

node* create(int n){
  if(n==0) return nullptr;
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
    if(head->next) cout<<" -> ";
    head = head->next;
  }
  cout<<endl;
}

int main(){
  int n;
  cout<<"no. of nodes: ";
  cin>>n;
  cout<<"Linked List: ";
  node* head = create(n);
  head = temp(head);
  p(head);
  return 0;
}
