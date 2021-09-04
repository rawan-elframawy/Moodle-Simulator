#include <iostream>
#include "Student.h"
#include <string>
#include <string.h>

using namespace std;
//declarations
int i = 0;
int k = 0;
int len_fname;
int len_lname;
int len_user_name;
int len_major;
int len_password;

//Constructor

CStudent::CStudent()
{
    student_Fname[10] = NULL ;
    student_Lname[10] = NULL ;
    student_email_username[10] = NULL ;
    student_major[10] = NULL ;
    student_email_password[10] = NULL ;
    student_grades[5] = NULL;
	student_ID = 0;
	student_score = 0.0;
}
//destructor
CStudent::~CStudent()
{
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setFName(char Fname[15])
{
	strcpy(student_Fname,Fname);
}
char CStudent::getFName()
{

	return *(student_Fname+i);
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setLName(char Lname[15])
{
	strcpy(student_Lname,Lname);
}
char CStudent::getLName()
{

	return *(student_Lname+i);
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setID(int id)
{
	student_ID = id;
}
int CStudent::getID()
{
	return student_ID;
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setEmail_username(char email_username[10])
{
	strcpy(student_email_username,email_username);
}
char CStudent::getEmail_username()
{

	return *(student_email_username+i);
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setMajor(char major[10])
{
	strcpy(student_major,major);
}
char CStudent::getMajor()
{

	return *(student_major+i);
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setGrades_1(float grade_1)
{
    student_grades[0] = grade_1;
}
float CStudent::getGrades_1()
{
    return student_grades[0];
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setGrades_2(float grade_2)
{
    student_grades[1] = grade_2;
}
float CStudent::getGrades_2()
{
    return student_grades[1];
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setGrades_3(float grade_3)
{
    student_grades[2] = grade_3;
}
float CStudent::getGrades_3()
{
    return student_grades[2];
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setGrades_4(float grade_4)
{
    student_grades[3] = grade_4;
}
float CStudent::getGrades_4()
{
    return student_grades[3];
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setGrades_5(float grade_5)
{
    student_grades[4] = grade_5;
}
float CStudent::getGrades_5()
{
    return student_grades[4];
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setScore(float score)
{
	student_score = score;
}
float CStudent::getScore()
{
	return student_score;
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CStudent::setEmail_password(char email_password[10])
{
	strcpy(student_email_password ,email_password);
}
char CStudent::getEmail_password()
{

	return *(student_email_password+i);
}
//------------------------------------------------------------------------------------------------------------------------
//calculateGPA function defination
float CStudent :: calculateGPA(float grade_1,float grade_2,float grade_3,float grade_4,float grade_5){
    float total_gpa = (grade_1 + grade_2 + grade_3 + grade_4 + grade_5)/100;
    return total_gpa;
}
//------------------------------------------------------------------------------------------------------------------------
//function defination
void CStudent :: registerStudent(CStudent *x,int i){


    char student_Fname[15];
    char student_Lname[15];
    int student_ID;
    char student_email_username[10];
    char student_major[10];
    float student_grades[5];
    float student_score;
    char student_email_password[10];
    cout << "\n\n\n\nEnter Data of student " << i+1 << '\n';
    cout << '\n' << "Enter the First Name :            ";
    cin >> student_Fname;
    len_fname = strlen(student_Fname);
    fflush(stdin);
    x->setFName(student_Fname);                  //x pointer object to setter
    cout << '\n' << "Enter the Last Name :             ";
    cin >> student_Lname;
    len_lname = strlen(student_Lname);
    fflush(stdin);
    x->setLName(student_Lname);
    cout << '\n' << "Enter ID :                        ";
    cin >> student_ID;
    x-> setID(student_ID);
    cout << '\n' << "Enter Email_username :            ";
    cin >> student_email_username;
    len_user_name = strlen(student_email_username);
    x-> setEmail_username(student_email_username);
    cout << '\n' << "Enter Email_password :            ";
    cin >> student_email_password;
    len_password = strlen(student_email_password);
    x-> setEmail_password(student_email_password);
    cout << '\n' << "Enter major :                     ";
    cin >> student_major;
    len_major = strlen(student_major);
    x-> setMajor(student_major);
    cout << '\n' << "Enter Grade 1:                    ";
    cin >> student_grades[0];
    x->setGrades_1(student_grades[0]);
    cout << '\n' << "Enter Grade 2:                    ";
    cin >> student_grades[1];
    x->setGrades_2(student_grades[1]);
    cout << '\n' << "Enter Grade 3:                    ";
    cin >> student_grades[2];
    x->setGrades_3(student_grades[2]);
    cout << '\n' << "Enter Grade 4:                    ";
    cin >> student_grades[3];
    x->setGrades_4(student_grades[3]);
    cout << '\n' << "Enter Grade 5:                    ";
    cin >> student_grades[4];
    x->setGrades_5(student_grades[4]);
}
//------------------------------------------------------------------------------------------------------------------------
void CStudent :: getStudentInfo (CStudent *x,int stu_num){

   cout << endl;
   cout << endl;
   cout << endl;
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' <<"Data of student "<<stu_num+1<<":             "<< endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
   cout << '\t' << '\t' << '\t' << '\t' << "First Name:             ";
   for (i=0;i<=len_fname;i++){
        cout << x->getFName();               //x pointer object to getter
   }
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Last Name:              ";
   for (i=0;i<=len_lname;i++){
        cout << x->getLName();
   }
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Email User Name:        ";
   for (i=0;i<=len_user_name;i++){
        cout << x->getEmail_username();
   }
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Email Password:         ";
   for (i=0;i<=len_password;i++){
        cout << x->getEmail_password();
   }
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Major:                  ";
   for (i=0;i<=len_major;i++){
       cout << x->getMajor();
   }
   cout << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl ;
   cout << '\t' << '\t' << '\t' << '\t' << "ID:                     " << x->getID() << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Score:                  "<<calculateGPA(x->getGrades_1(),x->getGrades_2(),x->getGrades_3(),x->getGrades_4(),x->getGrades_5()) << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl ;
   cout << '\t' << '\t' << '\t' << '\t' << "Grades : "<< endl<< endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Grade 1:                " << x->getGrades_1() << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Grade 2:                " << x->getGrades_2() << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Grade 3:                " << x->getGrades_3() << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Grade 4:                " << x->getGrades_4() << endl;
   cout << '\t' << '\t' << '\t' << '\t' << "Grade 5:                " << x->getGrades_5() << endl<<endl<<endl;
   cout <<"________________________________________________________________________________" << endl;
   cout <<"________________________________________________________________________________" << endl ;
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CCourse::setcourse_name(char cname[20]){
    for (int i=0; i<19; i++){
    course_name[i]=cname[i];
    }
}
char* CCourse::getcourse_name(){
    return course_name;
}
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CCourse::setcourse_cost(float ccost[5]){
    for (int i=0; i<4; i++){
    course_cost[i]=ccost[i];
    }
}
float *CCourse::getcourse_cost(){
    return course_cost;
    }
//------------------------------------------------------------------------------------------------------------------------ Setter and getter
void CCourse::setcourse_code(char ccode[5]){
    for (int i=0; i<4; i++){
    course_code[i]=ccode[i];
    }
}
char* CCourse::getcourse_code(){
    return course_code;
}
//------------------------------------------------------------------------------------------------------------------------
CCourse::~CCourse()
{
}
//------------------------------------------------------------------------------------------------------------------------

//add courses function defination
void CCourse::AddCourse(){
    char* g1 = getcourse_name();          //getters calls
    char* g2 = getcourse_code();
    float* g3 = getcourse_cost();
    cout<<"Course Name:             ";
    cin>>g1;
    fflush(stdin);
    cout<<endl;
    cout<<"Course Code:             ";
    cin>>g2;
    fflush(stdin);
    cout<<endl;
    cout<<"Course Cost/LE:          ";
    cin>>*g3;
    cout<<endl<<endl<<endl;
}
//------------------------------------------------------------------------------------------------------------------------
void CCourse::getCourseInfo(){
    cout << '\t' << '\t' << '\t' << '\t' << "Course Name:                "<< course_name<< endl;
    cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
    cout << '\t' << '\t' << '\t' << '\t' << "Course Code:                "<< course_code<< endl;
    cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
    cout << '\t' << '\t' << '\t' << '\t' << "Course Cost/LE:             "<< *course_cost<< endl;
    cout <<"__________________________________________________________________________________" << endl;
    cout <<"__________________________________________________________________________________" << endl;
}
//------------------------------------------------------------------------------------------------------------------------





//Inheritance



		//Setter

void CPG_Student :: setJobTitle(string job_title[20])
 {
  	pg_student_job_title[20] = job_title[20] ;
  	}

		//Getter

string CPG_Student :: getJobTitle()
	{
    return pg_student_job_title[20];
	}

//override function defination with the extra variable
   void CPG_Student :: registerStudent(CStudent *x,int i){

     char student_Fname[15];
     char student_Lname[15];
     int student_ID;
     char student_email_username[10];
     char student_major[10];
     float student_grades[5];
     float student_score;
     char student_email_password[10];
string student_Jobtitle[20];



     cout << "\n\n\n\nEnter Data of student " << i+1 << '\n';
     cout << '\n' << "Enter the First Name :            ";
     cin >> student_Fname;
     len_fname = strlen(student_Fname);
     fflush(stdin);
     x->setFName(student_Fname);
     cout << '\n' << "Enter the Last Name :             ";
     cin >> student_Lname;
     len_lname = strlen(student_Lname);
     fflush(stdin);
     x->setLName(student_Lname);
//extra input for override
cout << '\n' << "Enter the Job title :             ";
cin >> student_Jobtitle[20];
fflush(stdin);
setJobTitle(student_Jobtitle);


     cout << '\n' << "Enter ID :                        ";
     cin >> student_ID;
     x-> setID(student_ID);
     cout << '\n' << "Enter Email_username :            ";
     cin >> student_email_username;
     len_user_name = strlen(student_email_username);
     x-> setEmail_username(student_email_username);
     cout << '\n' << "Enter Email_password :            ";
     cin >> student_email_password;
     len_password = strlen(student_email_password);
     x-> setEmail_password(student_email_password);
     cout << '\n' << "Enter major :                     ";
     cin >> student_major;
     len_major = strlen(student_major);
     x-> setMajor(student_major);
     cout << '\n' << "Enter Grade 1:                    ";
     cin >> student_grades[0];
     x->setGrades_1(student_grades[0]);
     cout << '\n' << "Enter Grade 2:                    ";
     cin >> student_grades[1];
     x->setGrades_2(student_grades[1]);
     cout << '\n' << "Enter Grade 3:                    ";
     cin >> student_grades[2];
     x->setGrades_3(student_grades[2]);
     cout << '\n' << "Enter Grade 4:                    ";
     cin >> student_grades[3];
     x->setGrades_4(student_grades[3]);
     cout << '\n' << "Enter Grade 5:                    ";
     cin >> student_grades[4];
     x->setGrades_5(student_grades[4]);

    }


void CPG_Student :: getStudentInfo(CStudent *x,int stu_num){
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' <<"Data of student "<<stu_num+1<<":             "<< endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________"<< endl;
  cout << '\t' << '\t' << '\t' << '\t' << "First Name:             ";
  for (i=0;i<=len_fname;i++){
       cout << x->getFName();
  }
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Last Name:              ";
  for (i=0;i<=len_lname;i++){
       cout << x->getLName();
  }


//override function
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Job Title:              ";
  cout << getJobTitle();



  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Email User Name:        ";
  for (i=0;i<=len_user_name;i++){
       cout << x->getEmail_username();
  }
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Email Password:         ";
  for (i=0;i<=len_password;i++){
       cout << x->getEmail_password();
  }
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" ;
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Major:                  ";
  for (i=0;i<=len_major;i++){
      cout << x->getMajor();
  }
  cout << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl ;
  cout << '\t' << '\t' << '\t' << '\t' << "ID:                     " << x->getID() << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Score:                  "<<calculateGPA(x->getGrades_1(),x->getGrades_2(),x->getGrades_3(),x->getGrades_4(),x->getGrades_5()) << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "__________________________________________________" << endl ;
  cout << '\t' << '\t' << '\t' << '\t' << "Grades : "<< endl<< endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Grade 1:                " << x->getGrades_1() << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Grade 2:                " << x->getGrades_2() << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Grade 3:                " << x->getGrades_3() << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Grade 4:                " << x->getGrades_4() << endl;
  cout << '\t' << '\t' << '\t' << '\t' << "Grade 5:                " << x->getGrades_5() << endl<<endl<<endl;
  cout <<"________________________________________________________________________________" << endl;
  cout <<"________________________________________________________________________________" << endl ;

}
