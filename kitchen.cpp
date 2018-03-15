/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, kitchen.cpp
 * *************************************************************************************/

#include "kitchen.hpp"

//default constructor
Kitchen::Kitchen()
{
	type = "Kitchen";
	speak = "in the kitchen!";
	itemName = "Peanut butter";
	action = false;
}

//Destructor
Kitchen::~Kitchen()
{
	
}

//Ask if the player wants to turn on the light
bool Kitchen::specialAction(int n, Player* p)
{
	if (action == true)
	{
		cout << "Nothing to do here. " << endl;
		return false;
	}
	
	else
	{
		cout << "The house is dark. "
		<< "Would you like to turn on the light? (hint: enter 1)" << endl;
		cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
		cin >> n;

		if(n == 1)
		{
			cout << "The light is on! Now you can see the inside of the house. " << endl;
			action = true;
		}

		else 
		{
			cout << "Dark in the house. Cannot see. " << endl;
			action = false;
		}
	}
	
	return action;
}

//Function to pick up an item found in the kitchen
int Kitchen::takeItem(int n, bool act)
{
	if(act == false)
	{
		cout << "Go to other rooms. " << endl;
		return 1;
	}

	else
	{
		cout << "Found " << itemName 
		<< "! Would you like to put it in the backpack? (hint: enter 1)" << endl;
		cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
		cin >> n;
		if(n == 1)
		{
			cout << "Picked up " << itemName << "! " << endl;
			return 0; //return 0 for success
		}

		else
		{	
			cout << "Item not picked up. " << endl;
			return 2;
		}
	}
}



