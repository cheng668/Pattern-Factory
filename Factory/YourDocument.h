#pragma once
#include "Document.h"
class YourDocument :
	public Document
{
public:
	YourDocument();
	virtual ~YourDocument();
	virtual void Open() override;

};

