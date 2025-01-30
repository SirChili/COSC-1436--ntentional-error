// A00608204
// COSC-1436-001


#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int JokePunchLine;
int rep = 0;

int main()
{
	while (rep == 0)
	{
		srand(time(0));
		cout << "Knock Knock" << endl;
		system("PAUSE");
		cout << "whos there?" << endl;

		JokePunchLine = rand() % 10 + 1;
		cout << JokePunchLine << endl;
		if (JokePunchLine == 12)
		{
			cout << "Orange" << endl;
			system("PAUSE");
			
			cout << "Orange Who?" << endl;
			system("PAUSE");
			
			cout << "Orange you glad i didnt say banana?" << endl;
			system("PAUSE");

			rep = 1;
		}
		else
		{
			cout << "Banana" << endl;
			system("PAUSE");

			cout << "Banana Who?" << endl;
			system("PAUSE");
		}

	}
	return 0;
}