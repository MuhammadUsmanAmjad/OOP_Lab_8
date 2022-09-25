#pragma once
#include<iostream>
using namespace std;
class style{
	char color[10];
	bool is_filled;
	public:
		style()
		{
		//color=" ";
		}
		style(char a[],bool chk)
		{
		cout<<"Style() called \n";
		  int x=strlen(a);
		  int i=0;
		  for(;a[i]!=0;i++)
		  {
		  	color[i]=a[i];
		  }
		  color[i]=0;
		  is_filled=chk;	
		}
		void set_color(char a[])
		{
			int x=strlen(a);
		  int i=0;
		  for(;a[i]!=0;i++)
		  {
		  	color[i]=a[i];
		  }
		  color[i]=0;
		}
		void set_is_filled(bool a)
		{
			is_filled=a;
			
		}
	~style()
	{
		cout<<"~ style() called \n";
	}
	void print_style()
	{
		
		cout<<"color is\n";
		 cout<<color<<endl;
		cout<<"filled is:"<<endl;
		cout<<is_filled<<endl;
	}
};