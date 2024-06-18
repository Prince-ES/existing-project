#include <iostream>

int main () {
  int n;
  std::cin >> n;

  for(int i = 1; i <= n; i++){
    // for(int j = 1; j < 2*n; j++){
    //   if((j <= (2*n-1)-(4+i)) || (j > 2*n - i)){
    //     std::cout << " ";
    //   }else{
    //     std::cout << "* ";
    //   }
    // }
    for(int j = n-i; j >= 1; j--){
      std::cout << "H";
    }
    for(int j = 1; j <= n; j++){
      std::cout << "* ";
    }
    for(int j = 1; j <= i; j++){//this loop is not required as the shape is decide by the first loop printing spaces.
      std::cout << "H";
    }
    std::cout << "\n";
  }
}