#pragma once
#include <iostream>
using namespace std;

class Document
{
public:
	virtual ~Document(){}

	virtual void Open() = 0;
protected:
	Document(){}

};