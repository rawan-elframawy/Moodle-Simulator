//Team Members:




//Rawan Mohamed ElFaramawy     202001762
//Salma Ahmed ali              202000757
//Alaa Hussien Mohamed         202001728
//Fatema Soliman               202002674
//Haidy Waled Hosny            202000197




#include <iostream>
#include <string>
#include "Student.h"
#include "Student.cpp"
using namespace std;


int n_students;
int n_ccourses;


int main()
{

  int choice;
  cout << '\t' << '\t' << '\t' << '\t' <<'\t'<<'\t'<<"Moodle Simulator"<< endl<<endl<<endl<<endl<<endl;
  cout<<"Under (1) or Postgraduate student (2):                     ";
  cin>>choice;
  cout<<endl;
  cout << "Enter number of students you want to register in system :  ";
  cin >> n_students;

//switch case for either under or post graduates



  switch (choice) {
    case 1: {

      CStudent stu[n_students];           //undergraduate object creation


      for (int i = 0; i< n_students;i++){                 //loop for funcion calling
          stu[i].registerStudent( stu+i,i);
      }
      cout <<endl<<endl<< '\t'<<'\t' << '\t' << '\t' << '\t' <<"Added successfully !!! "<<endl<<endl<<endl;
      cout << "_______________________________________________________________________________________________________________________" << endl;
      cout << "_______________________________________________________________________________________________________________________" << endl<<endl<<endl;
      cout << '\t'<< '\t'<< '\t'<< '\t'<< '\t'<<'\t'<< "Students Data :"<<endl<<endl<<endl;
      for (int i = 0; i< n_students;i++){
          stu[i].getStudentInfo(stu+i,i);
      }


    break;
    }



    case 2: {

      CPG_Student cpgstudent[n_students];              //post/Inheritance object creation
         for (int i = 0; i< n_students;i++){
           cpgstudent[i].registerStudent(cpgstudent+i,i);

         }
         for (int i = 0; i< n_students;i++){
             cpgstudent[i].getStudentInfo(cpgstudent+i,i);
         }
      break;
    }

    default:
    cout<<"Enter valid number (1 or 2)"<<endl;
  };




    //Courses object creation + loops


    cout << "___________________________________________________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________________________________________________" ;
    cout <<endl <<endl<<"Enter number of courses you want to add in system       :  ";
    cin >> n_ccourses;                                                      // Get user input from the keyboard
    cout<<endl<<endl<<endl;
    CCourse cc[n_ccourses];                                                  //   array of  obj course  & may  be removed  if  we use array of struct .
    for(int i=1;i<=n_ccourses;i++){
      cout<<"Enter Data of Course "<< i << " :"<<endl<<endl;
      cc[i].AddCourse() ;
    }
    cout <<endl<<endl<<'\t'<<'\t'<< '\t' << '\t' << '\t'<<'\t'<<"Added successfully !!! "<<endl<<endl<<endl;
    cout << "___________________________________________________________________________________________________________________" << endl;
    cout << "___________________________________________________________________________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << '\t' << '\t' << '\t' << '\t'<<'\t'<< '\t'<<"Courses Data :"<< endl<<endl<<endl;
    for(int i=1;i<=n_ccourses;i++){
        cout << '\t' << '\t' << '\t' << '\t' <<"Data of Course "<<i<<":             "<< endl;
        cc[i].getCourseInfo();
    }


}
