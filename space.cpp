/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, space.cpp
 * *************************************************************************************/

#include "space.hpp"

//Constructor
Space::Space()
{
	up = NULL;
	left = NULL;
	right = NULL;
	back = NULL;
	type = "space";
	itemName = "";
	action = false;
}

//Destructor
Space::~Space()
{
	
}

//Take user input to connect to the Space that they want to go
Space* Space::move(int choice)
{
	if(choice == 1)
		return this->left;
	else if(choice == 2)
		return this->right;
	else if(choice == 3)
		return this->up;
	else if(choice == 4)
		return this->back;
}

string Space::getType()
{
	return type;
}

//Function to connect the other Spaces to the 4 pointer variables
void Space::setSpace(Space *r1, Space *r2, Space *r3, Space *r4)
{
	left = r1;
	right = r2;
	up = r3;
	back = r4;
}

void Space::setUp(Space *r)
{
	up = r;
}

string Space::getItem()
{
	return itemName;
}

Space* Space::getLeft()
{
	return left;
}

Space* Space::getRight()
{
	return right;
}

Space* Space::getUp()
{
	return up;
}

Space* Space::getBack()
{
	return back;
}
	


