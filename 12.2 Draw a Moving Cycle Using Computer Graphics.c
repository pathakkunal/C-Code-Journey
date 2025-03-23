#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>  // For delay()

// Function to draw the cycle
void drawCycle(int x, int y) {
    // Draw the cycle body (two wheels and a frame)
    setcolor(WHITE);
    
    // Draw two wheels (using circles)
    circle(x - 30, y + 30, 20); // Left wheel
    circle(x + 30, y + 30, 20); // Right wheel
    
    // Draw the cycle frame (lines connecting wheels)
    line(x - 30, y + 30, x + 30, y + 30); // Horizontal line connecting wheels
    line(x - 30, y + 30, x, y);           // Left frame line
    line(x + 30, y + 30, x, y);           // Right frame line
    line(x, y, x, y - 40);                // Vertical frame line (seat bar)
    
    // Draw the handlebars
    line(x, y - 40, x - 20, y - 60);      // Handlebar left
    line(x, y - 40, x + 20, y - 60);      // Handlebar right
}

int main() {
    int gd = DETECT, gm;
    int x = 100, y = 200;  // Starting position for the cycle

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    while (!kbhit()) {
        // Clear the previous cycle drawing
        cleardevice();
        
        // Draw the cycle at new position (x, y)
        drawCycle(x, y);
        
        // Move the cycle to the right
        x += 5;
        
        // Delay to create the moving effect
        delay(50);
        
        // Reset the position if the cycle moves off the screen
        if (x > getmaxx()) {
            x = 0;
        }
    }

    // Close the graphics mode
    closegraph();

    return 0;
}
