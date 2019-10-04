/*

#include<iostream>
using namespace std;

//Define a class “MyNum” having a member variable “int num” and “void disp()”;	
//	From main function, perform following				
//	a) MyNum m1(20);						b) m1=100; //Do not use Constructor for this purpose			
//	c) int k;						
//	d) k=m1;							
//	e) cout<<endl<<k<<endl;

class mynum
{
public:
	int num;
	
	explicit mynum(int num)
	{
		this->num=num;
		cout<<"in constr"<<num<<endl;
	}
	void disp()
	{
		cout<<num<<endl;
	}
	operator int ()
	{
		return num;
	}
	void operator=(int var)
	{
		this->num=var;
	}

};

void main()
{
	mynum m1(20);						
	m1=100;					 //Do not use Constructor for this purpose			
	int k;						
	k=m1;							
	cout<<endl<<k<<endl;
	cin>>k;
}
*/