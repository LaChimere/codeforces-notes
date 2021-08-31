#include <iostream>
using namespace std;

long long n, m, a;

int main() {
    scanf("%lld%lld%lld", &n, &m, &a);
    long long x = n / a + (n % a != 0), y = m / a + (m % a != 0);
    printf("%lld\n", x * y);

    return 0;
}
