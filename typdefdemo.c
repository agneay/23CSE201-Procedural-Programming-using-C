// program to demonstrate typedef usage in C
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
} Point;
typedef struct {
    Point start;
    Point end;
} Line;
typedef struct {
    Line line;
    int color; // 0 for black, 1 for red, etc.
} ColoredLine;

int main(){
    Point p1 = {0, 0};
    Point p2 = {10, 10};
    
    Line line = {p1, p2};
    
    ColoredLine coloredLine = {line, 1}; // 1 for red
    
    printf("Line starts at (%d, %d) and ends at (%d, %d) with color %d\n",
           coloredLine.line.start.x,
           coloredLine.line.start.y,
           coloredLine.line.end.x,
           coloredLine.line.end.y,
           coloredLine.color);
    
    return 0;
}