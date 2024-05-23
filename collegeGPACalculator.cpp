/*
1. CGPA Calculator

-A student’s cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator. 
-The user’s input is used to compute the CGPA, which includes information like the number of courses taken and the grades earned in each one. 
-The program also shows each student’s overall course grade. 
-CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results. 
-The program can show the individual grades of each course, calculate total credits and total grade points achieved, 
determine the GPA for the semester, and based on all the data, it can generate and present the CGPA of the student. 

Technologies Required: C++ programming language, Data Structures, Basic Searching & Sorting algorithms, 
Basic Arithmetic Operations and formulas, and File Handling ( I/O Streams ).

*/



#include <iostream> 
#include <string>
using namespace std; 



void calculateCollegeGPA(string classGrades[], int numOfCourses, int courseCredits[])
{
   

    double courseGPA[numOfCourses];
    for(int j=0; j<numOfCourses; j++)
    {
        if(classGrades[j]=="A+")
        {
            courseGPA[j] = 4.0 * courseCredits[j];
        }
        if(classGrades[j]=="A")
        {
            courseGPA[j] = 4.0 * courseCredits[j];
        }
        if(classGrades[j]=="A-")
        {
            courseGPA[j] = 3.7 * courseCredits[j];
        }
        if(classGrades[j]=="B+")
        {
            courseGPA[j] = 3.3 * courseCredits[j];
        }
        if(classGrades[j]=="B")
        {
            courseGPA[j] = 3.0 * courseCredits[j];
        }
        if(classGrades[j]=="B-")
        {
            courseGPA[j] = 2.7 * courseCredits[j];
        }
        if(classGrades[j]=="C+")
        {
            courseGPA[j] = 2.3 * courseCredits[j];
        }
        if(classGrades[j]=="C")
        {
            courseGPA[j] = 2.0 * courseCredits[j];
        }
        if(classGrades[j]=="C-")
        {
            courseGPA[j] = 1.7 * courseCredits[j];
        }
        if(classGrades[j]=="D+")
        {
            courseGPA[j] = 1.3 * courseCredits[j];
        }
        if(classGrades[j]=="D")
        {
            courseGPA[j] = 1.0 * courseCredits[j];
        }
        if(classGrades[j]=="D-")
        {
            courseGPA[j] = 0.7 * courseCredits[j];
        }
        if(classGrades[j]=="F")
        {
            courseGPA[j] = 0.0 * courseCredits[j];
        }
    }

    double GPA_sum=0;
    double totalCredits=0;
    double gpa;
    for(int i=0; i<numOfCourses; i++)
    {
        //cout << "Course GPA: " << courseGPA[i] << endl;
       GPA_sum = GPA_sum+courseGPA[i];
       totalCredits = totalCredits+courseCredits[i];
    }

    gpa = GPA_sum/totalCredits;
    cout << "Your GPA: " << gpa << endl;

}

int main()
{
    
    int i=0, j=0, numCourses;
    cout << "Enter the number of courses taken: " << endl;
    cin >> numCourses; 
    string classGrades[numCourses];
    int courseCredits[numCourses];
    do
    {
      cout << "Enter grade: " << endl;  
      cin >> classGrades[i];
      cout << "Enter course credits: " << endl;
      cin >> courseCredits[j];
      i++; 
      j++;

    } while (i&&j<numCourses);
    

   
    calculateCollegeGPA(classGrades, numCourses, courseCredits);
    



    return 0;
}
