#include <stdio.h>

int main (void) {
    int height  = get_int("height: ");

    draw(height);

}

void draw (int n) {
    for ( int i = 1; i <= n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}