#include <iostream>

int main () {
  int n;
  std::cin >> n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 3*n; j++){
      if(((i+j)%4 == 0) || (i==2 && j%4 == 0)){
        std::cout << "* ";
      }else{
        std::cout << "  ";
      }
    }
    std::cout << '\n';
  }
}