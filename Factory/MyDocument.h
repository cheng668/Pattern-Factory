#pragma once
#include "Document.h"
class MyDocument :
	public Document
{
public:
	MyDocument();
	virtual ~MyDocument();
	virtual void Open() override;
};

