#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int nth_prime(int n) {
    if (n == 1) return 2;

    // Estimate upper bound
    double nn = n;
    int limit = (int)(nn * log(nn) + nn * log(log(nn))) + 10;

    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            count++;
            if (count == n)
                return i;
        }
    }

    return -1; // should never happen
}

int main() {
    int n = 10001;
    cout << nth_prime(n) << endl;
}