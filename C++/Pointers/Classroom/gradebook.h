const int SIZE = 100;

struct student {
  char *name;
  double grade;
  char final_grade;
};

class Classroom
{
  public:
    Classroom();
    void add_student(void);
    void display_all(void);
    void grade_student(const char*);
    void calculate_final_grades();
  private:
    student students[SIZE];
    int n_students;
};

void display_student(student&);
