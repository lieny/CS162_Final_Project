/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, bedroom.cpp
 * *************************************************************************************/

#include "bedroom.hpp"
//Default constructor
Bedroom::Bedroom()
{
	type = "Bedroom";
	bspeak = "in the bedroom!";
	itemName = "Peanut butter jelly sandwich";
	action = false;	
}

Bedroom::~Bedroom()
{
	
}

//Ask if the player what to put the items into a sandwich
//invoked only when the player has all 3 items in backpack
bool Bedroom::specialAction(int n, Player* p)
{
	if(p->getCounter() < 3)
	{
		cout << "Nothing to do here. Go to other rooms first. (hint: go to bathroom and storage first)" << endl;
		return false;
	}

	else
	{
		cout << "Would you like to see what you can make out of the items in your backpack? (hint: enter 1) "
		<< endl;
		cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
		cin >> n;

		if(n == 1)
		{
			p->removeAll(); //remove the items in the bag, there will only be 3 items
			cout << "You have made a peanut butter jelly sandwich! " << endl
			<< "You can use it to lure your cat out! (hint: put it in bag and go to the attic) " << endl;
			action = true;
			
		}

		else
		{
			cout << "Fine then. No new item formed. " << endl;
			action = false;
		}
	
		return action;
	}
	
}

//Function to ask if the player want to put the item found in bedroom in backpack
int Bedroom::takeItem(int n, bool act)
{
	if(act == false)
	{
		cout << "nothing in the room" << endl;
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
	
