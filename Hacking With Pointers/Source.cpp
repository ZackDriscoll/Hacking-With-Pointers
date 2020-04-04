//Hacking With Pointers
//Author: Zack Driscoll

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Prototype the function
string Login(string Login1, string Login2, string Login3, string Login4, string Login5, string Login6);

int main()
{
	//Welcome and explanation of simulation
	cout << "\n\n\t\t *** Welcome *** \n";
	cout << "\nYou are a Hydra soldier attempting to hack into the Stark Industries Mainframe.";
	cout << "\nIn order to do this, you must discover which login belongs to Tony Stark.";
	cout << "\nEach login username is a memory address. Guess the correct address to successfully login to the mainframe.";
	cout << "\nYou've created this program to run before the login to help guess the correct username.";
	cout << "\nThe program will decrypt the addresses for you to attempt to login.";
	cout << "\nBelow you'll find the set of different usernames.";

	//Username List
	string Login1 = "I_l0v3_T0NY_42";
	string Login2 = "WarMachineRoxx";
	string Login3 = "Mr_StArK_D0nt_F33l_G00D_03";
	string Login4 = "JArv1s_1s_MY_C0pil0T";
	string Login5 = "ThAt_AV3NG3R_LiFE";
	string Login6 = "I_AM_IR0N_MAN_4";

	Login(Login1, Login2, Login3, Login4, Login5, Login6);

	return 0;
}

string Login(string Login1, string Login2, string Login3, string Login4, string Login5, string Login6)
{
	//List of pointers for the login info
	string *p_Login1 = &Login1;
	string *p_Login2 = &Login2;
	string *p_Login3 = &Login3;
	string *p_Login4 = &Login4;
	string *p_Login5 = &Login5;
	string *p_Login6 = &Login6;

	//Correct Login
	string StarkLogin = Login4;

	//Variable to store user input
	string UserInput;

	//Allowed number of guesses
	int guesses = 3;

	//List of printed Logins Memory Addresses
	cout << "\n\nLogin1 = " << p_Login1 << endl;
	cout << "\nLogin2 = " << p_Login2 << endl;
	cout << "\nLogin3 = " << p_Login3 << endl;
	cout << "\nLogin4 = " << p_Login4 << endl;
	cout << "\nLogin5 = " << p_Login5 << endl;
	cout << "\nLogin6 = " << p_Login6 << endl;

	//Decrypting UI
	cout << "\nDecrypting...\n\n";
	system("Pause");

	//Decrypted Login Memory Addresses
	cout << "\n\nLogin1 = " << Login1 << endl;
	cout << "\nLogin2 = " << Login2 << endl;
	cout << "\nLogin3 = " << Login3 << endl;
	cout << "\nLogin4 = " << Login4 << endl;
	cout << "\nLogin5 = " << Login5 << endl;
	cout << "\nLogin6 = " << Login6 << endl;
	
	//Loop to allow user to log in
	do
	{
		//Intro to the Stark Mainframe UI
		cout << "\n\n\t\t *** Welcome to the Stark Industries Mainframe *** \n";
		cout << "\n\nPlease Login. ";

		getline(cin, UserInput);

		if (UserInput == StarkLogin)
		{
			//Set guesses equal to zero to end login attempts
			guesses = 0;

			//Mainframe Success UI
			cout << "\n\nLogin Successful. Welcome Mr. Stark.";

			//Mission Success UI
			cout << "\n\nYou've successfully hacked into the Stark Industries Mainframe. Hydra thanks you for your service.";
		}
		else if (UserInput != StarkLogin)
		{
			//Mainframe "Incorrect" UI
			cout << "\n\nLogin failed.";

			//Take away the number of guesses for failing the login
			guesses -= 1;
		}

		if (guesses <= 0 && UserInput != StarkLogin)
		{
			//Failed to login
			cout << "\n\nError: Too many failed attempts. You are locked out of the Stark Industries Mainframe.\n\n\n";
		}
	} while (guesses > 0);

	return "";
}