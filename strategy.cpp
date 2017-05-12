#include "strategy.h"

int Strategy::Run(double* dividends, double* closings, double current)
{
	double yields [8];
	double year1sum = 0;
	double year2sum = 0;
	double average_yield = 0;

	for (int a = 0; a < 4; a++)
	{
		year1sum = year1sum + dividends[a];
	}

	for (int b = 4; b < 8; b++)
	{
		year2sum = year2sum +dividends[b];
	}

	for (int c = 0; c < 4; c++)
	{
		yields[c] = year1sum / closings[c];
	}

	for (int d = 4; d < 8; d++)
	{
		yields[d] = year2sum / closings[d];
	}

	for (int e = 0; e < 8; e++)
	{
		average_yield = average_yield + yields[e];
	}
	
	average_yield = (average_yield * 100) / 8;

	cout << "The Average yield for 2 years is: " << average_yield <<endl;
	cout << "The Current yield is: " << current << endl;

	if (current >= (average_yield * 1.341))
	{
		cout << "Current yield is higher than one standard deviation of the 2 year mean: Buy" << endl;
		return 1;
	}
	else if (current <= (average_yield * .659))
	{
		cout << "Current yield is lower than one standard deviation of the 2 year mean: Short" << endl;
		return -1;
	}
	else
	{
		cout << "Current yield is within one standard deviation of the 2 year mean. No consensus. " << endl;
		return 0;
	}
};
