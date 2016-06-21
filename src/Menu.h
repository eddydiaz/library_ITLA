/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: Eddy Manuel Diaz Garcia.
 */

#ifndef MENU_H_
#define MENU_H_
#include "Stack.h"

class Menu
{
public:
	void show();
	void addBooks();
	void action(int option);
	void listBooks();
	void search();
	void lastElement();
	Menu();
};

#endif /* MENU_H_ */
