#include<iostream>
using namespace std;
int main()
{
	int (*ptr)[3],i,j,rows;
	cout<<"How many rows ?"<<endl;
	cin>>rows;
	ptr=(int(*)[3])new int[rows*3];
	cout<<"Enter "<<rows*3<<"  numbers"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>ptr[i][j];
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<ptr[i][j]<<"\t";
		}
		cout<<endl;
	}
	delete []ptr;
	return 0;
}