# QF465
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>     
#include <fstream>
#include <cstdlib>
#include <string>

Trading Strategy using Dividends

using namespace std;

class Strategy
{
public:
	int Run(double*, double*, double);
private:
	double* dividends;
	double* closings;
	double current;
};
