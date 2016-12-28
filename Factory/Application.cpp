#include "Application.h"


Application::Application()
{
}


Application::~Application()
{
}

void Application::NewDocument()
{
	Document* doc = CreateDocument();
	_docs.push_back(doc);
	doc->Open();
}
