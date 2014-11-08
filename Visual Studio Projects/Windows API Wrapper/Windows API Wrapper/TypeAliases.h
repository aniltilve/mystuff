#include <Windows.h>

#ifndef TYPEALIASES_H
#define TYPEALIASES_H

/*
C primitive types

s stands for "signed", "u" stands for unsigned. The n
*/
typedef signed short int sShort; 
typedef signed int sInt16; 
typedef signed long int sInt32; 
typedef signed long long int sInt64; 
typedef unsigned short int uShort; 
typedef unsigned int uInt16; 
typedef unsigned long int uInt32; 
typedef unsigned long long int uInt64; 

typedef float float32;
typedef double float64; 

//Handles
typedef HBITMAP bitmap;
typedef HBRUSH brush;
typedef HDC deviceContext; 
typedef HCOLORSPACE colorSpace;
typedef HICON icon; 
typedef HINSTANCE instance;
typedef HWND window; 

//Structures
typedef COLORREF color; 
typedef MSG message;
typedef PAINTSTRUCT paintStructure; 
typedef RECT rectangle; 
typedef WNDCLASSEX windowClass; 

//Text
typedef LPTSTR string; 

//Window Procedure
typedef WNDPROC windowProcedure; 

//Result
typedef LRESULT result; 

#endif //TYPEALIASES_H 