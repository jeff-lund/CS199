#include <iostream>
#include <cstring>
using namespace std;

struct employee
{
    char * name;
    employee *reports[4];
};

void new_employee(const char*, employee&);
void set_report(employee*, const char*, const char*);
void print(employee*, int);
void setup_company(employee*);
void cleanup(employee&);

void print(employee * e, int tabcount)
{
    if(!e)
        return;

    for(int i = 0; i < tabcount; ++i)
      cout << '\t';

    cout << e->name << endl;

    for(int i = 0; i < 4; ++i)
        print(e->reports[i], tabcount + 1);
}

int main(void)
{
  employee boringCo[20];
  setup_company(boringCo);
  print(&boringCo[0], 0);

  cleanup(boringCo[0]);

  return 0;
}

// Recursive deallocation function
void cleanup(employee &e)
{
  for(int i = 0; i < 4; ++i)
  {
    if(e.reports[i])
      cleanup(*(e.reports[i]));
  }
  delete [] e.name;
}

// Setup functions

void setup_company(employee *boringCo)
{
    const char *emps[20] = {"Buck", "Sue", "Jim", "Sara", "Fred", "Tom", "Bob",
                   "Mary", "Adam", "Billy", "Todd", "Mark", "Sandy",
                   "George", "Marvin", "Karen"};

    for(int i = 0; i < 16; ++i)
    {
        new_employee(emps[i], boringCo[i]);
    }

    set_report(boringCo, "Buck", "Sue");
    set_report(boringCo, "Buck", "Jim");
    set_report(boringCo, "Buck", "Sara");
    set_report(boringCo, "Sue", "Fred");
    set_report(boringCo, "Sue", "Tom");
    set_report(boringCo, "Sue", "Bob");
    set_report(boringCo, "Tom", "Billy");
    set_report(boringCo, "Tom", "Todd");
    set_report(boringCo, "Tom", "Mark");
    set_report(boringCo, "Bob", "Sandy");
    set_report(boringCo, "Sandy", "George");
    set_report(boringCo, "Sandy", "Marvin");
    set_report(boringCo, "Sandy", "Karen");
    set_report(boringCo, "Jim", "Mary");
    set_report(boringCo, "Jim", "Adam");
}

void new_employee(const char *s, employee& e)
{
    e.name = new char[strlen(s) + 1];
    strcpy(e.name, s);
    for(int i = 0; i < 4; ++i)
    {
        e.reports[i] = NULL;
    }
}



void set_report(employee *emp_arr, const char *supervisor, const char* report)
{
    employee *manager = NULL, *reportee = NULL;
    for(int i = 0; i < 16; ++i)
    {
        if(strcmp(emp_arr[i].name, supervisor) == 0)
        {
            manager = &emp_arr[i];
        }
        else if(strcmp(emp_arr[i].name, report) == 0)
        {
            reportee = &emp_arr[i];
        }
    }
    if(!manager || !reportee)
    {
        cout << "Person not found" << endl;
        return;
    }
    for(int i = 0; i < 4; ++i)
    {
        if(manager->reports[i] == NULL)
        {
            manager->reports[i] = reportee;
            break;
        }
    }
}
