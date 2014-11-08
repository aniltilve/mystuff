#include <windows.h>
#include "Macros.h" 
#include "TypeAliases.h" 

namespace windows_API_Wrapper
{

	#ifndef WINDOWCLASS_H
	#define WINDOWCLASS_H

	class WindowClass
	{
		public:

			/**
			*@summary: Constructs a window class and registers it with Windows.
			*@parameter "winProc": The window procedure that the class is associated with.
			*@parameter "className": The name of the window class.
			*@parameter "appInstance": The instance of the application that the class is associated with.
			*/
			WindowClass(windowProcedure winProc, string className, instance appInstance);

			/**
			*@summary: Returns the window handle of the current window.
			*@return: The window handle of the window.
			*/
			windowClass Get();

		private:

			windowClass winClass; //A window class structure 
	};

	#endif WINDOWCLASS_H

}