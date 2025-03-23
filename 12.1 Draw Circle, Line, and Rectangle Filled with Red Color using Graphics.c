#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color to red (color code 4 in graphics.h)
    setfillstyle(SOLID_FILL, RED);

    // Draw and fill a circle at (200, 200) with radius 50
    circle(200, 200, 50);
    floodfill(200, 200, RED); // Fill the circle with red

    // Draw and fill a rectangle with top-left corner (100, 100) and bottom-right corner (300, 200)
    rectangle(100, 100, 300, 200);
    floodfill(150, 150, RED); // Fill the rectangle with red

    // Draw a line from (50, 50) to (400, 50)
    line(50, 50, 400, 50);

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
