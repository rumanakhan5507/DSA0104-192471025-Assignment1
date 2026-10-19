#include <iostream>
#include <iomanip>
int main() {
   double total = 0.0;
   for (int i = 0; i < 100000; ++i) total += 0.1;
   std::cout << std::setprecision(17) << total << '\\n';
   long long paise = 0;
   for (int i = 0; i < 100000; ++i) paise += 10;
   std::cout << paise << " paise\\n";
}

