#include "performance.h"
/*
performance::performance()
{
	void sharpeRatio();
}
*/
double Performance::sharpeRatio(double* dividends, double* closings, double current)
{
	//calc.buyOrShort();
	double startPrice = closings[0];
	double closePrice = closings[7];
	double returns = 0.0;
	double rf = 0.0083;
	double sharpe = 0.0;

	cout << startPrice << endl;
	cout << closePrice << endl;

	returns = (closePrice - startPrice)/ startPrice;
	sharpe = (returns - rf)/.14;

	return sharpe;

	cout << "Sharpe Ratio is: " << sharpe << endl;

}; 
