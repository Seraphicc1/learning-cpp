#include <iostream>

class animal
{
    public:
        bool dangerous = true;

        void eat()
        {
            std::cout << "This animal is eating!\n";
        }
};

class lion : public animal
{
    public:
        void roar()
        {
            std::cout << "This animal is roaring!\n";
        }
};

class dog : public animal
{
    public:
        void bark()
        {
            std::cout << "This animal is barking!\n";
        }
};

class puppy : public dog
{
    public:
        void cry()
        {
            std::cout << "This puppy is crying!\n";
        }
};

class shape
{
    public:
        double area;
        double volume;
};

class cube : public shape
{
    public:
        double side;
    cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

int main()
{
    lion lion1;
    dog dog1;
    puppy puppy1;
    cube cube1(5);

    // lion inherits from animal and can only eat and roar
    lion1.eat();
    lion1.roar();
    // dog inheritcs from animal and can only eat and bark
    dog1.eat();
    dog1.bark();
    // puppy inherits from dog and can only eat, bark and cry
    puppy1.eat();
    puppy1.bark();
    puppy1.cry();

    std::cout << "The area is: " << cube1.area << "cm2\n";
    std::cout << "The volume is: " << cube1.volume << "cm3\n";

    return 0;
}