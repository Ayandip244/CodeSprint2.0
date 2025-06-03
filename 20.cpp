#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct node{
  int v;
  node* next;
  node(int a) : v(a),next(nullptr){}
};

node* create(string b){
  node *head=nullptr, *curr=nullptr;
  stringstream ss(b);
  int n;
  while(ss>>n){
    if(!head){
      head=new node(n);
      curr=head;
    }else{
      curr->next = new node(n);
      curr = curr->next;
    }
  }
  return head;
}

node* rm_dupli(node* head){
  node* curr=head;
  while(curr && curr->next){
    if(curr->v == curr->next->v){
      node* temp = curr->next;
      curr->next = temp->next;
      delete temp;
    }else{
      curr = curr->next;
    }
  }
  return head;
}

void p(node* head){
  while(head){
    cout<<head->v;
    if(head->next) cout<<"->";
    head = head->next;
  }
  cout<<"\n";
}

int main(){
  cout<<"Enter sorted values in 1 line separated by spaces\nLinked List: ";
  string a;
  getline(cin,a);
  
  node* head = create(a);

  head=rm_dupli(head);
  p(head);
  
  while(head){
    node* temp=head;
    head=head->next;
    delete temp;
  }
  return 0;
}
