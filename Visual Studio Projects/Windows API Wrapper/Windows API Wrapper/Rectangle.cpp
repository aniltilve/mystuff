#include "Rectangle.h" 

using namespace windows_API_Wrapper;

wRectangle::wRectangle()
{
	this->rect.left = 0;
	this->rect.top = 0;
	this->rect.right = 0;
	this->rect.bottom = 0;
}

void wRectangle::operator=(wRectangle &assignment)
{
	this->rect.left   = assignment.rect.left;
	this->rect.top    = assignment.rect.top;
	this->rect.right  = assignment.rect.right;
	this->rect.bottom = assignment.rect.bottom;
}

void wRectangle::operator=(Window assignment)
{
	if (GetClientRect(assignment.Get(), &this->rect) == 0)
		MessageBox(null, "Failed to assign window dimensions to wRectangle!", "ERROR", MB_ICONEXCLAMATION);
}

boolean wRectangle::operator==(wRectangle comparable)
{
	return EqualRect(&this->rect, &comparable.rect); 
}

boolean wRectangle::operator!=(wRectangle nonComparable)
{
	return !EqualRect(&this->rect, &nonComparable.rect); 
}

void wRectangle::Normalize()
{
	if (this->rect.top > this->rect.bottom)
	{
		uInt32 temp = this->rect.top;
		this->rect.top = this->rect.bottom;
		this->rect.bottom = temp; 
	}

	if (this->rect.left > this->rect.right)
	{
		uInt32 temp = this->rect.left;
		this->rect.left = this->rect.right;
		this->rect.right = temp; 
	}
}

wRectangle wRectangle::Intersect(wRectangle rect1, wRectangle rect2)
{
	wRectangle dstRect = wRectangle();  
	boolean isIntersected = IntersectRect(&dstRect.rect, &rect1.rect, &rect2.rect); 

	if (isIntersected == false)
		MessageBox(null, "Failed create an intersection between the two source wRectangles!", "ERROR", MB_ICONEXCLAMATION);

	return dstRect; 
}
