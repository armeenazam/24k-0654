

#include <stdio.h>

int main() {
    char grid[5][105] = {};  
    int i = 4, j = 0, up = 1, spaces = 1, count = 0;

    // Main loop that keeps drawing zigzags until count reaches 3
    while (count < 3) {
        // Mark the current position with '*'
        grid[i][j] = '*';

        // Move up or down based on the direction
        if (up) {
            i--;         // Move up
            j += spaces; // Move right by spaces
            spaces++;    // Increase the spaces for next move
        } else {
            i++;         // Move down
            j += spaces; // Move right by spaces
            spaces--;    // Decrease the spaces for next move
        }

        // Check if we have reached the top row
        while (i == 0 && up) {
            up = 0;       // Change direction to down
            spaces--;     // Adjust spaces
            break;        // Exit the loop
        }

        // Check if we have reached the bottom row
        while (i == 4 && !up) {
            up = 1;       // Change direction to up
            spaces = 1;   // Reset spaces
            count++;      // Increase the count of zigzags completed
            grid[i][j] = '*'; // Mark position with '*'
            j += 2;       // Move right to start the next zigzag
            if (count < 3) grid[i][j] = '*'; // Mark start of new zigzag
            break;        // Exit the loop
        }
    }

    
    i = 0;
    while (i < 5) {
        j = 0;
        while (j < 105) {
            printf("%c", grid[i][j] ? '*' : ' ');
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}


