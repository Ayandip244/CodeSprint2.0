#include <stdio.h>
#include <string.h>
int main(){
  char s[1001];
  int freq[26]={0};
  scanf("%s",s);
  for (int i=0;s[i] != '\0';i++){
    freq[s[i]-'a']++;
  }
  int a=0;
  for(int i=0;i<26;i++){
    if(freq[i] != 0){
      a = freq[i];
      break;
    }
  }
  int b=1;
  for(int i=0;i<26;i++){
    if(freq[i]!=0 && freq[i]!=a){
      b=0;
      break;
    }
  }
  if(b){
    printf("Aashriya smiles: Emotional balance found.");
  }else{
    printf("Aashriya wonders: These thoughts were scattered.");
  }
  return 0;
}
