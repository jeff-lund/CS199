#include <iostream>
#include <cstring>
#include "gradebook.h"

using namespace std;

Classroom::Classroom()
{
  n_students = 0;
}


Classroom::~Classroom()
{
    for(int i = 0; i < n_students; ++i)
        delete [] students[i].name;
}
void Classroom::add_student(void)
{
    char buffer[500];
    student *s = &students[n_students];

    cout << "Enter the student's name: ";
    cin.get(buffer, 500, '\n');
    cin.ignore(100, '\n');
    s->name = new char[strlen(buffer) + 1];
    strcpy(s->name, buffer);

    s->grade = -1.0;
    s->final_grade = 'I';
    ++n_students;
}

void Classroom::display_all(void)
{
  for(int i = 0; i < n_students; ++i)
    display_student(students[i]);
}

void Classroom::grade_student(const char* name)
{
  double temp = -1.0;

  for(int i = 0; i < n_students && temp < 0; ++i)
  {
    if(strcmp(students[i].name, name) == 0)
    {
      do
      {
        cout << "Enter the grade for " << name << " (0-100): ";
        cin >> temp;
        cin.ignore(100, '\n');
      } while(temp < 0 || temp > 100);
      students[i].grade = temp;
    }
  }
}

void Classroom::calculate_final_grades()
{
  for(int i = 0; i < n_students; ++i)
  {
    if(students[i].grade > 0)
    {
      if(students[i].grade < 60)
        students[i].final_grade = 'F';
      else if(students[i].grade < 70)
        students[i].final_grade = 'D';
      else if(students[i].grade < 80)
        students[i].final_grade = 'C';
      else if(students[i].grade < 90)
        students[i].final_grade = 'B';
      else
        students[i].final_grade = 'A';
    }
  }
}

void display_student(student &s)
{
  cout << "Name: " << s.name << endl;
  cout << "Grade: " << s.grade << " | " << s.final_grade << endl;
}
