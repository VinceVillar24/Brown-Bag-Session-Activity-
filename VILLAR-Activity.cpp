#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()

{
	int month, day, year;
	
	cout << "Enter Month: ";
	cin >> month;
	
	cout << "Enter Day: ";
	cin >> day;
	
	cout << "Enter Year: ";
	cin >> year;
	

	switch (month)
	{
	
		case 1:
		if (day <= 31)
		{
			cout << "January" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid Date!" << endl;
		}
		break;
		
		case 2:
		if (day <= 28)
		{
			cout << "February" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid Date!" << endl;
		}	
		break;
		
		case 3:
		if (day <= 31)
		{	
			cout << "March" <<" "<< day <<","<<" "<< year << endl;
		}
		else	
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 4:
		if (day <= 30)
		{
			cout << "April" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 5:
		if (day <= 31)
		{
			cout << "May" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 6:
		if (day <= 30)
		{
			cout << "June" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
     	}
	
		break;
		case 7:
		if (day <= 31)
		{
		cout << "July" <<" "<< day <<","<<" "<< year << endl;
     	}
     	else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 8:
		if (day <= 31)
		{
			cout << "August" <<" "<< day <<","<<" "<< year << endl;
		}
		else
		{
			cout << "Invalid date!" << endl;
		}
		
		break;
		
		case 9:
		if (day <= 30)
		{	
			cout << "September" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 10:
		if (day <= 31)
		{
		cout << "October" <<" "<< day <<","<<" "<< year << endl;
	    }
	    else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 11:
		if (day <= 30)
		{	
		cout << "November" <<" "<< day <<","<<" "<< year << endl;
		}
		else
		{
			cout << "Invalid date!" << endl;
		}
		break;
		
		case 12:
		if (day <= 31)
		{
			cout << "December" <<" "<< day <<","<<" "<< year << endl;
		}
		else 
		{
			cout << "Invalid date!" << endl;
		}
		break;
		default:
		cout<<"Invalid date!";
	}

return 0;
}
