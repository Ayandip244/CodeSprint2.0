#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

struct node{
  int info;
  node* next;
  node(int a) : info(a), next(nullptr){}
};

vector<node*> split(node* head,int b){
  vector<node*> r(b,nullptr);
  int len=0;
  for(node* p=head; p; p=p->next) len++;
  int base=len/b, extra=len%b;

  node* curr=head;
  for(int i=0;i< b && curr;++i){
    r[i]=curr;
    int size=base+(i<extra);
    for(int j=1;j<size;++j) curr=curr->next;
    node* temp=curr->next;
    curr->next=nullptr;
    curr=temp;
  }
  return r;
}

node* build(vector<int> v){
  node d(0), *tail=&d;
  for(int a : v) tail=tail->next=new node(a);
  return d.next;
}

void display(vector<node*> parts){
  for(int i=0; i<parts.size(); ++i){
    cout<<"[";
    node* p=parts[i];
    while(p){
      cout<<p->info;
      if(p->next) cout<<",";
      p=p->next;
    }
    cout<<"]";
    if(i< parts.size()-1) cout<<",";
  }
  cout<<endl;
}

int main(){
  string line;
  getline(cin,line);
  stringstream ss(line);
  vector<int> v;
  int a,b;
  while (ss>>a) v.push_back(a);
  cin>>b;

  node* head=build(v);
  vector<node*> parts=split(head,b);
  display(parts);
  return 0;
}
