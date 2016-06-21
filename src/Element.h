/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: Eddy Manuel Diaz Garcia.
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
private:
	std::string _name;
	std::string _title;
	std::string _author;
	std::string _editorial;
	std::string _date;
	std::string _category;
	Element* _next;

public:
	Element(std::string name);

	Element(std::string name,std::string author,std::string editorial, std::string date,std::string category);
	virtual ~Element();

	std::string &get_title(){return _title;	}

	void set_title(std::string &_title) {Element::_title = _title;}
	std::string &get_author(){return _author;}

	void set_author(std::string &_author) {Element::_author = _author;}

	std::string &get_editorial(){return _editorial;}

	void set_editorial(std::string &_editorial) {	Element::_editorial = _editorial;}

	std::string &get_date(){return _date;}

	void set_date(std::string &_date) {Element::_date = _date;}
	std::string &get_category(){return _category;}

	void set_category(std::string &_category) {	Element::_category = _category;	}

	Element *get_next()const
	{
		return _next;
	}

	void set_next(Element *_next)
	{
		Element::_next = _next;
	}


	friend class Stack;
};
