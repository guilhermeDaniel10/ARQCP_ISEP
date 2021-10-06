#ifndef main_h
#define main_h

typedef struct {
  char age;
  short number;
  int grades[10];
  char name[80];
  char adress[120];
} Student;

  void update_grades(Student* s, int* new_grades);
#endif
