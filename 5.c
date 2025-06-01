#include <stdio.h>
int main(){
  int r,c;
  scanf("%d %d",&r,&c);
  int stock[100][100];
  for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
      scanf("%d",&stock[i][j]);
    }
  }
  int overstockcount=0;
  for(int i=0;i<r;i++){
    int count=0;
    for(int j=0;j<c;j++){
      if(stock[i][j] >= 100){
        count++;
      }
    }
    if(count >= 3){
      overstockcount++;
    }
  }
  printf("%d",overstockcount);
  return 0;
}
