#include <iostream>
using namespace std;

class circle
{
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    double areaCircle()
    {
        return 3.14 * radius * radius;
    }

    double areaCircumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{

    circle c1;
    double radius;

    cout << "Enter The Radius Of Circle: ";
    cin >> radius;

    c1.setRadius(radius);
    cout << "Radius of a Circle: " << c1.getRadius() << endl;
    cout << "Area of a Circle: " << c1.areaCircle() << endl;
    cout << "Circumference of a Circle: " << c1.areaCircumference() << endl;

    return 0;
}