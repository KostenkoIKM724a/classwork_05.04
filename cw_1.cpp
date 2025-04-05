#include <iostream>
using namespace std;

const int STUDENT_NUMBER = 3;


struct Student {
    string name;
    int age;
    double averageMark;
};

struct Group {
    string name;
    Student students[STUDENT_NUMBER];
};
int main()
{
    Group IKM724;
    cout << "Enter Group name: ";
    cin >> IKM724.name;

    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        cout << "Please enter student's name: ";
        cin >> IKM724.students[i].name;
        cout << "Please enter student's age: ";
        cin >> IKM724.students[i].age;
        cout << "Please enter student's average mark: ";
        cin >> IKM724.students[i].averageMark;
        cout << endl;
    }

    cout << "The list of all the students: "<<endl;
    for (int i = 0; i < STUDENT_NUMBER; i++)
    {
        cout << IKM724.students[i].name << " is "  << IKM724.students[i].age<< ". The average mark is: " << IKM724.students[i].averageMark << endl;
    }
}
