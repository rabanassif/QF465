#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>
#include <fstream>
#include "TestStrategy.h"
using namespace std;

strategy::strategy()
{
	void buyOrShort();
}


void strategy::buyOrShort()
{
        double dividends [8] = {.31,.30,.28,.29,.33,.32,.31,.30};
        double closings [8] = {41.23, 42.98, 44.67, 43.11, 42.56, 40.09, 39.45, 41.88};
        double current = 3.2;
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
                year2sum = year2sum + dividends[b];
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

        cout << yields << endl;
        cout << average_yield <<endl;
        cout << year1sum << endl;
        cout << year2sum << endl;

        if (current >= (average_yield * 1.341))
        {
			cout << "BUY" << endl;
        }
        else if (current <= (average_yield * .659))
        {
            cout << "SHORT" << endl;
        }
        else
        {
                cout << "the yield is within one standard deviation of the mean" << endl;
        }

};
