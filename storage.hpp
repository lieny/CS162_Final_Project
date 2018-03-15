/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, storage.hpp
 * *************************************************************************************/

#ifndef STORAGE_HPP
#define STORAGE_HPP

#include "space.hpp"

class Storage: public Space
{
	private:
		string stSpeak;

	public:
		Storage();
		~Storage();
		bool specialAction(int, Player*);
		int takeItem(int, bool);
};

#endif
