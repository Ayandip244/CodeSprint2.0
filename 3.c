#include <stdio.h>
int main(){
  int n;
  printf("n = ");
  scanf("%d",&n);
  int s[100];
  printf("scores = ");
  for(int i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  int c=0;
  for(int i=1;i<n-1;i++){
    if(s[i] > s[i-1] && s[i] > s[i+1]){
      c++;
    }
  }
  printf("%d", c);
  return 0;
}
