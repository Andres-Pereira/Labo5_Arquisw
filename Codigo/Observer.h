#pragma once
#include <iostream>
using namespace std;

class Observer
{
public:
	virtual void update(string Feed) = 0;
};
