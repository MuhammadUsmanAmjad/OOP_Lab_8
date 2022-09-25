#pragma once
#include<iostream>
#include"point.h"
using namespace std;
class triangle{
	point x,y,z;
	public:
		triangle(int a,int b,int c,int d,int e,int f):x(a,b),y(c,d),z(e,f)
		{
			cout<<"\n triangle() called\n";
		}
		
		void print_triangle()
		{
			cout<<"\n corner 1:"<<endl;
			x.print_point();
			cout<<"\n corner 2:"<<endl;
			y.print_point();
			cout<<"\n corner 3:"<<endl;
			z.print_point();
		}
		~triangle()
		{
			cout<<"\n~triangle() called \ n";
		}
};