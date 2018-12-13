//
//  main.cpp
//  MidtermPrep
//
//  Created by Dejan Misic on 12/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include <iostream>
using namespace std;


class Student{
public:
    int id;
    char gender;
    int yearOfBirth;
    int *grades = 0;
};


int main(int argc, const char * argv[]) {
    int *gradez;
    char proceed;
    int grades;
    int broj;
    int studentId;
    int gradeNumber;
    int grade;
    cout << "Enter number of students: " << endl;
    cin >> broj;
    Student *studentArray = 0;
    studentArray = new Student[broj];
    /*
     Part 1
     */
    for (int i =0; i<broj; i++) {
        cout << "Enter data about student " << i+1 << ":" << endl;
        cout << "Enter the id for student " << i+1 << ":" << endl;
        cin >> (studentArray+i)->id;
        cout << "Enter the gender for student number " << i+1 << ":" << endl;
        cin >> (studentArray+i)->gender;
        cout << "Enter the year of birth for student number " << i+1 << ":" << endl;
        cin >> (studentArray+i)->yearOfBirth;
    }
    /*
     Part 2
     */

    
    do{
        cout << "Enter existing student id in order to enter grades for that student: " << endl;
        cout << "Enter 0 to skip this step and print student data or to quit program" << endl;
        cin >> studentId;
        if (studentId != 0) {
        for (int j=0; j<broj; j++) {
            if (studentId != j && studentId == (studentArray+j)->id) {
                cout << "Enter number of grades for the student: " << endl;
                cin >> gradeNumber;
                gradez = (studentArray+j)->grades;
                gradez = new int[gradeNumber];
                for (int g=0; g<gradeNumber; g++) {
                    cout << "Enter grade " << g+1 << ":" << endl;
                    cout << "Grades are: --> 5,6,7,8,9,10 <--" << endl;
                    cin >> grade;
                    gradez[g] = grade;
                }
                (studentArray+j)->grades = gradez;
            }
        }
        }
        else{
            return 0;
        }
        cout << "To enter grades for another student with existing id please type 'y'" << endl;
        cout << "Note: yes has to be case-sensitive, any other input will stop the program" << endl;
        cin.clear();
        cin >> proceed;
    }
    while (proceed == 'y');
    
    /*
     Part 3
     */
    //Outputing Students information
    for(int i=0; i<broj; i++){
        cout << "Student number " << i+1 << " has id: " << (studentArray+i)->id << endl;
        cout << "Student number " << i+1 << " has gender: " << (studentArray+i)->gender << endl;
        cout << "Student number " << i+1 << " has year of birth: " << (studentArray+i)->yearOfBirth << endl;
        cout << "Grades for student with id " << (studentArray+i)->id << "are:" <<endl;
        grades = sizeof((studentArray+i)->grades);
        for (int g=0; g<grades; g++) {
            
            cout << " " << (studentArray+i)->grades[g] << ",";
        }
        cout << endl;
    }
    
    //Delete pointer to an array its a good practice
    delete []studentArray;
    return 0;
    }

