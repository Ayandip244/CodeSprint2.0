#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
  int info;
  node* prev;
  node* next;
  node(int v){
     info=v;
     prev=nullptr;
     next=nullptr;
   }
};

void append(node*& head,int v){
  node* newNode= new node(v);
  if(!head){
    head=newNode;
    return;
  }
  node* temp=head;
  while(temp->next) temp=temp->next;
  temp->next=newNode;
  newNode->prev=temp;
}

node* sort(node* head){
  vector<int> v;
  node* temp=head;
  while(temp){
    v.push_back(temp->info);
    temp=temp->next;
  }
  sort(v.begin(), v.end());

  temp=head;
  int a=0;
  while(temp){
    temp->info=v[a++];
    temp=temp->next;
  }
  return head;
}

void display(node* head){
  node* temp=head;
  while(temp){
    cout<<temp->info;
    if(temp->next) cout<<" <-> ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){
  int n;
  cin>>n;
  node* head=nullptr;

  for(int i=0;i<n;++i){
    int v;
    cin>>v;
    append(head,v);
  }
  head=sort(head);
  display(head);
  return 0;
}
