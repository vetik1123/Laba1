#pragma once
#include <iostream>;
#include <math.h>;

using namespace std;

class VecLong
{
	long* l;
	int size;
	const int codeError = 0;
public:
	VecLong() : VecLong(1) {}
	VecLong(int n);
	VecLong(int n, long v);
	VecLong(VecLong& b);
	~VecLong();
	VecLong& operator++();
	VecLong& operator--();
	VecLong& operator=(VecLong& b);
	VecLong& operator+(VecLong& b);
	VecLong& operator-(VecLong& b);
	VecLong& operator*(long k);
	VecLong& operator/(long k);
	VecLong& operator%(long k);
	VecLong& operator+=(VecLong& b);
	VecLong& operator-=(VecLong& b);
	bool operator>(VecLong& b);
	bool operator>=(VecLong& b);
	bool operator<(VecLong& b);
	bool operator<=(VecLong& b);
	bool operator==(VecLong& b);
	bool operator!=(VecLong& b);
};
