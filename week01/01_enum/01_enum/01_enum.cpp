#include <algorithm>
#include <vector>
#include <fstream>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
enum AccessLevel {
	Guest,
	User,
	Moderator,
	Admin
};

int main() {
	AccessLevel ali = Guest;
	AccessLevel reza = Admin;
	AccessLevel sara = Moderator;
	cout << "Ali access level: ";
	switch (ali)
	{
	case Guest:
		cout << "Public viewing only.- [Guest] \n";
		break;
	case User:
		cout << "View basic information. [User] \n";
		break;
	case Moderator:
		cout << "Control the comments section. [Moderator] \n";
		break;
	case Admin:
		cout << "Full access to the system. [Admin] \n";
		break;
	default:
		cout << " you entred wrong username or password. \n";
		break;
	}
	cout << "Reza access level: ";
	switch (reza)
	{
	case Guest:
		cout << "Public viewing only.- [Guest] \n";
		break;
	case User:
		cout << "View basic information. [User] \n";
		break;
	case Moderator:
		cout << "Control the comments section. [Moderator] \n";
		break;
	case Admin:
		cout << "Full access to the system. [Admin] \n";
		break;
	default:
		cout << " you entred wrong username or password. \n";
		break;
	}
	cout << "Sara access level :";
	switch (sara)
	{
	case Guest:
		cout << "Public viewing only.- [Guest] \n";
		break;
	case User:
		cout << "View basic information. [User] \n";
		break;
	case Moderator:
		cout << "Control the comments section. [Moderator] \n";
		break;
	case Admin:
		cout << "Full access to the system. [Admin] \n";
		break;
	default:
		cout << " you entred wrong username or password. \n";
		break;
	}
	return 0;
}