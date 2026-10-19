
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 1. Operator precedence
    cout << 5 + 3 * 2 << " "
         << (5 + 3) * 2 << '\n';

    // 2. Post-increment and pre-increment
    int x = 5;
    int y = 3;
    int z = x++ + ++y;

    cout << z << x << y << '\n';

    // 3. Modulus and multiplication precedence
    cout << (6 % 4) * 2 << '\n';

    // 4. Integer division and remainder
    cout << 10 / 3 << " "
         << 10 % 3 << " "
         << -10 / 3 << " "
         << -10 % 3 << '\n';

    // 5. Loop and accumulation
    int k = 0;
    for (int i = 0; i < 10; i += 3) {
        k += i;
    }
    cout << k << '\n';

    return 0;
}

