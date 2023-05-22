#include <iostream>

using namespace std;

class Monitor {
public:
	int hz;
	int diagonal;
	double price;
};


int main() {
	srand(time(NULL));
	Monitor monitor1;
	Monitor monitor2;

	monitor1.diagonal = rand() % 2000;
	monitor2.diagonal = rand() % 2000;

	monitor1.hz = rand() % 145;
	monitor2.hz = rand() % 145;

	monitor1.price = rand() % 10000;
	monitor2.price = rand() % 10000;

	string msg_diagonal = monitor1.diagonal > monitor2.diagonal ? "In first monitor the big diagonal" : "In second monitor the big diagonal";

	string msg_hz = monitor1.hz > monitor2.hz ? "In first monitor the best hz" : "In second monitor the best hz";

	int all_price = monitor2.price + monitor2.price;

	cout << msg_diagonal << " and " << msg_hz << ", Price in two monitors: " << all_price << endl;
	return 0;
}