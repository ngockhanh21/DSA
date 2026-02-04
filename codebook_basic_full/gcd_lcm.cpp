// GCD-ƯCLN & LCM-BCNN
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 12, b = 18;
    int gcd_result = gcd(a, b);
    int lcm_result = a * b / gcd_result;
    
    cout << gcd_result << ' ' << lcm_result;
    return 0;
}