#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//MainClasses----------------------------------------------
class Department
{
    public:

    private:
        string DepartmentName;
}
class Course
{
    public:

    private:
        string CourseName;
        int CourseID;
        vector<Course*> courses;
}
//People---------------------------------------------------
class Person
{
    public:
        string name;
        int age;
    private:
        void DisplayInfo()
        {
            cout << name << 
        }
}
class Professor : public Person
{
    public:
        string name;
        int age;
    private:
        int ProfessorID;
        vector<Course*> TeachCourses;

}
class Student : public Person
{
    public:
        string name;
        int age;
    private:
        int StudentID;
        vector<Course*> LearnCourses;
}

int main()
{

}

