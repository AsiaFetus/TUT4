#include <iostream>

void never_defined();
int main() {
    never_defined();
    return 0;
}

// error says undefined reference to "never defined"
// ld states it is a linker error