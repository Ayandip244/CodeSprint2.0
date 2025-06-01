#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int v[100];
  for (int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  int c=0;
  for(int i=1;i<n;i++){
    if(v[i] >= 50 && v[i] > v[i-1]){
      c++;
    }
  }
  printf("%d",c);
  return 0;
}
