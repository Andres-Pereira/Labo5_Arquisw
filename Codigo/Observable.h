#pragma once
#include <iostream>
#include "Observer.h"
using namespace std;

class Observable
{
public:
	virtual void attach(Observer* O) = 0;
	virtual void detach(Observer* O) = 0;
	virtual void notify() = 0;
};

