#include<iostream>
using namespace std;
#include"society.h"
int main()
{
	student s1("12L1111", "Hashim Amla", 3.99);
	student s2("13L1121", "Virat Kohli", 3.45);
	student s3("13L1126", "Quinton de Kock", 2.98);
	student s4("14L1361", "Joe Root", 2.99);
	student s5("14L1124", "Martin Guptil", 3.09);
	student s6("15L1314", "Rohit Sharma", 3.19);
	// s1.print_student();
    // s2.print_student();
	 //s3.print_student();
	// s4.print_student();
	// s5.print_student();
	// s6.print_student();
	society sports("Sports");
	//sports.appoint_president(s3);
	sports.appoint_president(s1);
	//sports.appoint_president(s2);
	student s7("15L1334", "Robert Elen", 2.19);
	sports.appoint_members(s3);
	sports.appoint_members(s2);
	sports.appoint_members(s3);
	sports.appoint_members(s1);
	sports.appoint_members(s4);
	sports.appoint_members(s5);
	sports.appoint_members(s6);
	sports.appoint_members(s7);
	//sports.print_society();
	cout << endl << endl << endl;
	sports.suspend_member("abc");
	sports.suspend_member("Martin Guptil");
	sports.print_society();

	cout << endl << endl << endl;
	society ieee("IEEE");
	ieee.appoint_president(s5);
	ieee.print_society();


	 system("pause");
	 return 0;

	


}