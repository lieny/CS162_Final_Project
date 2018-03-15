/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, storage.cpp
 * *************************************************************************************/

#include "storage.hpp"

//default constructor
Storage::Storage()
{
	type = "Storage";
	stSpeak = "in the storage!";
	itemName = "Strawberry Jam";
	action = false;
}

//Destructor
Storage::~Storage()
{
	
}

//Ask if the player want to open a second storage found inside 
bool Storage::specialAction(int n, Player* p)
{
	cout << "You found a hidden passage! Would you like to open it? (hint: enter 1) "<< endl;
	cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
	cin >> n;

	if(n == 1)
	{
		cout << "You found a passage to go up to the attic! take a look inside." << endl;
		action = true;
	}

	else 
	{
		cout << "No action is taken. " << endl;
		action = false;
	}

	return action;
}

//Function to pick up an item found in the storage
int Storage::takeItem(int n, bool act)
{
	if(act == false)
	{
		cout << "Nothing else in the storage. " << endl;
		return 1;
	}

	else
	{
		cout << "Now the attic option is aviable for you (hint: but go to the bedroom first!) " << endl;
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

