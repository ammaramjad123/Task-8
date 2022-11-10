#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	employee e1;
	e1.setfirstname("Ammar");
	e1.setlastname("Amjad");
	
	e1.sethourlyrate(200);
	e1.sethours(62);
	e1.printpayroll();
	e1.addsalary();
	e1.addwork();

	system("pause");
	return 0;

}