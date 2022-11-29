// Assume two arrays, one of student reords and the other of employee records. Each student record contains members for a last name,  a first name, and a grade point index. Each employee record contains members for a last name, a first name, and a salary. Both arrays are ordered in alphabetical order by last name and first name. Two records with the same last name/first name do not appear in the same array. Write a function to give a 10 percent raise to every employee who has a student record and whose grade point index is greater than 3.0.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<string>> students;
    vector<vector<string>> employee;
    students[0].push_back("Abhishek");
    students[0].push_back("Verma");
    students[0].push_back("9");
    students[1].push_back("Kritika");
    students[1].push_back("Sharma");
    students[1].push_back("2");
    // employee starts
    employee[0].push_back("Aditya");
    employee[0].push_back("Tyagi");
    employee[0].push_back("15000");
    employee[1].push_back("Abhishek");
    employee[1].push_back("Verma");
    employee[1].push_back("20000");

    for(int i=0;i<students.size();i++){
        for(int j=0;j<employee.size();j++){
            if(students[i][j]==employee[0][j]){

            }
        }
    }
    return 0;
}
