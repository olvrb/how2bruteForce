// how2bruteForce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int square(int n)
{
	int k = 0;
	while (true)
	{
		if (k == n*n)
		{
			return k;
		}
		k++;
	}
}

int main()
{
	for (double i = 0;; i++)
	{
		int cukc = square(i);
		cout << cukc << endl;
	}
	
	return 0;
}


