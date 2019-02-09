#include <iostream>
using namespace std;
int main()
{
	const int max = 3;
	int var[max]{ 100, 200, 300 };
	int *ptr = var;
	int i = 0;
	while (ptr<=&var[max-1])
	{
		cout << "Address of var[" << i << "]=" << ptr << endl;
		cout << "Value of var[" << i << "]=" << *ptr<<endl;
		ptr++;
		i++;
	}

	system("pause");


	return 0;
}