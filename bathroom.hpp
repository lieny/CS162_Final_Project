/***************************************************************************************
 * Author: Ya Lien
 * Due Date: 8/7/2016
 * Description: Final Project, bathroom.hpp
 * *************************************************************************************/

#ifndef BATHROOM_HPP
#define BATHROOM_HPP

#include "space.hpp"

class Bathroom: public Space
{
	private:
		string bathSpeak;

	public:
		Bathroom();
		~Bathroom();
		bool specialAction(int, Player*);
		int takeItem(int, bool);
};

#endif

