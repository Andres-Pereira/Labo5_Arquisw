#pragma once
#include <iostream>
#include "Observable.h"
#include <vector>
#include <string>
using namespace std;

class Feed : public Observable {
private:
	vector<Observer*> Subs;
	string name;
	string lastPost;
public:
	Feed(string name) {
		this->name = name;
		this->lastPost = "";
	}
	void newPost(string postName) {
		this->lastPost = postName;
		this->notify();
		cout << "El nuevo post '" << lastPost << "' fue posteado con exito" << endl;
	}
	string getLastPost() {
		return lastPost;
	}
	void notify() override {

		for (int i = 0; i < Subs.size(); i++) {
			Subs.at(i)->update(name);
		}
	}

	void attach(Observer* O) override {
		Subs.push_back(O);
	}

	void detach(Observer* O) override {
		Subs.pop_back();
	}
};