/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: Eddy Manuel Diaz Garcia.
 */

#include "Stack.h"

void Stack::push(Element* element)
//add
{
	//TODO: Implement this method.

	if(_last==NULL)
	{
		_last=element;
		element->set_next(NULL);
	}
	else
	{
		element->set_next(_last);
		_last=element;
	}


}

Element* Stack::pop()
//pop
{
	//TODO: Implement this method.


	if (_last==NULL)
	{
		return NULL;
	}
	else
	{
		Element* element=_last;
		_last=element->get_next();
		return element;
	}
	return NULL;

}

Stack::Stack(): _last(NULL)
{

}

Stack::Stack()
{
	_last=NULL;

}