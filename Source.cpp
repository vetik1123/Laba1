#include <iostream>
#include <stdio.h>
#include <fstream>
#include <ios>
#include <vector>
#include <time.h>

using namespace std;

typedef double* pDouble;

void Maximum(double A[], double x)
{
	int i=0;
	double maximum = 0;
	while (A[i] > x)
	{
		if (A[i] < 0)
		{
			if (maximum == 0)
			{
				maximum = A[i];
			}
			else if (A[i] > maximum)
			{
				maximum = A[i];
			}
		}
		i++;
	}

	cout << "Maximum: " << maximum;

}

void Ex(double A[], int n)
{
	double B[100];
	int m=0;

	for (int i = 0, j = 0; i < n; i++)
	{
		if (A[i] != 0)
		{
			B[j] = A[i];
			j++;
			m++;
		}
	}

	cout << "New arrey without 0:\n";

	for (int i = 0; i < m; i++)
	{
		cout << "B[" << i << "]:" << B[i] << "\n";
	}
}

int Ex1a()
{
	double A[100];
	int n;
	int m=0;

	cout << "Input size: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]: "; cin >> A[i];
	}

	cout << "Exercise 1\n\n";

	Ex(A, n);

	double x;
	cout << "Exercise 2\n\n";
	cout << "Input x: "; cin >> x;

	Maximum(A, x);

	return n;
}

int Ex1b()
{
	int n;

	pDouble pA;

	cout << "Input size: ";
	cin >> n;

	pA = (double*)calloc(n, sizeof(double));  
	if (pA == nullptr) 
	{ 
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << " Array[ " << i << "] "; 
		cin >> pA[i];
	}

	cout << "Ex 1\n\n";

	Ex(pA, n);

	double x;

	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	Maximum(pA, x);

	return n;
	
}

int Ex1c()
{
	pDouble pA;
	int n;

	cout << "Input size: ";
	cin >> n;

	pA = new double[n];
	if (pA == nullptr) 
	{ 
		return 0; 
	}
	for (int i = 0; i < n; i++) 
	{
		cout << " Array[ " << i << "] "; 
		cin >> pA[i];
	}

	cout << "Ex 1:\n\n";
	Ex(pA, n);

	double x;

	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	Maximum(pA, x);

	return n;
}

int Ex1d()
{
	vector<double> A;
	int n;
	double d;

	cout << "Input size: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> d;
		A.push_back(d);
	}

	cout << "Ex1:\n\n";

	vector<double> B;
	int m = 0;

	for (int i = 0, j = 0; i < n; i++)
	{
		if (A.at(i) != 0)
		{
			B.push_back(A.at(i));
			j++;
			m++;
		}
	}

	cout << "New arrey without 0:\n";

	for (int i = 0; i < m; i++)
	{
		cout << "B[" << i << "]:" << B.at(i) << "\n";
	}


	double x;

	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	int i = 0;
	double maximum = 0;
	while (A.at(i) > x)
	{
		if (A.at(i) < 0)
		{
			if (maximum == 0)
			{
				maximum = A.at(i);
			}
			else if (A.at(i) > maximum)
			{
				maximum = A.at(i);
			}
		}
		i++;
	}

	cout << "Maximum: " << maximum;

	return n;
}

void Ex2a()
{
	double A[100], B[100];
	int n;
	int r1 = 0, r2 = 0;

	cout << "Input size: ";
	cin >> n;

	srand(n);
	for (int i = 0; i < n; i++)
	{
		r1 = rand();
		r2 = rand();
		A[i] = 100.0 * r1;
		A[i] = A[i] / (1.0 + r2);
		cout << A[i] << "   ";
	}

	cout << "Ex 1\n\n";
	Ex(A, n);

	double x;
	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	Maximum(A, x);
}

void Ex2b()
{
	int n, r1=0, r2=0;
	pDouble pA;

	cout << "Input size: ";
	cin >> n;
	srand(n);

	pA = (double*)calloc(n, sizeof(double));
	if (pA == nullptr)
	{
		cout << "0";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			r1 = rand();
			r2 = rand();
			pA[i] = 100.0 * r1;
			pA[i] = pA[i] / (1.0 + r2);
			cout << pA[i] << "   ";
		}

		cout << "Ex 1\n\n";
		Ex(pA, n);

		double x;
		cout << "Ex 2\n\n";
		cout << "Input x: ";
		cin >> x;
		Maximum(pA, x);
	}
	
}
void Ex2c()
{
	pDouble pA;
	int n, r1=0, r2=0;

	cout << "Input size: ";
	cin >> n;
	srand(n);

	pA = new double[n];
	if (pA == nullptr)
	{
		cout<<"0";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			r1 = rand();
			r2 = rand();
			pA[i] = 100.0 * r1;
			pA[i] = pA[i] / (1.0 + r2);
			cout << pA[i] << "   ";
		}

		cout << "Ex 1:\n\n";
		Ex(pA, n);

		double x;

		cout << "Ex 2\n\n";
		cout << "Input x: ";
		cin >> x;

		Maximum(pA, x);
	}
}
void Ex2d()
{
	vector<double> A;
	int n, r1=0, r2=0;
	double d;

	cout << "Input size: ";
	cin >> n;
	srand(n);

	for (int i = 0; i < n; i++)
	{
		r1 = rand();
		r2 = rand();
		d = 100.0 * r1;
		d = d / (1.0 + r2);
		A.push_back(d);
		cout << "A[" << i << "]: " << d << endl;
	}

	cout << "Ex1:\n\n";

	vector<double> B;
	int m = 0;

	for (int i = 0, j = 0; i < n; i++)
	{
		if (A.at(i) != 0)
		{
			B.push_back(A.at(i));
			j++;
			m++;
		}
	}

	cout << "New arrey without 0:\n";

	for (int i = 0; i < m; i++)
	{
		cout << "B[" << i << "]:" << B.at(i) << "\n";
	}


	double x;

	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	int i = 0;
	double maximum = 0;
	while (A.at(i) > x)
	{
		if (A.at(i) < 0)
		{
			if (maximum == 0)
			{
				maximum = A.at(i);
			}
			else if (A.at(i) > maximum)
			{
				maximum = A.at(i);
			}
		}
		i++;
	}

	cout << "Maximum: " << maximum;
}
int FileFromRand()
{
	double A[100];
	int n, r1 = 0, r2 = 0;

	cout << "Input size: ";
	cin >> n;
	srand(n);
	
	ofstream fout("arrey.txt");
	if (fout.fail()) 
		return 0;
	fout << n << endl;
	for (int i = 0; i < n; i++)
	{
		r1 = rand();
		r2 = rand();
		A[i] = 100.0 * r1;
		A[i] = A[i] / (1.0 + r2);
		fout << A[i] << "   ";
	}
		
	fout.close();
	
	return n;
}
void Ex3a()
{
	double A[100];
	int n, size;

	n = FileFromRand();

	ifstream fin("arrey.txt");
	if (fin.fail()) 
		return;
	fin >> size;
	if (size <= 0) 
		return;
	if (size > n) 
		size = n;
	for (int i = 0; i < n; i++)
	{
		fin >> A[i];
		cout << "A[" << i << "]: " << A[i];
	}
	fin.close();

	cout << "Ex 1\n\n";
	Ex(A, n);

	double x;
	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;
	Maximum(A, x);
}

