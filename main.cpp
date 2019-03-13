#include <iostream>

using namespace std;

int func(int x, int y)
{
	while(x!=y)
	{
		if(x>y)
		x -= y;
		else
		y -= x;
	}
	return x;
}

int main()
{
	int x,y;
	cout << "wprowadz x: " << endl;
	cin >> x;
	cout << "wprowadz y: " << endl;
	cin >> y;
	cout << "NWD wynosi " << func(x,y) << endl << endl;
	cout << "NWW wynosi " << (x*y)/func(x,y);
	return 0;
}
