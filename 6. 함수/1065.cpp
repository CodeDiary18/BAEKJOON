#include <iostream>

int Hansu(int n){
  int cnt=0;
  int one,ten,hund;
  for(int i=1;i<=n;i++){
    one=i%10;
    ten=(i/10)%10;
    hund=i/100;
    if(i<100||hund-ten==ten-one) cnt++;
  }
  return cnt;
}
int main() {
  int n;
  std::cin >> n;
  std::cout<<Hansu(n);
  return 0;
}
