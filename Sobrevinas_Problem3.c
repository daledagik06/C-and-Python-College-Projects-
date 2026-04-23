#include <stdio.h>
#include <time.h>

// delay (optional, safe for phone)
void delay(int ms) {
    clock_t start = clock();
    while (clock() < start + ms * (CLOCKS_PER_SEC / 1000));
}

void problem3() {

    int array[5][6];
    int r, c;

    int padding = 10; // adjust this to move left/right

    // Fill array (multiplication table style)
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 6; c++) {
            array[r][c] = (r + 1) * (c + 1);
        }
    }

    printf("\n\n");

    // ===== COLUMN LABELS =====
    for (int i = 0; i < padding; i++) printf(" ");
    printf("        ");

    for (c = 0; c < 6; c++) {
        printf("[Col %d] ", c);
    }
    printf("\n");

    // ===== ROWS + VALUES =====
    for (r = 0; r < 5; r++) {

        for (int i = 0; i < padding; i++) printf(" ");

        printf("Row[%d]  ", r);

        for (c = 0; c < 6; c++) {
            printf("%6d ", array[r][c]); // aligned spacing
        }

        printf("\n");
    }

    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

int main() {
    problem3();
    return 0;
}