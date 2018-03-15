/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, attic.hpp
 * *************************************************************************************/

#ifndef ATTIC_HPP
#define ATTIC_HPP

#include "space.hpp"

class Attic: public Space
{
	private:
		string aspeak;

	public:
		Attic();
		~Attic();
		bool specialAction(int, Player*);
		int takeItem(int, bool);
};

#endif
