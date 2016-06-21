/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
<<<<<<< HEAD
 *      Author: Eddy Manuel DIaz Garcia.
 */

#include "Element.h"
Element::Element(std::string name):_name(name), _next(NULL)
using namespace std;

Element::Element(string title,string author,string editorial,string date, string category)
{
    _title=title;
    _author=author;
    _editorial=editorial;
    _date=date;
    _category=category;
    _next=NULL;

}


Element::~Element() {

}
