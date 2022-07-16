#pragma once
#include<iostream>
#include<set>
using namespace std;
class Base
{

private:

	int age;
	string name;
	static int count;

public:
	Base();
	Base(int age, string name);
	void print()const;
	bool operator< (const Base& other) const;

};

