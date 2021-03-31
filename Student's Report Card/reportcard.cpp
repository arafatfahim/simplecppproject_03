#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using  namespace std;

class student
{
	int rollno;
	char name[50];
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	float per;
	char grade;
	void calculate();
public:
	void getdata();
	void showdata();
	int retrollno();
};


void student::calculate()
{
	per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
	     if(per>=90)
		grade='A';
	else if(per>=80)
		grade='B';
	else if(per>=70)
		grade='C';
    else if(per>=60)
		grade='D';
	else
		grade='F';
}

void student::getdata()
{
	cout<<"\nEnter The roll number of student ";
	cin>>rollno;
	cout<<"\n\nEnter The Name of student ";
	gets(name);
	cout<<"\nEnter The marks in physics out of 100 : ";
	cin>>p_marks;
	cout<<"\nEnter The marks in chemistry out of 100 : ";
	cin>>c_marks;
	cout<<"\nEnter The marks in maths out of 100 : ";
	cin>>m_marks;
	cout<<"\nEnter The marks in english out of 100 : ";
	cin>>e_marks;
	cout<<"\nEnter The marks in computer science out of 100 : ";
	cin>>cs_marks;
	calculate();
}

void student::showdata()
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student :"<<name;
	cout<<"\nMarks in Physics :"<<p_marks;
	cout<<"\nMarks in Chemistry :"<<c_marks;
	cout<<"\nMarks in Maths :"<<m_marks;
	cout<<"\nMarks in English :"<<e_marks;
	cout<<"\nMarks in Computer Science :"<<cs_marks;
	cout<<"\nPercentage of student is  :"<<per;
	cout<<"\nGrade of student is :"<<grade;
}


int  student::retrollno()
{
	return rollno;
}





void write_student();
void display_all();
void display_sp(int);
void modify_student(int);
void delete_student(int);
void class_result();
void result();
void intro();
void entry_menu();



int main()
{
	char ch;
    intro();
	do
	{

		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t1.RESULT MENU";
		cout<<"\n\n\t2.ENTRY/EDIT MENU";
		cout<<"\n\n\t3.EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-3) ";
		cin>>ch;

		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3':
				break;
			default :cout<<"\a";
		}
      }
    	while(ch!='3');
	       return 0;
}


void write_student()
{

}


void display_all()
{

}


void display_sp(int n)
{

}


void modify_student(int n)
{

}


void delete_student(int n)
{

}


void class_result()
{

}



void result()
{
	char ch;
	int rno;
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;

	switch(ch)
	{
	case '1' :
	       class_result();
	       break;
	case '2' :
	       cout<<"\n\n\tEnter Roll Number Of Student : ";
		   cin>>rno;
		   display_sp(rno);
		   break;
	case '3' :
	       break;
	default :
	       cout<<"\a";
	}
}



void intro()
{
	cout<<"\n\n\n\t\tSTUDENT REPORT CARD PROJECT";
	cout<<"\n\n\n\tMADE BY:Arafat Hossain Fahim";
	cout<<"\n\tCollege : Dhaka College";
	cout<<"\n\tPress any key To continue....";
	getch();
}


void entry_menu()
{
	char ch;
	int num;

	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;

	switch(ch)
	{
	case '1':	write_student();
                break;
	case '2':	display_all();
	            break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number ";
	            cin>>num;
			display_sp(num);
			    break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number ";
	            cin>>num;
			modify_student(num);
			    break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number ";
	            cin>>num;
			delete_student(num);
			    break;
	case '6':
	            break;
	default:
                cout<<"a";
                entry_menu();
	}
}

