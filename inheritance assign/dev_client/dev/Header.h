class base1
{
public:
	int k;
	void disp1();
	
};

class base2
{
public:
	int m;
	void disp2();
	
};

class sub: public base1,public base2
{
public:
	int l;
	void disp();
};