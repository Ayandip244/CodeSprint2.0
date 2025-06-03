#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct node{
  string val;
  node* next;
  node(string a) : val(a),next(nullptr){}
};

node* create(string l){
  stringstream ss(l);
  string a;
  node *head=nullptr, *tail=nullptr;

  while(ss>>a){
    node* temp=new node(a);
    if(!head){
      head=tail=temp;
    }else{
      tail->next=temp;
      tail=temp;
    }
  }
  return head;
}

node* rev(node* head,int left,int right){
  if(!head || left==right) return head;

  node d("dummy");
  d.next=head;
  node* prev=&d;

  for(int i=1;i<left;i++) prev=prev->next;

  node* curr=prev->next;
  for(int i=0;i<right-left;i++){
    node* temp=curr->next;
    curr->next=temp->next;
    temp->next=prev->next;
    prev->next=temp;
  }
  return d.next;
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
  string a;
  int l,r;
  cout<<"head = ";
  getline(cin,a);
  cout<<"left = ";
  cin>>l;
  cout<<"right = ";
  cin>>r;

  node* head=create(a);
  head=rev(head,l,r);
  display(head);
  return 0;
}
