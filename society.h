#include<iostream>
#include"Student.h"
using namespace std;
class society {
	char society_name[50];
	student* president;
	student* members[5];
	int check = 0;
public:
	society(const char s[])
	{
		int i = 0;
		for (; s[i] != 0; i++)
			society_name[i] = s[i];
		society_name[i] = 0;
		president = NULL;
		for (i = 0; i < 5; i++)
			members[i] = NULL;

	}
	void print_society()
	{
		cout << "Society Name:\n";
		cout << society_name << endl;
		cout << "President is:\n";
		president->print_student();
		for (int j = 0;j < 5; j++)
		{
			cout << "member   " << j + 1 << " :" << endl;    
			members[j]->print_student();
		}
	}
	void appoint_president(student st)
	{
		static int i = 0;
		if (i == 0 && st.Check_cgpa() == true) {
			st.print_student();
			president = &st;
			cout << "\n is appoited as president\n\n";
			i++;
		}
		else if (i > 0 && st.Check_cgpa()==false)
		{
			st.print_student();
			cout << "no seat is vacant and no cgpa criteria met." << endl<<endl;
		}
		else if (i >0  && st.Check_cgpa() == true)
		{
			st.print_student();
			cout << "\nCgpa criteria met but seat is not vacant.\n\n";

		}
		else if (i == 0 && st.Check_cgpa() == false)
		{
			st.print_student();
			cout << "\n seat is avalible but Cgpa criteria not met.\n\n";
		}
		   
	}
	void appoint_members(student st)
	{
		static int i = 0;
		if (i == 0)
		{
			st.print_student();
			cout << "is selected as a member." << endl;
			members[i] = &st;
			i++;
		}
		else
		{
			bool chk = false;
			/*for (int j = 0; j <= i; j++)
			{
				if (&st==members[j])
					chk = true;
			}*/
			double s = st.cgpa_return();
			for (int j = 0;j <=i; j++)
			{
				double m = members[j]->cgpa_return();
				if (s == m)
					chk = true;
			}
			if (chk == false && i < 5)
			{
				members[i] = &st;
				i++;
				st.print_student();
				cout << "is  selected as a member." << endl;

			}
			else if (chk == true )
			{
				st.print_student();
				cout << "member already exists.\n";
			}
			else if (chk == false && i > 4)
			{
				st.print_student();
				cout << "no space is avalible for the member." << endl;
			}
			else if (chk == true && i > 4)
			{
				st.print_student();
				cout << "member already exists and also space is not avalile\n";
			}
		}
	}
	void suspend_member(const char a[])
	{
		int j=-1;
		for (int i = 0; i < 5; i++)
		{
			if (members[i]->check_member(a))
			{
				j = i;
				i = 5;
				members[j]->print_student();
				members[j] = 0;
				cout << "removed successfully." << endl;
				
			}
		}
		if(j==-1)
		cout << a << "  " << "not found" << endl;
	}
};