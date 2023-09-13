#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; 
	int size; 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();// rand
	void Output() const;
	void ReSize(int );
	void Sort();
	int Search(int value);
	void Reverse(); 
	int* GetPointer() const;
	int GetSize() const;
};
	

	





