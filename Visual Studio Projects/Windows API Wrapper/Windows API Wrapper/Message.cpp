#include "Message.h" 

using namespace windows_API_Wrapper;

Message::Message()
{
}

boolean Message::operator!=(sInt16 notEquatable)
{
	sInt16 retrievedMessage = GetMessage(&this->msg, null, null, null);

	if (retrievedMessage == -1)
		MessageBox(null, "Failed to retrieve message!", "ERROR", MB_ICONEXCLAMATION);
 
	return (retrievedMessage != notEquatable);
}

boolean Message::operator>(sInt16 comparable)
{
	sInt16 retrievedMessage = GetMessage(&this->msg, null, null, null);

	if (retrievedMessage == -1)
		MessageBox(null, "Failed to retrieve message!", "ERROR", MB_ICONEXCLAMATION);
 
	return (retrievedMessage > comparable);
}

void Message::Dispatch()
{
	DispatchMessage(&msg); 
}

void Message::Translate()
{
	if (TranslateMessage(&msg) == null)
		MessageBox(null, "Failed to translate message!", "ERROR", MB_ICONEXCLAMATION);
}

void Message::PostQuitMessage(sInt16 exitCode)
{
	PostQuitMessage(exitCode); 
}
