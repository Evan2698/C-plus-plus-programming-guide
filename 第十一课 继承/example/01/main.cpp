#include <iostream>
#include <cmath>
#include <vector>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a Shape" << std::endl;        
    }
    virtual double area() {

        std::cout << "Calculating area of a Shape" << std::endl;
        return 0.0;
    }

    virtual void move() {
        std::cout << "Moving a Shape" << std::endl;
        hello2();
    }   

    virtual ~Shape() {} // Virtual destructor

    void hello(){}

    private:
        void hello2(){}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    virtual void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }
    double area() override {
        return M_PI * radius * radius;
    }

    void move() override {
        std::cout << "Moving a Circle" << std::endl;      
    }   
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
   virtual void draw()  override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }
    double area() override {
        return width * height;
    }
};

int main() {

    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    Circle c(6.0);
    c.hello();
    Shape a(c);
    a.move();

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
        std::cout << "Area: " << shapes[i]->area() << std::endl;
        
    }

    
    for (int i = 0; i < 2; ++i) {
    delete shapes[i];
    }


    return 0;
}