#include <iostream>
using namespace std;
/*программа является учебной*/
int main()
{
    int x, y, sum, pr, razn, chastn;

    setlocale(LC_ALL, "Russian");
    cout << "Enter two numbers:\n ";
    cin >> x >> y;
	sum = x + y;
	razn = x - y;
	del = x / y;
	cout << "Sum of numbers: " << sum ;
	cout << "Raznost` of numbers: " << razn ;
	cout << "Delenie of numbers: " << del ;

    return 0;
}
