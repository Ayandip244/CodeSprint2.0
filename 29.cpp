#include <iostream>
#include <sstream>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a), next(nullptr){}
};

node* add(node* l1,node* l2){
  node *head=nullptr, *tail=nullptr;
  int c=0;
  while(l1 || l2 || c){
    int sum=c+(l1 ? l1->info : 0)+(l2 ? l2->info : 0);
    c=sum/10;
    node* n=new node(sum%10);
    if(!head) head=tail=n;
    else tail=tail->next=n;
    if(l1) l1=l1->next;
    if(l2) l2=l2->next;
  }
  return head;
}

node* create(string line){
  node *head=nullptr, *tail=nullptr;
  stringstream ss(line);
  int a;
  while(ss>>a){
    node* t=new node(a);
    if(!head) head=tail=t;
    else tail=tail->next=t;
  }
  return head;
}

void display(node* head){
  cout<<"[";
  while(head){
    cout<<head->info;
    if(head->next) cout<<", ";
    head=head->next;
  }
  cout<<"]";
}

int main(){
  string m,n;
  cout<<"l1 = ";
  getline(cin,m);
  cout<<"l2 = ";
  getline(cin,n);
  node* l1=create(m);
  node* l2=create(n);
  node* r=add(l1,l2);
  display(r);
  return 0;
}
