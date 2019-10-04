/*
7)
Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it. 
Define following sub classes for this class. A) Maths b) History c) English.	
Define “maxmarks” in these classes.

now write a global function "show" which will accept "subject class pointer" as an argument. this 
function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.

*/


#include<iostream>
using namespace std;
#include<conio.h>


class subject
{
public:
	virtual void maxmarks()=0;
};

class maths:public subject
{
	void maxmarks()
	{
		cout<<"maths"<<endl;
	}
};

class history:public subject
{
	void maxmarks()
	{
		cout<<"history"<<endl;
	}
};

class english:public subject
{
	void maxmarks()
	{
		cout<<"english"<<endl;
	}
};

void find(subject &ref)
{
	
	ref.maxmarks();

}

void main()
{
	maths m1;
	history h1;
	english e1;
	find(m1);
	find(h1);
	find(e1);
	getch();
}
