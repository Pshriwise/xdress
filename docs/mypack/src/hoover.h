#if !defined(HOOVER)
#define HOOVER
#include <map>
#include <vector>

namespace hoover {
class A{
public:
  A(int x=5);
  ~A();
  std::map<int, double> y;
  std::vector< double > test_val;
  std::vector < std::vector<double> > test_vals;
};

class B : public A {
public:
  B();
  ~B();
  int z;
};

void do_nothing_ab(A a, B b);
};

#endif
