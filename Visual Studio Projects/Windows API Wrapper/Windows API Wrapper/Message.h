#include <Windows.h>
#include "Macros.h" 
#include "TypeAliases.h"

namespace windows_API_Wrapper
{

	#ifndef MESSAGE_H
	#define MESSAGE_H

	class Message
	{
		public:

			Message();

			/**
			*@summary: Determines whether the message is not numerically equal to a number.
			*@return: Returns 1 if the condition is true, 0 if false.
			*/
			boolean operator!=(sInt16 nonEquatable);

			/**
			*@summary: Determines whether the message is not numerically greater than a number.
			*@return: Returns 1 if the condition is true, 0 if false.
			*/
			boolean operator>(sInt16 comparable);

			/**
			*@summary: Sends the message to a window procedure.
			*/
			void Dispatch();

			/**
			*@summary: Translates keyboard messages into characters and posts them in the message queue.
			*/
			void Translate();

			/**
			*@summary: Posts a "Quit" message in the message queue.
			*/
			void PostQuitMessage(sInt16 exitCode); //throws unhandled exceptions if made static... 

		private:
			message msg; //message structure 
	};

}

#endif //MESSAGE_H 