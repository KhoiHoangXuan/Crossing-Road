#include <iostream>

using namespace std;


void taolao ()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "dit con me may\n";
	}
}

void conc (int *a)
{
	(*a) ++;
}

int Min (int a, int b)
{
	return a < b ? a : b;
}

int pointerFunction (int a, int b, int (*p) (int, int))	// con trỏ hàm
{
	return p (a, b);
}

int main ()
{
	cout << "hello\n";
	// taolao ();
	int a = 1;
	int b = 2;
	cout << pointerFunction (a, b, Min);
	return 0;
}