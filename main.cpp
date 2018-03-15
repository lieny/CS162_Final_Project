/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, main.cpp
 * *************************************************************************************/
#include "space.hpp"
#include "kitchen.hpp"
#include "bedroom.hpp"
#include "bathroom.hpp"
#include "storage.hpp"
#include "attic.hpp"
#include "player.hpp"

int main()
{
	Space *kit;
	kit = new Kitchen;
	Space *bed;
	bed = new Bedroom;
	Space *bed2;
	bed2 = new Bedroom;
	Space *bath;
	bath = new Bathroom;
	Space *stor;
	stor = new Storage;
	Space *att;
	att = new Attic;
	Player *p1;
	p1 = new Player;
	Space *toWhere; //points to the next room that they player wishs to go
	Space *temp; //points to the Space to be deleted
	int n; //user choice to perform an action
	int r; //user choice of which room to go
	bool act; 
	int take; 
	int numOfItem = 0;
	string currentLoc;
	
	//left = 1
	//right = 2
	//up = 3
	//back = 4
	int t = 0;
	kit->setSpace(bed, bath, bed2, stor);
	bed->setSpace(bath, kit, bed2, stor);
	bath->setSpace(kit, bed, bed2, stor);
	stor->setSpace(kit, bed, bed2, bath);
	bed2->setSpace(bed, bath, kit, stor);
	toWhere = kit;

		
	currentLoc = toWhere->getType();
	cout << "------ In " << currentLoc << "------" << endl; // in Kitchen
	p1->setLocation(currentLoc);
	act = toWhere->specialAction(n, p1);
	take = toWhere->takeItem(n, act);
	if(take == 0)
		p1->addToBag(toWhere->getItem());
	numOfItem = p1->getCounter();
	cout << "# of item in backpack: " << numOfItem << endl;

	while(p1->itemInBag() != "your cat")
	{
		cout << endl;
		cout << "Enter 1 to go to " << toWhere->getLeft()->getType() << endl;
		cout << "Enter 2 to go to " << toWhere->getRight()->getType() << endl;
		cout << "Enter 3 to go to " << toWhere->getUp()->getType() << endl;
		cout << "Enter 4 to go to " << toWhere->getBack()->getType() << endl;
	
		if(currentLoc == "Kitchen")
			cout << "(hint: enter 2 to go to the bathroom) " << endl;
		else if(currentLoc == "Bathroom")
			cout << "(hint: enter 4 to go to the storage) " << endl;
		else if(currentLoc == "Storage")
			cout << "(hint: enter 2 to go to the bedroom) " << endl;
		else if(currentLoc == "Bedroom")
			cout << "(hint: enter 3 to go to the attic) " << endl;
		cin >> r;
		t = p1->time();
		cout << "You have used " << t << " minuts. The neighbors will return in 45 mins." 
		<< endl << endl;
		if(t == 45)
			return 0;
		toWhere = toWhere->move(r);
	
		currentLoc = toWhere->getType();
		cout << "------ In " << currentLoc << "------" << endl;
		p1->setLocation(currentLoc);
	
		act = toWhere->specialAction(n, p1);
		if(currentLoc == "Storage" && act == true)
		{
			temp = stor->getUp();
			stor->setUp(att);
			kit->setUp(att);
			bed->setUp(att);
			bath->setUp(att);		
			att->setSpace(bed, bath, kit, stor);
			delete temp;
		}	
		
		take = toWhere->takeItem(n, act);
		if(take == 0)
			p1->addToBag(toWhere->getItem());
		numOfItem = p1->getCounter();
		cout << "# of item in backpack: " << numOfItem << endl;
	}


	return 0;
}
