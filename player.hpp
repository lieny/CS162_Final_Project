/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, player.hpp
 * *************************************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//This class keep track of the player's location and behavior in the game
//A player will have 1 backpack to put items in and carry them around
class Player
{
	private:
		struct itemNode
		{
			string item;
			itemNode* next;
			itemNode(string itemIn, itemNode* nextIn = NULL) //initialize the node
			{
				item = itemIn;
				next =  nextIn;
			}
		};
		itemNode* head; //point to head of the item list
		itemNode* tail; //point to the end
		int counter;  //to keep track of the number of items in backpack
		string location; //for the current location of the player
		int tCounter; //to keep track of time passed

	public:
		Player();
		~Player();
		int addToBag(string itemIn);
		int removeAll();
		bool isEmpty();
		int getCounter();
		void setLocation(string locIn);
		string getLocation();
		string itemInBag();
		int time();	
	
};

#endif

