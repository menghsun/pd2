#include <iostream>
#include <ctime>
using namespace std;
class Timer {
public:
	Timer() {
		start_ts = 0;
	}
	Timer(time_t ts) {
		setStart(ts);
	}
	void start() {
		start_ts = time(NULL);
	}
	void setStart(time_t ts) {
		start_ts = ts;
	}
	time_t getStart() {
		return start_ts;
	}
	int getElapsedTime() {
		return time(NULL) - getStart();
	}
private:
	time_t start_ts;
};
