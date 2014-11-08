#include "TypeAliases.h" 
#include "Macros.h" 
#include "TypeAliases.h" 

namespace windows_API_Wrapper
{

#ifndef WINDOW_H
#define WINDOW_H

	class Window
	{
		public:

			/**
			*@summary: Constructs a window object.
			*@parameter "windowClass": The name of the window class whose properties the window inherits.
			*@parameter "windowName": The name of the window.
			*@parameter "appInstance": The instance of the application that the window is associated with.
			*/
			Window(string windowClass, string windowName, instance appInstance);

			window Get();

			/**
			*@summary: Displays the window.
			*@parameter "equality": The wRectangle whose coordinates are to be assigned to the current wRectangle.
			*/
			void Show(sInt16 showStyle);

			/**
			*@summary: Updates the client area of the window.
			*/
			void Update();

		protected:
			window win;
	};

	#endif //WINDOW_H

}