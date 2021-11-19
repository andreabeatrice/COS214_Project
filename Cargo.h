#ifndef CARGO_H
#define CARGO_H

class Cargo
{
public:
	int weight;
	Cargo();
	Cargo(int);
	virtual Cargo* clone(int);
};

#endif