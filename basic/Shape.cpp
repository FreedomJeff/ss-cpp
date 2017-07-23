#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double Area() = 0;
    virtual void Print() = 0;
};

class Circle : public virtual Shape
{
private:
    double Radias;
    static const double PI = 3.1415;
public:
    Circle(double inputRadias):Radias(inputRadias)
    {
        cout<<"Circle constructor."<<endl;
    }
    double Area()
    {
        return PI * Radias * Radias; 
    }
    void Print()
    {
        cout<<"circle print."<<endl; 
    }
};

class Triangle : public virtual Shape
{
private:
    double Base;
    double Height;
public:
    Triangle(double inputBase, double inputHeight):
        Base(inputBase), Height(inputHeight)
    {
        cout<<"Triangle constructor."<<endl;
    }
    double Area()
    {
        return Base * Height / 2; 
    }
    void Print()
    {
        cout<<"Triangle print."<<endl; 
    }
};

int main()
{
    //test Circle
    Circle myCircle(3.0);
    cout<<"circle area:"<<myCircle.Area()<<endl;
    myCircle.Print();

    //test Trianlge
    Triangle myTriangle(2.0, 3.0);
    cout<<"Triangle area:"<<myTriangle.Area()<<endl;
    myTriangle.Print();

    return 0;
}
