#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;
    string dept;
    string email;

    Student(int id, string name, int age, string dept, string email)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->dept = dept;
        this->email = email;
    }

    string getDept()
    {
        return this->dept;
    }

    ~Student()
    {
        cout << "Destructor is called!!";
    }
};

int main()
{
    Student s1(1, "Aditya Singh", 20, "CSE", "anshumansingh@gmail.com");
    cout << s1.name << " " << s1.getDept();
}