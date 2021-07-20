#include <iostream>

int main() {
  int x,y,n;
  std::cin>>n>>x>>y;
  int res = -1;
  int af,bf;
  af=0; bf=0;
  for (int a = 0; (a <= n/x) && (res == -1); a++)
  {
    for (int b = 0; (b <= n/y) && (res == -1) ; b++)
    {
      int c = a*x + b*y;
      if(c==n){
        af=a;
        bf=b;
        res=1;
      }
    }
  }
  if(res==1){
    printf("%d %d",af,bf);
  } else{
    std::cout<<-1;
  }
}