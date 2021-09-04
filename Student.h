#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <string>
#include <string.h>
using namespace std;

class CStudent
{
protected:             //protected data members for the Inheritance class
    char student_Fname[10];
    char student_Lname[10];
    int student_ID;
    char student_email_username[10];
    char student_major[10];
    float student_grades[5];
    float student_score;
    char student_email_password[10];

public:
    void registerStudent(CStudent *x,int i);
    void getStudentInfo (CStudent *x,int stu_num);
    float calculateGPA(float grade_1,float grade_2,float grade_3,float grade_4,float grade_5);
    void setFName(char Fname[10]);
    char getFName();
    void setLName(char Lname[10]);
    char getLName();
    void setID(int id);
    int getID();
    void setEmail_username(char email_username[10]);
    char getEmail_username();
    void setMajor(char major[10]);
    char getMajor();
    void setGrades_1(float grade_1);
    float getGrades_1();
    void setGrades_2(float grade_2);
    float getGrades_2();
    void setGrades_3(float grade_3);
    float getGrades_3();
    void setGrades_4(float grade_4);
    float getGrades_4();
    void setGrades_5(float grade_5);
    float getGrades_5();
    void setScore(float score);
    float getScore();
    void setEmail_password(char email_password[10]);
    char getEmail_password();
    CStudent();                       //Constructor and destructor
    ~CStudent();

};

class CCourse                       //class Courses
{
private:
    char course_name[20];
    char course_code[5];
    float course_cost[5];
public:
    void setcourse_name(char cname[20]);
    void setcourse_code(char ccode[5]);
    void setcourse_cost(float ccost[5]);
    ~CCourse();
    char* getcourse_name();
    char* getcourse_code();
    float* getcourse_cost();
    void AddCourse();
    void getCourseInfo();
};


class CPG_Student : public CStudent            //BONUS Inheritance class from CStudents class
{

private:

	//New data member "Job Title"
	string pg_student_job_title[20];

public:

	//Setter and Getter for job title
	void setJobTitle(string job_title[20]);
  string getJobTitle();
  void registerStudent(CStudent *x,int i);
  void getStudentInfo(CStudent *x,int stu_num);

};

#endif
