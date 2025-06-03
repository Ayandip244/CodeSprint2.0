#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
  string speechLine;
  cout<<"speechLine = ";
  getline(cin, speechLine);
  
  stringstream s(speechLine);
  string w;
  vector<string> words;

  while(s>>w){
    words.push_back(w);
  }
  for(int i= words.size() - 1; i>=0; --i){
    cout << words[i];
    if(i != 0) cout<<" ";
  }
  return 0;
}
