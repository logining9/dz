#include <iostream> 
#include <map>
using namespace std;

class Film {
private:
	struct film
	{
		string text;
		string date;
	};
	map<string, film> films;
public:
	bool menu();
	void add();
	void del();
	void print_all();
};

void start();