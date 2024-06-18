#include <iostream>

int main () {

  int n; 
  int count = 1; 
  std::cin >> n;
  
  for(int i = 1; i <= n; i++){
   for(int j = 1; j <= i; j++){
      std::cout << count << " ";
      count++;
   }
   std::cout << '\n';
  }
}