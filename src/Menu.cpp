/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: Eddy Manuel Diaz Garcia.
 */

#include "Menu.h"
#include <iostream>

using namespace std;
Stack* stack =new Stack();
void Menu::action(int option)
{
	switch(option)
	{
		case 1:
			listBooks();
			break;
		case 2:
			addBooks();
			break;
		case 3:
			//lastElement();
			break;
		case 4:
			search();
			break;
		case 5:
			cout << "Thanks for using our software, good bye!" << endl;
	}
}

void Menu::addBooks()
{
	string title="";
	string author="";
	string editorial="";
	string date="";
	string category="";

	cout<<"----------------Add Books----------------"<<endl;
	cout<<"Title:";
	cin>>title;
	cout<<"Author:";
	cin>>author;
	cout<<"editorial:";
	cin>>editorial;
	cout<<"date:";
	cin>>date;
	cout<<"category:";
	cin>>category;

	Element* book = new Element(title,author,editorial,date,category);
	stack->push(book);

}

void Menu::listBooks()
{
	cout<<"All Books"<<endl;
	Element *i=stack->pop();
	while (i!=NULL)
	{
		cout<<"Title:"<<"["<<i->get_title()<<"] "<<"Editorial:"<<"["<<i->get_editorial()<<"] "<<"Author:"<<"["<<i->get_author()<<"] "<<"Category:"<<"["<<i->get_category()<<"]"<<endl;
		i=stack->pop();
	}
}


void Menu::search()
{
}

void Menu::show()
{
	//TODO: Implement this method.
	cout << "Implement the menu" << endl;
	int option;
	do
	{
		cout << "Library stores" << endl;
		cout << "1- List Books" << endl;
		cout << "2- Add Book" << endl;
		cout << "3- Last Book added" << endl;
		cout << "4- Search Book" << endl;
		cout << "5- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		action(option);



	}while(option !=5);
}

Menu::Menu()
{

}