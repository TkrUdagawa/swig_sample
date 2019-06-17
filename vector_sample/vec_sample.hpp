#include <vector>
#include <iostream>


void init(std::vector<double>& val) {
  val.clear();
  val.push_back(1.0);
  val.push_back(2.0);
  val.push_back(3.0);
  
}
void twice(std::vector<double>& val) {
  for (auto& v : val) {
    v *= 2;
    std::cout << v << std::endl;
  }
}
