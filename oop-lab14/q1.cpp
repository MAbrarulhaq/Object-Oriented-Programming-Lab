#include<iostream>

using namespace std;

// Abstract class Shapes
class Shapes
{
    public:
    virtual float area() = 0;
};

// Abstract class 2D-Shapes
class TwoDShapes : public Shapes
{
public:
    virtual float area() = 0;
};

// Abstract class 3D-Shapes
class ThreeDShapes : public Shapes
{
public:
    virtual float area() = 0;
    virtual float volume() = 0;
};

// class Circle
class Circle : public TwoDShapes
{
    float radius;
public:
    Circle(){
        cout<<"constructor is called:"<<endl;
    }
    Circle(float r)
    {
        radius = r;
    }

    virtual float area()
    {
        return 3.14*radius*radius;
    }
    ~Circle(){
        cout<<"destructor:"<<endl;

    }
};

// class Square
class Square : public TwoDShapes
{
    float side;
public:
    Square(){
        cout<<"constructor is called:"<<endl;
    }

    Square(float s)
    {
        side = s;
    }

    virtual float area()
    {
        return side*side;
    }
    ~Square(){
        cout<<"destructor:"<<endl;

    }
};

// class Cube
class Cube : public ThreeDShapes
{
    float length, breadth, height;
public:
    Cube(){
        cout<<"constructor is called:"<<endl;
    }

    Cube(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    virtual float area()
    {
        return 2*(length*breadth + breadth*height + length*height);
    }

    virtual float volume()
    {
        return length*breadth*height;
    }
    ~Cube(){
        cout<<"destructor:"<<endl;

    }
};

// class Pyramid
class Pyramid : public ThreeDShapes
{
    float base, height;
public:
    Pyramid(){
        cout<<"constructor is called:"<<endl;
    }

    Pyramid(float b, float h)
    {
        base = b;
        height = h;
    }

    virtual float area()
    {
        return (base*base + 2*base*(base*base + height*height));
    }

    virtual float volume()
    {
        return (base*base*height/3);
    }
    ~Pyramid(){
        cout<<"destructor:"<<endl;

    }
};

int main()
{
    // array of pointer to 2D shapes
    TwoDShapes *ptr[2];
    ptr[0] = new Circle(2.0);
    ptr[1] = new Square(4.0);

    // array of pointer to 3D shapes
    ThreeDShapes *ptr3[2];
    ptr3[0] = new Cube(2.0, 3.0, 4.0);
    ptr3[1] = new Pyramid(3.0, 4.0);

    for(int i=0; i<2; i++)
    {
        cout<<"Area of 2D Shape: "<<ptr[i]->area()<<endl;
        cout<<"Area of 3D Shape: "<<ptr3[i]->area()<<endl;
        cout<<"Volume of 3D Shape: "<<ptr3[i]->volume()<<endl;
    }

    return 0;
}