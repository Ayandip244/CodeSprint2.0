#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t,n;
  cout<<"target: ";
  cin>>t;
  cout<<"no. of session: ";
  cin>>n;
  vector<int> s(n);
  cout<<"sessions: ";
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int l,a=0,sum=0,length=n+1;
  for(int i=0;i<n;i++){
    sum+=s[i];
    while(sum>=t){
      l=i-a+1;
      if(l<length){
        length=l;
      }
      sum -= s[a++];
    }
  }
  if(length == n+1){
    cout<<0;
  }else{
    cout<<length;
  }
  return 0;
}
