#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string name;
	int age, kg;
	while (cin >> name >> age >> kg) {
		if (name == "#" && !age && !kg)
			break;
		else if (age > 17 || kg >= 80)
			cout << name << " Senior\n";
		else
			cout << name << " Junior\n";
	}
}