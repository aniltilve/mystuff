#include <Windows.h> 

#ifndef EVENT_H
#define EVENT_H

namespace messageBox
{
	namespace button 
	{
		#define Cancel_TryAgain_Continue     MB_CANCELTRYCONTINUE
		#define Ok                           MB_OK
		#define Ok_Cancel                    MB_OKCANCEL
 		#define Yes_No_Cancel                MB_YESNOCANCEL 
		#define Yes_No                       MB_YESNO
	}

	namespace icon
	{
		#define Error           MB_ICONERROR
		#define Question        MB_ICONQUESTION
		#define Warning         MB_ICONWARNING
		#define Information     MB_ICONINFORMATION
	}

	namespace modality 
	{
		#define Application     MB_APPLMODAL
		#define System          MB_SYSTEMMODAL
		#define Task            MB_TASKMODAL
	}
}

namespace windowMessage
{
	namespace general
	{
		#define Destroy WM_DESTROY 
		#define Null WM_NULL
		#define Quit WM_QUIT 
	}

	namespace keyboard
	{
		#define Control VK_CTRL 
	}

	/**
	*@summary: A list of messages sent when the user interacts with mouse buttons. 
	*@note: Message names prefixed with a "c" refer to mouse events that occur in the client area of the window.
	*       Message names prefixed with an "nc" refer to mouse events that occur outside the client area of the window. 
	*@note: Hungarian notation was used to avoid excessive namespace nesting. 
	*/
	namespace mouse 
	{
		#define cLeftButtonDoubleClick        WM_LBUTTONDBLCLK
		#define cLeftButtonDown               WM_LBUTTONDOWN
		#define cLeftButtonUp                 WM_LBUTTONUP 

		#define cMiddleButtonDoubleClick      WM_MBUTTONDBLCLK
		#define cMiddleButtonDown             WM_MBUTTONDOWN
		#define cMiddleButtonUp               WM_MBUTTONUP

		#define cRightButtonDoubleClick       WM_RBUTTONDBLCLK
		#define cRightButtonDown              WM_RBUTTONDOWN
		#define cRightButtonUp                WM_RBUTTONUP

		#define cXButtonDoubleClick           WM_XBUTTONDBLCLK
		#define cXButtonDown                  WM_XBUTTONDOWN
		#define cXButtonUp                    WM_XBUTTONUP
		
		#define ncHitTest                     WM_NCHITTEST 

		#define ncLeftButtonDoubleClick       WM_NCLBUTTONDBLCLK
		#define ncLeftButtonDown              WM_NCLBUTTONDOWN
		#define ncLeftButtonUp                WM_NCLBUTTONUP 

		#define ncMiddleButtonDoubleClick     WM_NCMBUTTONDBLCLK
		#define ncMiddleButtonDown            WM_NCMBUTTONDOWN
		#define ncMiddleButtonUp              WM_NCMBUTTONUP

		#define ncRightButtonDoubleClick      WM_NCRBUTTONDBLCLK
		#define ncRightButtonDown             WM_NCRBUTTONDOWN
		#define ncRightButtonUp               WM_NCRBUTTONUP

		#define ncX_ButtonDoubleClick         WM_NCXBUTTONDBLCLK
		#define ncX_ButtonDown                WM_NCXBUTTONDOWN
		#define ncX_ButtonUp                  WM_NCXBUTTONUP
	}
}

#endif NAMESPACE_H 