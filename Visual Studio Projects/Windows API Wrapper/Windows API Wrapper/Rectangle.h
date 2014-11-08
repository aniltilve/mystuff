#include <Windows.h>
#include "TypeAliases.h"
#include "Window.h" 

namespace windows_API_Wrapper
{

	#ifndef RECTANGLE_H
	#define RECTANGLE_H

	class wRectangle
	{
		public:

			wRectangle();

			wRectangle(const wRectangle &copyable);

			/**
			*@summary: Constructs a wRectangle with user-specified coordinates.
			*@parameter "xMin": The minimum x-coordinate (left side) of the wRectangle.
			*@parameter "xMax": The maximum x-coordinate (right side) of the wRectangle.
			*@parameter "yMin": The minimum y-coordinate (bottom side) of the wRectangle.
			*@parameter "yMax": The maximum y-coordinate (top side) of the wRectangle.
			*/
			wRectangle(uInt32 xMin, uInt32 xMax, uInt32 yMin, uInt32 yMax);

			/**
			*@summary: Assigns the coordinates of another wRectangle to the current wRectangle.
			*@parameter "assignment": The wRectangle whose coordinates are to be assigned to the current wRectangle.
			*/
			void operator=(wRectangle &assignment);

			/**
			*@summary: Assigns the coordinates of a window to the current wRectangle.
			*@parameter "win": The window whose coordinates are to be assigned to the current wRectangle.
			*/
			void operator=(Window assignment);

			/**
			*@summary: Determines whether two wRectangles are equal area-wise.
			*@parameter "comparable": The wRectangle that is to be compared to the current wRectangle.
			*@return: True if the wRectangles are equal and false if they are not.
			*/
			boolean operator==(wRectangle comparable);

			/**
			*@summary: Determines whether two wRectangles are not equal area-wise.
			*@parameter "nonComparable": The wRectangle that is to be compared to the current wRectangle.
			*@return: True if the wRectangles are not equal and false if they are.
			*/
			boolean operator!=(wRectangle nonComparable);

			/**
			*@summary: Normalizes the current wRectangle so that both the height and width are positive.
			*/
			void Normalize();

			wRectangle Intersect(wRectangle rect1, wRectangle rect2);

		private:
			rectangle rect; //A wRectangle structure 
	};

	#endif //RECTANGLE_H

}