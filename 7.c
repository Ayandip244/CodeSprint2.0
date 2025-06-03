#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j)
        printf("%d",i+1);
      else if(i+j == n-1)
        printf("%d",n-i);
      else
        printf("-");
      if(j != n-1)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
