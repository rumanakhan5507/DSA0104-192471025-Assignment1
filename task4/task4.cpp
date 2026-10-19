#include <iostream>
int main() {
   int a{7};
   int b{2};
   double c = static_cast<double>(a / b); // still 3.0: division already happened
   double d = static_cast<double>(a) / static_cast<double>(b);
   std::cout << c << ' ' << d << '\\n';
   char ch = static_cast<char>('A' + 2);
   std::cout << ch << ' ' << static_cast<int>(ch) + 1 << '\\n';
   bool flag = (5 != 0);
   std::cout << flag << ' ';
   std::cout << std::boolalpha << flag << '\\n';
   unsigned int u{1};
   int s{-1};
   std::cout << (s < static_cast<int>(u) ? "s < u" : "s >= u") << '\\n';
}

