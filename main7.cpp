#include <iostream>
#include <unistd.h>
#include <ctime>
#include "timer7.h"
using namespace std;
int main() {
	Timer tmr1;
	Timer tmr2(time(NULL));

	tmr1.setStart(-3);
	sleep(2);
	cout << "tmr1.start=" << tmr1.getStart()
		<< ", elapsed time =" << tmr1.getElapsedTime() << endl;
	cout << "tmr2.start=" << tmr2.getStart()
		<< ", elapsed time =" << tmr2.getElapsedTime() << endl;
	return 0;
}
