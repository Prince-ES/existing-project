//hollow rectangle:row 5, col 4;
#include <iostream>
int main () {
  int n;
  std::cin >> n;

  //upper part: priting 5 rows;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 2*n-1; j++){
      if(j > n-i && j <= (2*n-1) - (n-i)){
        std::cout << "* ";
      }
      else{
        std::cout << "  ";
      }
    }
    std::cout << '\n';
  }
  //lower part: printing 5 rows more(4 if i is starting from n-1);
  for(int i = n; i >=1; i--){
    for(int j = 1; j <= 2*n-1; j++){
      if(j > n-i && j <= (2*n-1) - (n-i)){
        std::cout << "* ";
      }
      else{
        std::cout << "  ";
      }
    }
    std::cout << '\n';
  }
}