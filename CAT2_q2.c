#include <stdio.h>

int main() {
    //Declaration and initialization
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // Print the elements using a nested loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Newline for each row
    }

    return 0;
}
