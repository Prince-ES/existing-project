#include <iostream>

int main () {
  int n;
  std::cin >> n;

  for(int i = 1; i <=5; i ++){
    for(int j = 1; j <=5; j++){
      if(j > n-i){
        std::cout << "* ";
      }else{
        std::cout << "  ";
      }
    }
    std::cout << '\n';
  }
}