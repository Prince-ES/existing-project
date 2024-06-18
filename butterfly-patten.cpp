#include <iostream>

int main () {
  int n;
  std::cin >> n;

  for(int i = 1; i <= 2*n; i++){
    for(int j = 1; j <= 2*n; j++){
      if(i == n || i == n+1){
        std::cout << "* ";
      }else if(( j > i && j <= (2*n)-i) ||( j < i && j > ((2*n-i)+1) )){
        std::cout << "  ";
      }else{
        std::cout << "* ";
      }
    }
    std::cout << '\n';
  }
}