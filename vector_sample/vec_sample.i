%module vec_sample
%include <std_vector.i>


%{
  #include "vec_sample.hpp"
%}
%include "vec_sample.hpp"
%template(DVec) std::vector<double>;
