#include <iostream>
#include <cmath>
//Algoritmo palindromos_numericos_11
int main() {
  double n = 11;
  int r = 11;
  std::cout.precision(18);
  while (r < 9){
    std::cout << n << " * " << " = " << pow(n,2) << "\n";
    n = (n*10) + 1;
    r++;
  }
}