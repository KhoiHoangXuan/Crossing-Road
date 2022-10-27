#include "menu.h"

int main()
{
	system("Color 7");
	menu start;
	char input;
	int num;
	cout << "Nhap cai choi: ";
	cin >> num;
	input = num;
	//cout << (int)input << endl;
	///*input = num + '0';
	//cout << (int)input << endl;*/
	//start.setChoice(input);
	//start.printChoice();
	start.printTitle();
	return 0;
}