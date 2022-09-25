#pragma once
#include<iostream>
#include"point.h"
#include"style.h"
using namespace std;
class circle{
	point center;
	style *st;
	double radius;
	public:
		circle(int a,int b,double c,style&obj):center(a,b)
		{
			st=&obj;
			radius=c;
     	}
     	void print_circle()
     	{  
     	cout<<"center is : \n";
     		center.print_point();
     		cout<<"radius is:\n";
     		cout<<radius<<endl;
			st->print_style();
     		
		 }
	~circle()
	{
		cout<<"\n ~Circle() called \n ";
	}
	
};