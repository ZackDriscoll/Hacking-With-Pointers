//Hacking With Pointers
//Author: Zack Driscoll

#include <iostream>

using namespace std;

//Prototype the function
string Login(string Login1, string Login2, string Login3, string Login4, string Login5, string Login6);

int main()
{
	//Welcome and explanation of simulation
	cout << "\n\n\t\t *** Welcome *** \n";
	cout << "\nYou are a Hydra soldier attempting to hack into the Star Industries Mainframe.";
	cout << "\nIn order to do this, you must discover which login belongs to Tony Stark.";
	cout << "\nEach login username is a memory address. Guess the correct address to successfully login to the mainframe.";
	cout << "\nYou've created this program to run before the login to help guess the correct username.";
	cout << "\nBelow you'll find the set of different usernames.";

	//Username List
	string Login1;
	string Login2;
	string Login3;
	string Login4;
	string Login5;
	string Login6;

	Login(Login1, Login2, Login3, Login4, Login5, Login6);

	return 0;
}

string Login(string Login1, string Login2, string Login3, string Login4, string Login5, string Login6)
{
	string *p_Login1 = &Login1;
	string *p_Login2 = &Login2;
	string *p_Login3 = &Login3;
	string *p_Login4 = &Login4;
	string *p_Login5 = &Login5;
	string *p_Login6 = &Login6;

	cout << "\nLogin1 = " << p_Login1 << endl;
	cout << "\nLogin2 = " << p_Login2 << endl;
	cout << "\nLogin3 = " << p_Login3 << endl;
	cout << "\nLogin4 = " << p_Login4 << endl;
	cout << "\nLogin5 = " << p_Login5 << endl;
	cout << "\nLogin6 = " << p_Login6 << endl;
	
}