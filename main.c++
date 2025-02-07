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
            cout << name << " " << age << endl;
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

        void assignCourses(Course* courses)
        {
            cout << "Which course would you like to assign?" << endl;
            for (int i = 0; i < sizeof(courses); i++)
            {
                cout << i+1 << ": --- "<< courses[i] << ". \n" << endl; 
            }
            int TempCourseNum;
            cin >> TempCourseNum;
            TeachCourses.push_back (courses[TempCourseNum]);
        }
        void displayAssignedCourses()
        {
            cout << "Assign courses:" << endl;
            for (int i = 0; i < sizeof(TeachCourses); i++)
            {
                cout << i+1 << ": ---"<< TeachCourses[i] << ". \n" << endl; 
            }
        }

}
class Student : public Person
{
    public:
        string name;
        int age;
    private:
        int StudentID;
        vector<Course*> LearnCourses;

        void enrollCourse(Course* courses)
        {
            cout << "Which course would you like to add?" << endl;
            for (int i = 0; i < sizeof(courses); i++)
            {
                cout << i+1 << ": --- "<< courses[i] << ". \n" << endl; 
            }
            int TempCourseNum;
            cin >> TempCourseNum;
            LearnCourses.push_back (courses[TempCourseNum]);
        }
        void displayCourses()
        {
            cout << "Courses:" << endl;
            for (int i = 0; i < sizeof(LearnCourses); i++)
            {
                cout << i+1 << ": ---"<< LearnCourses[i] << ". \n" << endl; 
            }
        }
};

int main()
{

}

