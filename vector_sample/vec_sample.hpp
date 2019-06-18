#include <vector>
#include <iostream>
#include <unordered_map>

class Hoge {
public:
  Hoge() : x_(0), map_({}), vec_vec_({}){
    std::cout << "constructor" << std::endl;
    map_["fugafuga"] = 100;
    vec_vec_.push_back({1, 2});
  }

  void print_x() {
    std::cout << x_ << std::endl;
    std::cout << map_["fugafuga"] << std::endl;
  }

  std::unordered_map<std::string, int> get_map() {
    return map_;
  }


  std::vector<std::vector<int>> get_vecvec() {
    return vec_vec_;
  }
  
private:
  int x_;
  std::unordered_map<std::string, int> map_;
  std::vector<std::vector<int>> vec_vec_;
};

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
