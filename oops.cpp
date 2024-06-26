#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Parameterized
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    Teacher(Teacher &orgObj)
    {
        cout << "I am custom copy constructor...." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
    // properties / attribbutes
    string name;
    string dept;
    string subject;

    // method / member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

class account
{
private:
    string password;
    double salary;

public:
    string accountId;
    string username;
};


int main()
{
    Teacher t1("AsadUllah", "Computer Science", "C++", 75000);

    Teacher t2(t1);
    // t1.getInfo();
    t2.getInfo();
    return 0;
}
