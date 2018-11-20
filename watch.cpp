#include <iostream>
#include <string>
using namespace std;

class watch
{
	public:
		int hour;
		int minute;
		int second;
		watch(int h, int m, int s)
		{
			hour=h;
			minute=m;
			second=s;
		}

void getTime(){
	cout << "What time is it? " << hour << "hour " << minute << "minute " << second << "second." << endl;
}
};

int main()
{	watch w(3, 26, 53);
	w.getTime();

	return 0;
}
