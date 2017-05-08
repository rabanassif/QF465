#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream> 
#include <fstream>
#include <cstdlib>

using namespace std;

int main(); 

class Performance
{
public:
	double sharpeRatio(double*, double*, double);
private:
	double* dividends;
	double* closings;
	double current;


};  
