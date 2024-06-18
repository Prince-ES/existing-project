//hollow rectangle:row 5, col 4;
#include <iostream>
int main () {
  int row, col;
  std::cin >> row>> col;

  for(int i = 1; i <= row; i++){
    for(int j = 1; j <= col; j++){
      if(i == 1 || i == row){
        std::cout << "* ";
      }else{
        if(j == 1 || j == col){
          std::cout << "* ";
        }else{
          std::cout << "  ";
        }
      }
    }
    std::cout << '\n';
  }
}