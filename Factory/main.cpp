#include "WhoApplication.h"
#include "MyDocument.h"
#include "YourDocument.h"

int main()
{
	Application* myApp = new WhoApplication < MyDocument > ;
	Application* yourApp = new WhoApplication < YourDocument > ;

	Document* my = myApp->CreateDocument();
	Document* your = yourApp->CreateDocument();

	myApp->NewDocument();   //Open MyDocument
	yourApp->NewDocument(); //Open YourDocument

	delete myApp;
	delete yourApp;
	delete my;
	delete your;

	_CrtCheckMemory();
	system("pause");
	return 0;
}

/*
output:
	Open MyDocument
	Open YourDocument
*/