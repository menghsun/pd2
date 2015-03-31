#include <ctime>
using namespace std;
class Timer {
public:
	Timer();
	Timer(time_t s);
	void setStart(time_t start_ts);
	time_t getStart();
	void start();
	int getElapsedTime();
private:
	time_t start_ts;
};
