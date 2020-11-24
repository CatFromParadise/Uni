#include <iostream> 
#include <iomanip> 
#include <cmath>

using namespace std;

void main() 
{
	double x, y;
	cout << "Enter x" << endl;
	cin >> x;
	do {
		y = pow(x, 5) + pow(2 * x, 2) - 3;
		x=x+0.2;
		cout <<left<<"y="<< y<<endl;
	}
	while (x >= 2 && x <= 4);
	//5) внести зміни у отриману версію локального репозиторію, зафіксувати їх та завантажити на віддалений репозиторій;
}
