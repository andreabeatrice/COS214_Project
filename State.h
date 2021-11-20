#ifndef STATE_H
#define STATE_H

#include <iostream>
using namespace std;

class State {
	private:
		int health;
		int cost;
	public:
		State();
		int getH();
		int getC();
		void setH(int);
		void setC(int);
};

#endif