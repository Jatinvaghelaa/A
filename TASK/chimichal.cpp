#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\nthis is base of the class A";
		
		}
};
class B; public A
{
	public:
		B()
		{
			cout<<"\nthis is base of the class B";
		}
};
class C; public A
{
	public:
		C()
		{
			cout<<"/nthis is base of the class";
			
		}
};
class D; public A
{
	public:
		d()
		{
			cout<<"\nthis is base of the class d";
		}
};
int main ()
{
	B B1;
	C C1;
	D D1;
	
	
	
	
	
	
	return 0;
}
