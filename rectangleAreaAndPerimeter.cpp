#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    private:
        double length;
        double width;

    public: 
        Rectangle(double len, double wid): length(len), width(wid) {}

    double calculateArea()
    {
        return length * width;
    }
    double calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    double length, width;
    
    std::cout << "Enter length: " << std::endl;
    std::cin >> length;
    std::cout << "Enter width: " << std::endl;
    std::cin >> width;

    Rectangle rectangle(length, width);

    double area = rectangle.calculateArea();
    std::cout << "\n Area: " << area << std::endl;

    double perimeter = rectangle.calculatePerimeter();
    std::cout << "\n Perimeter: " << perimeter << std::endl;

    return 0;
}