void Ex3b()
{
	pDouble pA;
	int n, size;

	n = FileFromRand();

	ifstream fin("arrey.txt");
	if (fin.fail())
		return;
	fin >> size;
	if (size <= 0)
		return;
	if (size > n)
		size = n;
	pA = (double*)calloc(n, sizeof(double));
	for (int i = 0; i < n; i++)
	{
		fin >> pA[i];
		cout << "A[" << i << "]: " << pA[i];
	}
	fin.close();

	cout << "Ex 1\n\n";
	Ex(pA, n);

	double x;
	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;
	Maximum(pA, x);
}
void Ex3c()
{
	pDouble pA;
	int n, size;

	n = FileFromRand();

	ifstream fin("arrey.txt");
	if (fin.fail())
		return;
	fin >> size;
	if (size <= 0)
		return;
	if (size > n)
		size = n;
	pA = new double[n];
	if (pA == nullptr)
		return;
	for (int i = 0; i < n; i++)
	{
		fin >> pA[i];
		cout << "A[" << i << "]: " << pA[i];
	}
	fin.close();

	cout << "Ex 1\n\n";
	Ex(pA, n);

	double x;
	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;
	Maximum(pA, x);
}
void Ex3d()
{
	vector<double> A;
	double d;
	int n, size;

	n = FileFromRand();

	ifstream fin("arrey.txt");
	if (fin.fail())
		return;
	fin >> size;
	if (size <= 0)
		return;
	if (size > n)
		size = n;
	for (int i = 0; i < n; i++)
	{
		fin >> d;
		A.push_back(d);
		cout << "A[" << i << "]: " << d;
	}
	fin.close();

	cout << "Ex1:\n\n";

	vector<double> B;
	int m = 0;

	for (int i = 0, j = 0; i < n; i++)
	{
		if (A.at(i) != 0)
		{
			B.push_back(A.at(i));
			j++;
			m++;
		}
	}

	cout << "New arrey without 0:\n";

	for (int i = 0; i < m; i++)
	{
		cout << "B[" << i << "]:" << B.at(i) << "\n";
	}


	double x;

	cout << "Ex 2\n\n";
	cout << "Input x: ";
	cin >> x;

	int i = 0;
	double maximum = 0;
	while (A.at(i) > x)
	{
		if (A.at(i) < 0)
		{
			if (maximum == 0)
			{
				maximum = A.at(i);
			}
			else if (A.at(i) > maximum)
			{
				maximum = A.at(i);
			}
		}
		i++;
	}

	cout << "Maximum: " << maximum;
}

void Menu()
{
	cout << "1. Consol\n";
	cout << "2. Random\n";
	cout << "3. Text File\n\n";
}

void Menu1()
{
	cout << "1. Static array.\n";
	cout << "2. Dinamic array (calloc).\n";
	cout << "3. Dinamic array (new).\n";
	cout << "4. Vector.\n\n";
}

int main()
{
	char c = 'y';
	int k, v;

	while (c == 'y')
	{
		Menu();
		cout << "Number(1,2,3): ";
		cin >> k;
		if (k == 1)
		{
			Menu1();
			cout << "Number: ";
			cin >> v;
			if (v == 1)
				Ex1a();
			else if (v == 2)
				Ex1b();
			else if (v == 3)
				Ex1c();
			else if (v == 4)
				Ex1d();
		}
		else if (k == 2)
		{
			Menu1();
			cout << "Number: ";
			cin >> v;
			if (v == 1)
				Ex2a();
			else if (v == 2)
				Ex2b();
			else if (v == 3)
				Ex2c();
			else if (v == 4)
				Ex2d();
		}
		else if (k == 3)
		{
			Menu1();
			cout << "Number: ";
			cin >> v;
			if (v == 1)
				Ex3a();
			else if (v == 2)
				Ex3b();
			else if (v == 3)
				Ex3c();
			else if (v == 4)
				Ex3d();
		}
		cout << "If you wont chuse another Ex, enter 'y'";
		cin >> c;
	}

	cout << "That's all...";
}