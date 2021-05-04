#pragma once
#include <iostream> 
#include <string>
#include "Observer.h"
#include"Feed.h"
using namespace std;

class Subscriber : public Observer
{
private:
	Feed* observable;
public:
	Subscriber(Feed* observable)
	{
		this->observable = observable;
	}
	~Subscriber()
	{
	}
	void update(string Feed) override {
		cout << "Nuevo post de " << Feed << endl;
		cout << "Tema: " << observable->getLastPost() << endl;
	}

};