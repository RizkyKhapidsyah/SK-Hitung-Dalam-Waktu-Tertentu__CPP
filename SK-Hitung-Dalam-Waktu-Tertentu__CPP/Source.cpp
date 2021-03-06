#include <iostream>
#include <conio.h>

using namespace std;

unsigned long int calcualteSeconds(unsigned int hours, unsigned int minutes, unsigned int seconds) {
	unsigned long calSec = 0;

	calSec = hours * 60 * 60;
	calSec = calSec + minutes * 60;
	calSec = calSec + seconds;
	return calSec;
}

int main() {
	unsigned int hours, minutes, seconds;
	unsigned long int CalculateSeconds = 0;

	cout << "\n Input jam : ";
	cin >> hours;

	cout << "\n Input menit : ";
	cin >> minutes;

	cout << "\n Input detik : ";
	cin >> seconds;

	CalculateSeconds = calcualteSeconds(hours, minutes, seconds);
	cout << "\n Jumlah detiknya adalah : " << CalculateSeconds;

	_getch();
	return 0;
}