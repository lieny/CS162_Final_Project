/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, player.cpp
 * *************************************************************************************/

#include "player.hpp"

//Default constructor
Player::Player()
{
	head = NULL;
	tail = NULL;
	counter = 0;
	location = "";
}

//Destructor
Player::~Player()
{
	
}

//Function to add 1 item at a time to the backpack list, add at the end of the list
int Player::addToBag(string itemIn)
{
	if(counter > 3)
	{
		cout << "Backpack is full! " << endl;
		return 1;
	}

	//case 1: empty list
	if(isEmpty())
	{
		itemNode *newNode = new itemNode(itemIn);
		head = newNode;
		tail = newNode;
		counter++;
	}

	//case 2: not empty
	else
	{
		itemNode *newNode = new itemNode(itemIn);
		tail->next = newNode;
		tail = newNode;
		counter++;
	}
	
	return 0;

}

int Player::removeAll()
{
	//case 1: empty list
	if(isEmpty())
	{
		cout << "Backpack is empty. " << endl;
		return 1;
	}

	//case 2: not empty
	else
	{
		itemNode *temp = NULL;
		while(head != NULL)
		{
			temp = head;
			head = head->next;
			delete temp;
			counter--;
		}

		return 0;
	}		
}

string Player::itemInBag()
{
	if(isEmpty())
		return "not";

	else
		return head->item;
}

bool Player::isEmpty()
{
	if(head == NULL)
		return true;
	else
		return false;
}

int Player::getCounter()
{
	return counter;
}

void Player::setLocation(string locIn)
{
	location = locIn;
}

string Player::getLocation()
{
	return location;
}

//Function to keep track of the time. The user will be able to make no more than 45 moves 
//(in this game 1 move equals to 1 min passed)
int Player::time()
{
	tCounter++;
	return tCounter;
}
	
	
