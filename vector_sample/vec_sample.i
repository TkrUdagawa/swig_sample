%module vec_sample
%include <std_vector.i>
%include <std_unordered_map.i>
%include <std_string.i>


%{
  #include "vec_sample.hpp"
%}
%include "vec_sample.hpp"
%template(DVec) std::vector<double>;
%template(HogeVec) std::vector<Hoge>;
%template(CMap) std::unordered_map<std::string, int>;
%template(CVec) std::vector<int>;
%template(CVecVec) std::vector<std::vector<int>>;
