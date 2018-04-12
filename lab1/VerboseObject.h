#pragma once
#include <string>
//#include <iostream>

using namespace std;

struct VerboseObject
{
	string name;
	VerboseObject(string name) {
		this->name = name;
		cout<< name << " was created."<<endl;
	}

	~VerboseObject(){
		cout << name << " was destroyed." << endl;
	}
	string saySomething() {
		return  name + " says hello.";
	}
};