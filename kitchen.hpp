/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, kitchen.hpp
 * *************************************************************************************/

#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include "space.hpp"

class Kitchen: public Space
{
	private:
		string speak;
	public:
		Kitchen();
		~Kitchen();
		bool specialAction(int, Player*);
		int takeItem(int, bool);


};

#endif
