#pragma once
#include <list>
#include "Document.h"
class Application
{
public:
	Application();
	virtual ~Application();

	virtual Document *CreateDocument() = 0;
	void NewDocument();
private:
	list<Document*> _docs;
};

