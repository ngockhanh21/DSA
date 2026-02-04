// Lũy thừa modulo
#include <bits/stdc++.h>
using namespace std;

long long mod_pow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b) {
        if (b & 1) 
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    cout << mod_pow(2, 10, 1000);
    return 0;
}