#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 0; i < 200; i++) {
        if (is_prime(i)) {
            cout << i << ":\n";
            for (int j = 0; j < 200; j++) {
                if (i != j && is_prime(j) && is_prime(i + j)) {
                    cout << i << " + " << j << " = " << (i + j) << "\n";
                }
            }
            cout << "\n";
        }
    }
}
