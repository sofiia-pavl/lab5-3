#include "B.h"

int main()
{
	A a(2);
	B b(3, 7);
	try
	{
		//b.P(a);
		b.P(b);
	}
	catch (A)
	{
		cout << "catch(A)" << endl;
		exit(101);
	}
	cout << "End" << endl;
	return 0;
}