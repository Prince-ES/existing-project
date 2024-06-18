#include <iostream>

int main () {
  int n;
  std::cin >> n;

  for(int i = 1; i <= n; i++){
    int row = i;
    for(int j = 1; j <= n-i; j++){
      std::cout << "  ";
    }
    for(int j = 1; j <=n; j++){
      std::cout << row << " ";
      row--;
      if(row <=0){break;}
    }
    if(i > 1){
      for(int j = 2; j <= i; j++){
        std::cout << j << " ";
      }
    }
    std::cout << '\n';
  }
}