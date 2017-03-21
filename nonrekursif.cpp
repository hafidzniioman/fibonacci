#include <iostream>
using namespace std;

int main(int argc, char const *argv[])

{
	int a=0;
	int b=1;
	int n=10;

	for (int i = 1; i <=n; i++)
	{
		cout <<a ;
		a=a+b;
		b=a-b;
	}	
	return 0;
}