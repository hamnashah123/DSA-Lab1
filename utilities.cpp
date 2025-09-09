#include <iostream>
#include "utilities.h"
using namespace std;

int add(int a, int b) { return a + b; }

int main() {
    cout << "add(2,3) == 5: " << (add(2,3) == 5 ? "PASS" : "FAIL") << endl;
    return 0;
}

