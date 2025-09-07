#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int clss;
    string school;

    Student()
    {
        cout << "Student constructor is called!!" << endl;
    }

    Student(string name, int clss, string school)
    {
        this->name = name;
        this->clss = clss;
        this->school = school;
    }
    ~Student()
    {
        cout << "Student destructor is called!!" << endl;
    }
};

class Exam : public Student
{
public:
    Exam()
    {
        cout << "Exam constructor is called!!" << endl;
    }

    ~Exam()
    {
        cout << "Exam destructor is called!!" << endl;
    }
};

int main()
{
    Exam e1;
}
