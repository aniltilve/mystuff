#include "WindowClass.h"

using namespace windows_API_Wrapper; 

WindowClass::WindowClass(windowProcedure winProc, string className, instance appInstance)
{
	this->winClass.cbSize = sizeof(this->winClass); 
	this->winClass.style = null;
    this->winClass.lpfnWndProc = winProc;  
    this->winClass.cbClsExtra = null;
    this->winClass.cbWndExtra = null;
    this->winClass.hInstance = appInstance;           
    this->winClass.hIcon = null;
    this->winClass.hCursor = LoadCursor(null, IDC_ARROW); 
    this->winClass.hbrBackground = (brush) (COLOR_WINDOW + 1); 
    this->winClass.lpszMenuName = null;
    this->winClass.lpszClassName = TEXT(className);  
	this->winClass.hIconSm = null; 

	if (RegisterClassEx(&this->winClass) == 0)
		MessageBox(0, "Failed to register the window class!", "ERROR", MB_ICONERROR); 
}