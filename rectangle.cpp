#include <iostream>

int main () {
  int row; 
  int col;

  std::cin >> row >> col;

  for(int i = 1; i <= row; i++){
    for(int j = 1; j <= col; j++){
      std::cout << "* ";
    }
    std::cout << '\n';
  }
}