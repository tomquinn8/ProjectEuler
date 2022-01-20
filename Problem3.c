#include <stdio.h>
#include <stdint.h>

int main() {
    uint64_t input = 600851475143;
    uint64_t max_factor = 0;
    uint64_t divisor = 2;
    while (input > 1) {
        while (input % divisor == 0) {
            if (divisor > max_factor) { max_factor = divisor; }
            input /= divisor;
        }
        divisor++;
    }
    printf("%d\n", max_factor);
    return 0;
}
