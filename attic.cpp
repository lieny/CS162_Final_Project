/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, attic.cpp
 * *************************************************************************************/

#include "attic.hpp"

Attic::Attic()
{
	type = "Attic";
	aspeak = "in the Attic!";
	itemName = "your cat";
	action = false;
}

Attic::~Attic()
{

}

//Ask if the player wants to use the sandwich to lure out the cat
bool Attic::specialAction(int n, Player* p)
{
	cout << "You can hear the cat purring under the bed, but she refuses to come out. " << endl
	<< "Would you like to use the peanut butter jelly sandwich to lure her out? " << endl;
	cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
	cin >> n;

	if(n == 1)
	{
		p->removeAll();	//remove the sandwich from backpack
		cout << "The cat came out! " << endl;
		action = true;
	}

	else
	{
		cout << "What why! you are almost done! Just take out the sandwich already. " << endl;
		action = false;
	}

	return action;
}

//Ask if the player wants to take the cat and get out of the house! 
int Attic::takeItem(int n, bool act)
{
	if(act == false)
	{
		cout << "Nothing else in the room. " << endl;
		return 1;
	}

	else
	{
		cout << "Found " << itemName 
		<< "! Would you like to put her in the backpack? (hint: enter 1)" << endl;
		cout << "Enter 1 for Yes " << endl << "Enter 2 for No " << endl;
		cin >> n;
		if(n == 1)
		{
			cout << "Picked up " << itemName << "! " << endl
			<< "Now you are safe!" << endl;
			return 0; //return 0 for success
		}

		else
		{	
			cout << "Item not picked up. " << endl;
			return 2;
		}
	}
}

