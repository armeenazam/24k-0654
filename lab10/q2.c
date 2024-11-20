#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateDistance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int isPointWithinBoundary(Point p, double xMin, double xMax, double yMin, double yMax) {
    return (p.x >= xMin && p.x <= xMax && p.y >= yMin && p.y <= yMax);
}

int main() {
    Point p1, p2;
    double xMin, xMax, yMin, yMax;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    double distance = calculateDistance(p1, p2);
    printf("Distance between the two points: %.2f\n", distance);

    printf("Enter the boundaries of the rectangle (xMin xMax yMin yMax): ");
    scanf("%lf %lf %lf %lf", &xMin, &xMax, &yMin, &yMax);

    if (isPointWithinBoundary(p1, xMin, xMax, yMin, yMax)) {
        printf("Point 1 lies within the rectangle.\n");
    } else {
        printf("Point 1 does not lie within the rectangle.\n");
    }

    if (isPointWithinBoundary(p2, xMin, xMax, yMin, yMax)) {
        printf("Point 2 lies within the rectangle.\n");
    } else {
        printf("Point 2 does not lie within the rectangle.\n");
    }

    return 0;
}
