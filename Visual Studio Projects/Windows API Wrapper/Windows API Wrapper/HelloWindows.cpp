#include <Windows.h> 
#include "Windows_API_Wrapper.h" 
#include <math.h> 

result CALLBACK WindowProcedure(window window, uInt16 message, WPARAM wParam, LPARAM lParam); 

using namespace windows_API_Wrapper; 

int WINAPI WinMain(instance appInstance, instance previousInstance, PSTR pCmdLine, sInt16 showStyle)
{
	Message msg; 
	char className[] = "window class"; 
	
	//Creating and registering the window class
	WindowClass winClass(WindowProcedure, className, appInstance); 

	//Creating the window 
	Window win(className, "Hello Windows", appInstance); 
	win.Show(showStyle); 

	//Message loop 
	while (msg != error)
	{
		msg.Dispatch(); 
	}

	return 0;
};

result CALLBACK WindowProcedure(window window, uInt16 message, WPARAM wParam, LPARAM lParam)
{
	using namespace windowMessage::general; 

	switch(message)
	{
		case Destroy:
			PostQuitMessage(0); 
			break; 
	} 

	return DefaultWindowProcedure(window, message, wParam, lParam);
};
