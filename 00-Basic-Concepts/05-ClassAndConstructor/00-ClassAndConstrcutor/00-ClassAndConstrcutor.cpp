#include<iostream>

using namespace std;

class Rectangle 
{
    private:
        int length;
        int breadth;
    public:
        /* CONSTRUCTORS */
        //Default Contructor
        Rectangle()
        {
            length = 1;
            breadth = 1;
        }
        // Parameterized Contructor
        Rectangle(int l, int b);    // This will be defined outside the class usig scope resolution (::) operator
        /* FACILITATORS */
        int area();
        int perimeter();

        /* ACCESSORS */
        int getLength()
        {
            return length;
        }

        /* MUTATORS */
        void setLength(int l)
        {
            length = l;
        }
        
        /* DESTRUCTOR */
        ~Rectangle();
};

//Parameterized Contructor Definition
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

//area function definition
int Rectangle::area()
{
    return length * breadth;
}

//perimeter function Definition
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

//Destructor Definition
Rectangle::~Rectangle()
{
    //Cleanup Code
}

int main()
{
    //Code
    Rectangle r(10, 5);

    std::cout<<r.area<<std::endl;
    std::cout<<r.perimeter<<std::endl;

    r.setLength(12);
    std::cout<<r.getLength()<<std::endl;

    return 0;
}