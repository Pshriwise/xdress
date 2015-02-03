#include "hoover.h"

namespace hoover {

A::A(int x){
  y[x] = x * 42.0;
  test_val.push_back(1);
  test_val.push_back(2); 
  test_val.push_back(3); 

  test_vals.push_back(test_val); 
  test_vals.push_back(test_val); 
  test_vals.push_back(test_val); 

};
A::~A(){};

B::B(){z=3;};
B::~B(){};

void do_nothing_ab(A a, B b) {};

}; // namespace hoover
