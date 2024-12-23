#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius) {
    return M_PI * radius * radius;
}

double calculateArea(double length, double width) {
    return length * width;
}

double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle: " << calculateArea(5.0) << endl;
    cout << "Area of Rectangle: " << calculateArea(4.0, 6.0) << endl;
    cout << "Area of Triangle: " << calculateArea(3.0, 4.0) << endl;
    return 0;
}
