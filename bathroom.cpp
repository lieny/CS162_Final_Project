/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, bathroom.cpp
 * *************************************************************************************/

#include "bathroom.hpp"
//Default constructor
Bathroom::Bathroom()
{
	type = "Bathroom";
	bathSpeak = "in the bathroom!";
	itemName = "Bread";
	action = false;
}

//Destructor
Bathroom::~Bathroom()
{

}

//Function to ask if the player wants to open the medicine cabinet to see hidden item
//inside
bool Bathroom::specialAction(int n, Player* p)
{
	cout << "There is a medicine cabinet in the bathroom. " 
	<< "Would you like to open it? (hint: enter 1) " << endl;
	
	cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
	cin >> n;

	if(n == 1)
	{
		cout << "The cabinet is now open. Take a look inside. " << endl;
		action = true;
	}

	else 
	{
		cout << "The cabinet remains closed. " << endl;
		action = false;
	}

	return action;

}

//Function to pick up an item found in the bathroom
int Bathroom::takeItem(int n, bool act)
{
	if(act == false)
	{
		cout << "Nothing else in the room. " << endl;
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

