#include<stdio.h>
int main() { 
    int rows = 9;

    for(int row_plus = 1; row_plus <= rows; row_plus++) {

        // Print leading spaces
        for(int ind = 1; ind < row_plus; ind++) { 
            printf(" ");
        }

        // Print the 🍧 symbols for the inverted pyramid
        for(int cone = 1; cone <= 2 * (rows - row_plus) + 1; cone++) { 
            printf("🍧");
        }

        printf("\n");
    }

    return 0;
}
