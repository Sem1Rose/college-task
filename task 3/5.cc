#include <iostream>

using namespace std;
int main() {
  struct Student {
    int id;
    string name;
    float gpa;
  } S1, S2, S3;

  cout << "firt student's id: ";
  cin >> S1.id;
  cout << "firt student's name: ";
  cin >> S1.name;
  cout << "firt student's gpa: ";
  cin >> S1.gpa;

  cout << "second student's id: ";
  cin >> S2.id;
  cout << "second student's name: ";
  cin >> S2.name;
  cout << "second student's gpa: ";
  cin >> S2.gpa;

  cout << "third student's id: ";
  cin >> S3.id;
  cout << "third student's name: ";
  cin >> S3.name;
  cout << "third student's gpa: ";
  cin >> S3.gpa;

  string highest_gpa_name = S1.name;
  float highest_gpa = S1.gpa;
  if (S2.gpa > highest_gpa) {
    highest_gpa = S2.gpa;
    highest_gpa_name = S2.name;
  }
  if (S3.gpa > highest_gpa) {
    highest_gpa = S3.gpa;
    highest_gpa_name = S3.name;
  }

  cout << endl;
  cout << "Highest GPA = " << highest_gpa
       << ", with student: " << highest_gpa_name << endl;

  return 0;
}