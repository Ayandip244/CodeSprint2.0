#include <stdio.h>
#include <string.h>
int vowel(char name[]){
  char c=name[0];
  return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int isUnique(char r[][100],int c,char name[]){
  for(int i=0;i<c;i++){
    if(strcmp(r[i],name)==0){
      return 0;
    }
  }
  return 1;
}
int main(){
  int n;
  scanf("%d",&n);
  char name[100][100];
  char r[100][100];
  int c=0;
  for(int i=0;i<n;i++){
    scanf("%s",name[i]);
    if(vowel(name[i])){
      if(isUnique(r,c,name[i])){
        strcpy(r[c],name[i]);
        c++;
      }
    }
  }
  printf("%d\n",c);
  for(int i=0;i<c;i++){
    printf("%s ",r[i]);
  }
  return 0;
}
