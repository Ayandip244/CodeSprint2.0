#include <stdio.h>
#include <string.h>
int main(){
  char a[100];
  int c=0;
  scanf("%s",a);
  int l=strlen(a);
  for(int i=0;i<l;i++){
    if(a[i]=='1' && (i==0 || a[i-1]=='0')){
      c++;
    }
  }
  printf("%d",c);
  return 0;
}
