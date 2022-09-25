#pragma once
#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		point(int a,int b)
		{
			x=a;
			y=b;
			cout<<"\n point () called \n";
		}
		void print_point()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		~point()
		{
			cout<<"\n ~point() called \n";
		}
};