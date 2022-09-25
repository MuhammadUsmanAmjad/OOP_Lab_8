#include<iostream>
using namespace std;

class student{
	char name[50];
	char roll_no[10];
	float student_cgpa;
	public:
		student(const char roll_n[],const char nam[],float x)
		{
		int i=0;
		for(;i<strlen(nam); i++)
		{
			name[i]=nam[i];
		}
		name[i]='\0';
		i=0;
		for(;i<strlen(roll_n); i++)
		{
			roll_no[i]=roll_n[i];
			}
			roll_no[i]='\0';
			student_cgpa=x;
		}
		void print_student()
		{
			if (this != 0)
				cout << name << "    " << roll_no << "    " << student_cgpa << endl;
			else
				cout << "Not avalible\n";
		}
		~student()
		{
			//cout<<"\n~student() called\n";
		}
		bool Check_cgpa()
		{
			if (student_cgpa > 3)
				return true;
			return false;
	  }
		double cgpa_return()
		{
			if (this != 0)
				return student_cgpa;
			else
				return 0;
		}
		bool check_member(const char a[])
		{
			if (this != 0)
			{
				bool chk = true;
				for (int i = 0; a[i] != 0; i++)
				{
					if (name[i] != a[i])
						chk = false;
				}
				return chk;
			}
			else
				return false;
		}
		
};
