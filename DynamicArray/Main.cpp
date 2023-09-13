#include<iostream>
#include "DynamicArray.h"
#include <cstdlib> 
using namespace std;



DynamicArray GetObj() 
{
	DynamicArray obj(3);
	obj.Input();

	return obj;
}
void main()
{
	srand(time(nullptr));

	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();

	DynamicArray rezult = GetObj();

	cout << "Old size: " << a.GetSize() << endl;
	a.ReSize(2);
	cout << "New size: " << a.GetSize() << endl;
	a.Output();

	cout << endl;

	a.Input();
	cout << "Before sort: " << endl;
	a.Output();

	a.Sort();
	cout << "After sort: " << endl;
	a.Output();
	cout << endl;


	int tmp = 0;
	cout << "Search on index: ";
	cin >> tmp;
	tmp = a.Search(tmp);

	if (tmp == -1)
		cout << "No found!" << endl;
	else
		cout << "Index: " << tmp << endl;
	
	cout << endl;

	cout << "Before reverse: " << endl;
	a.Output();

	a.Reverse();

	cout << "After reverse: " << endl;
	a.Output();

	system("pause");
}