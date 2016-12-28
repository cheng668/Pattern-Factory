#pragma once
#include "Application.h"
template<class Document>
class WhoApplication
	:public Application
{
public:
	WhoApplication();
	virtual ~WhoApplication();
	virtual Document* CreateDocument() override;
private:

};

template<class Document>
WhoApplication<Document>::WhoApplication()
{

}

template<class Document>
WhoApplication<Document>::~WhoApplication()
{

}

template<class Document>
Document* WhoApplication<Document>::CreateDocument()
{
	return new Document();
}