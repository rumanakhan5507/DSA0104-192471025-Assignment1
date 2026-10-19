#include <climits>
#include <iostream>
int main() {
   std::cout << "sizeof(bool) = " << sizeof(bool) << '\\n';
   std::cout << "sizeof(char) = " << sizeof(char) << '\\n';
   std::cout << "sizeof(int) = " << sizeof(int) << '\\n';
   std::cout << "sizeof(unsigned) = " << sizeof(unsigned) << '\\n';
   std::cout << "sizeof(long long) = " << sizeof(long long) << '\\n';
   std::cout << "sizeof(float) = " << sizeof(float) << '\\n';
   std::cout << "sizeof(double) = " << sizeof(double) << '\\n';
   std::cout << "INT_MIN = " << INT_MIN << '\\n';
   std::cout << "INT_MAX = " << INT_MAX << '\\n';
   std::cout << "LLONG_MAX = " << LLONG_MAX << '\\n';
}

