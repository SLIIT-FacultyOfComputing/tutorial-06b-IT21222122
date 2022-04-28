#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
Student::assignDetails(int Sid, char Sname[]) {
  studentId = Sid;
  name[20] = Sname;
}

// Display StudentId and Name
Student::display() {
  cout << studentId << endl << name[20] << endl;
}
