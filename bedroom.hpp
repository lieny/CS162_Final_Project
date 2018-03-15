/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, bedroom.hpp
 * *************************************************************************************/

#ifndef BEDROOM_HPP
#define BEDROOM_HPP

#include "space.hpp"
class Bedroom: public Space
{
	private:
		string bspeak;

	public:
		Bedroom();
		~Bedroom();
		bool specialAction(int, Player*);
		int takeItem(int, bool);
};

#endif
