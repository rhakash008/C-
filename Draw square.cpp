#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
    // Initialize a graphics window with a larger size, e.g., 400x400 pixels
    initwindow(400, 400);

    // Draw a square with top-left corner at (40, 50) and side length 10 pixels
    rectangle(50,50,150,150);  // (x1, y1) for top-left, (x2, y2) for bottom-right

    // Wait for a key press
    getch();
    
}
