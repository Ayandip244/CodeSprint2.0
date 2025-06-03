#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct node{
  int val;
  node* next;
  node(int a) : val(a), next(nullptr){}
};

node* merge(node* a,node* b){
  if(!a) return b;
  if(!b) return a;
  if(a->val<b->val){
    a->next=merge(a->next,b);
    return a;
  }else{
    b->next=merge(a,b->next);
    return b;
  }
}

node* create(string l){
  stringstream ss(l);
  int a;
  node *head=nullptr,*tail=nullptr;
  while(ss>>a){
    node* temp=new node(a);
    if(!head) head=tail=temp;
    else tail=tail->next=temp;
  }
  return head;
}

void display(node* head){
  cout<<"[";
  while(head){
    cout<<head->val;
    if(head->next) cout<<", ";
    head=head->next;
  }
  cout<<"]";
}

int main(){
  string l1,l2;
  cout<<"list1 = ";
  getline(cin,l1);
  cout<<"list2 = ";
  getline(cin,l2);
  node* a=create(l1);
  node* b=create(l2);
  node* r=merge(a,b);
  display(r);
  return 0;
}
