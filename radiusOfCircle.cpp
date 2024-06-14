// This has private member variables for radius. 
// Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath>

const double PI = 3.14159;

class Circle
{
    private:
        double radius;
    
    public:
        Circle(double rad): radius(rad){}

    double calculateArea()
    {
        return PI * pow(radius, 2);
    }

    double calculateCircumference()
    {
        return 2 * PI * radius;
    }

};

int main()
{
    double radius;
    std::cout << "Input the radius of the circle: ";
    std::cin >> radius;
    
    Circle circle(radius);

    double area = circle.calculateArea();
    std::cout << "Area: " << area << std::endl;
    double circumference = circle.calculateCircumference();
    std::cout << "Circumference: " << circumference << std::endl;

    return 0;
}
