#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

    int *p = &grid[0][0];
    printf("Access using pointer to first element (linear):\n");
    for(int i = 0; i < 12; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n\n");

    int *q = &grid[1][0];
    printf("Access using pointer to second row (positive indexing):\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");

    printf("Access using pointer to second row (negative indexing):\n");
    for(int i = -1; i >= -4; i--) {
        printf("%d ", q[i]);
    }
    printf("\n\n");

    printf("Numbers divisible by 3:\n");
    for(int i = 0; i < 12; i++) {
        if (*(p + i) % 3 == 0)
            printf("%d ", *(p + i));
    }
    printf("\n\n");

    
    int last = *(*(grid + 2) + 3); 
    printf("Last element accessed differently: %d\n", last);

    return 0;
}

