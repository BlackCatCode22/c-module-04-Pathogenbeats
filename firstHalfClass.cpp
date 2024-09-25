// Andrew Powell 9/25/2024
// firstHalfClass.cpp

#include <iostream>
#include <list>

using namespace std;

class Animal
{
    public:
    string Name;
    int Age;
    string Birthday;
    string Color;
    string Sex;
    int Weight;
    string Origin;
    string Arrival;
};

int main() {

    cout << "Hello, World!" << endl;

    // Create a new animal object
    // New keyword allocates memory on the heap and returns the address of the object
    Animal* myAnimal = new Animal;

    // Create another animal project without using a pointer and new

    myAnimal->Name = "Bob";
    myAnimal->Age = 10;
    myAnimal->Birthday = "2021";
    myAnimal->Color = "Red";
    myAnimal->Sex = "Male";
    myAnimal->Weight = 100;
    myAnimal->Origin = "The Other Zoo";
    myAnimal->Arrival = "2022";

    Animal anotherAnimal;

    anotherAnimal.Name = "Barry";
    anotherAnimal.Age = 20;
    anotherAnimal.Birthday = "2021";
    anotherAnimal.Color = "Red";

    cout << "This is my Animal Object" << "\n" "Name: " << myAnimal->Name << " age: " << myAnimal->Age << " Birthday: " << myAnimal->Birthday << " Color: " << myAnimal->Color << " Sex: " << myAnimal->Sex << " Weight: " << myAnimal->Weight << " Origin: " << myAnimal->Origin << " " << myAnimal->Arrival << endl;
    cout << "\nThis is Another Animal Object" << "\nName: " << anotherAnimal.Name << " Age: " << anotherAnimal.Age << " Birthday: " << anotherAnimal.Birthday << " Color: " << anotherAnimal.Color;

    return 0;
}
