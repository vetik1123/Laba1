#include "Vector.h"
#include <math.h>;
#include <iostream>;

using namespace std;

VecLong::VecLong(int n) 
{
	size = n;
	l = new long[size];
	for (int i(0); i < size; l++)
		l[i] = 0;
}

VecLong::VecLong(int n, long v)
{
	size = n;
	l = new long[size];
	for (int i(0); i < size; l++)
		l[i] = v;
}

VecLong::VecLong(VecLong& b)
{
	size = b.size;
	if (l)
		delete l;
	for (int i(0); i < size; i++)
		l[i] = b.l[i];
}

VecLong::~VecLong()
{
	size = 0;
	if (l)
		delete l;
}

VecLong& VecLong::operator++()
{
	if (l==0)
	{
		cout << "Vector are []\n";
		return *this;
	}
	for (int i(0); i < size ; i++)
		l[i] += 1;
	return *this;
}

VecLong& VecLong::operator--()
{
	if (l == 0)
	{
		cout << "Vector are []\n";
		return *this;
	}
	for (int i(0); i < size; i++)
		l[i] -= 1;
	return *this;
}

VecLong& VecLong::operator+(VecLong& b)
{
	VecLong c(size);
	if (size != b.size)
	{
		cout << "Different sizes of vectors\n";
		return *this;
	}
	for (int i(0); i < size; i++)
		c.l[i] = l[i] + b.l[i];
	return c;
}

VecLong& VecLong::operator-(VecLong& b)
{
	VecLong c(size);
	if (size != b.size)
	{
		cout << "Different sizes of vectors\n";
		return *this;
	}
	for (int i(0); i < size; i++)
		c.l[i] = l[i] - b.l[i];

	return c;
}

VecLong& VecLong::operator=(VecLong& b)
{
	size = b.size;
	if (l)
		delete l;
	l = new long[size];
	for (int i(0); i < size; i++)
		l[i] = b.l[i];

	return *this;
}

VecLong& VecLong::operator*(long k)
{
	if (!l)
	{
		cout << "Vector is []";
		return *this;
	}
	VecLong c(size);
	for (int i(0); i < size; i++)
		c.l[i] = l[i] * k;

	return c;
}

VecLong& VecLong::operator/(long k)
{
	if (!l)
	{
		cout << "Vector is []";
		return *this;
	}
	if (k == 0)
	{
		cout << "Division by 0";
		return *this;
	}
	VecLong c(size);
	for (int i(0); i < size; i++)
		c.l[i] = l[i] / k;

	return c;
}

VecLong& VecLong::operator%(long k)
{
	if (!l)
	{
		cout << "Vector is []";
		return *this;
	}
	if (k == 0)
	{
		cout << "Division by 0";
		return *this;
	}
	VecLong c(size);
	for (int i(0); i < size; i++)
		c.l[i] = l[i] % k;

	return c;
}

VecLong& VecLong::operator+=(VecLong& b)
{
	if (size != b.size)
	{
		cout << "Different sizes of vectors\n";
		return *this;
	}
	for (int i(0); i < size; i++)
		l[i] = l[i] + b.l[i];

	return *this;
}

VecLong& VecLong::operator-=(VecLong& b)
{
	if (size != b.size)
	{
		cout << "Different sizes of vectors\n";
		return *this;
	}
	for (int i(0); i < size; i++)
		l[i] = l[i] - b.l[i];

	return *this;
}

bool VecLong::operator<(VecLong& b)
{
	if (size < b.size)
		return true;
	else if (size > b.size)
		return false;
	for (int i(0); i < size; i++)
	{
		if (l[i] > b.l[i]||l[i]==b.l[i])
			return false;
	}
	return true;
}

bool VecLong::operator<=(VecLong& b)
{
	if (size < b.size)
		return true;
	else if (size > b.size)
		return false;
	for (int i(0); i < size; i++)
	{
		if (l[i] > b.l[i])
			return false;
	}
	return true;
}

bool VecLong::operator==(VecLong& b)
{
	if (size < b.size)
		return true;
	else if (size > b.size)
		return false;
	for (int i(0); i < size; i++)
	{
		if (l[i] != b.l[i])
			return false;
	}
	return true;
}

bool VecLong::operator>(VecLong& b)
{
	if (size > b.size)
		return true;
	else if (size < b.size)
		return false;
	for (int i(0); i < size; i++)
	{
		if (l[i] < b.l[i])
			return false;
	}
	return true;
}

bool VecLong::operator>=(VecLong& b)
{
	if (size > b.size)
		return true;
	else if (size < b.size)
		return false;
	for (int i(0); i < size; i++)
	{
		if (l[i] < b.l[i] || l[i] == b.l[i])
			return false;
	}
	return true;
}

bool VecLong::operator!=(VecLong& b)
{
	if (size != b.size)
		return true;
	for (int i(0); i < size; i++)
	{
		if (l[i] == b.l[i])
			return false;
	}
	return true;
}
