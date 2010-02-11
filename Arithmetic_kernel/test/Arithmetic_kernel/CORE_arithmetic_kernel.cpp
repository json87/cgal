#include <iostream>
#include <CGAL/basic.h>

#include <CGAL/CORE_arithmetic_kernel.h>

#ifdef CGAL_HAVE_CORE_ARITHMETIC_KERNEL
#include <CGAL/Test/_test_arithmetic_kernel.h>

int main() {
  typedef CGAL::CORE_arithmetic_kernel AK;
  CGAL::test_arithmetic_kernel<AK>();
  return 0;
}

#else
int main() { return 0; }
#endif