#include <iostream>

int main() {
#pragma omp parallel
  {
    std::cout<<"Hello world\n";
  }
  return 0;
}

