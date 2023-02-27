#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    int r = sqrt(n);
    for (int i = 5; i <= r; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int power_mod(int a, int b, int n) {
    int result = 1;
    while (b > 0) {
        if (b & 1)
            result = (result * a) % n;
        a = (a * a) % n;
        b >>= 1;
    }
    return result;
}

bool is_smooth(int n, int r) {
    for (int i = 2; i <= r; i++) {
        if (n % i == 0 && is_prime(i)) {
            int k = 0;
            while (n % i == 0) {
                n /= i;
                k++;
            }
            if (k > 1 || (i <= sqrt(r) && k > 0))
                return false;
        }
    }
    return true;
}

bool is_aks_prime(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    int r = 1;
    while (r * r <= n)
        r++;

    if (is_smooth(n, r))
        return false;

    for (int a = 2; a <= r; a++) {
        if (gcd(a, n) != 1)
            return false;
        int x = power_mod(a, n, n);
        if (x != a)
            return false;
    }

    return true;
}

int main() {
    int n;
    printf("Digite um número inteiro para testar se é primo: ");
    scanf("%d", &n);

    if (is_aks_prime(n))
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}
