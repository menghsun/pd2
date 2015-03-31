#include <iostream>
#include "Timer.h"
#include "Clock.h"

void printStart(Timer & t)
{
	cout << "Start time is ";
	cout << t.getStart();
	cout << " seconds since 1970/1/1 00:00:00. \n";
}
void printStart(Clock & c)
{
	cout << "Start time is ";
	cout << c.getStart();
	cout << "virtual clocks since the program executes. \n"; 
}

int main()
{
	Timer tmr;
	Clock clk;

	tmr.start();
	clk.start();

	printStart(tmr);
	printStart(clk);
	return 0;
}
