#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j) {
                continue; 
            }

            if ((i + j) % 2 == 0) {
                printf("Pair: (%d, %d)\n", i, j);
            } else {
                continue;
            }

            if (i * j > 12) {
                printf("Stopping inner loop at: (%d, %d)\n", i, j);
                break; 
            }
        }

        if (i == 4) {
            printf("Stopping outer loop at i = %d\n", i);
            break; 
        }
    }

    printf("Program finished.\n");
    return 0;
}
