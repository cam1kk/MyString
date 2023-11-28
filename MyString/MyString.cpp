#include <iostream>
#include "MyString.h"
#define Str String
using namespace std;

int main() {
	Str str1;
	Str str2(20);
	Str str3 = String("Vizdoravlivayte!");

	str1.cinstr();
	str2.cinstr();

	str1.coutstr();
	str2.coutstr();
	str3.coutstr();
}