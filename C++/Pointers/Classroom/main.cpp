#include <iostream>
#include <cstring>
#include "gradebook.h"

int main(void)
{
  Classroom cs199;
  cs199.add_student();
  cs199.add_student();
  cs199.grade_student("Jeff");
  cs199.grade_student("Alice");
  cs199.calculate_final_grades();
  cs199.display_all();
  
  return 0;
}
