#include "Header.h"
#include <string>
using namespace std;

int main() {
	Customer person = Customer("Nodarse", "Ian", " ", "8976897", 8, false);
	Customer thing = person;
	string x = person.getLastName();
	string y = x;
}