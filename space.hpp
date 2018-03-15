/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, space.hpp
 * *************************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include "player.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Space
{
	protected:
		Space *up;
		Space *left;
		Space *right;
		Space *back;
		string type; //type/name of the Space
		string itemName; //There will be different items to collect in different Spaces
		bool action; //keep track of specail action

	public:
		Space();
		~Space();
		Space* move(int);
		string getType();
		virtual bool specialAction(int, Player*) = 0; //pure virtual function
		
		void setSpace(Space*, Space*, Space*, Space*);
		void setUp(Space*);
		Space* getLeft();
		Space* getRight();
		Space* getUp();
		Space* getBack();
		virtual int takeItem(int, bool) = 0;
		string getItem();

};

#endif
