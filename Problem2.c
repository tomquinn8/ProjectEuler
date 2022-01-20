#include <stdio.h>

int main() {
    int sum = 2;
    int x = 1;
    int y = 2;
    while (y < 4000000) {
        int z = x + y;
        if (z % 2 == 0) { sum += z; }
        x = y;
        y = z;
    }
    printf("%d\n", sum);
    return 0;
}
