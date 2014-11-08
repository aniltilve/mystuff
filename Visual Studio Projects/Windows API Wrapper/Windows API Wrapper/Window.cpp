#include "Window.h" 

using namespace windows_API_Wrapper;

Window::Window(string windowClass, string windowName, instance appInstance)
{
	this->win = CreateWindowEx(null, TEXT(windowClass), TEXT(windowName), WS_OVERLAPPEDWINDOW,
						       CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
						       null, null, appInstance, null);

	if (this->win == null)
		MessageBox(null, "Failed to create a window!", "ERROR", MB_ICONEXCLAMATION);   
}

window Window::Get()
{
	return this->win; 
}

void Window::Show(sInt16 showStyle)
{
	if (ShowWindow(this->win, showStyle) != 0)
		MessageBox(null, "The window is already visible!", "WARNING", MB_ICONEXCLAMATION);
}

void Window::Update()
{
	if (UpdateWindow(this->win) == false)
		MessageBox(null, "Failed to update window!", "ERROR", MB_ICONEXCLAMATION);
}