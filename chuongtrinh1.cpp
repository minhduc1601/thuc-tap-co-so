#include<stdio.h>
#include<iostream>

using namespace std;

void mainmenu();

class management
{
	public:
		management()
		{
			mainmenu();
		}
};
void mainmenu()
{ 
	int choice;
	int back;

 cout<<"\n\n\t\t(a) Press 0 to Exit."<<endl;
 cout<<"\t\t(b) Press 1 to Login as admin."<<endl;
 cout<<"\t\t(c) Press 2 to Register as admin."<<endl;
 cout<<"\t\t(d) Press 3 to Login as Passenger."<<endl;
 cout<<"\t\t(e) Press 4 to Register as Passenger."<<endl;
 cout<<"\t\t(f) Press 5 to Display the User Manual."<<endl;
 cout<<"\t\tEnter the desired option:    ";
 cin>>choice;
 if(choice > 5)
 {
 	printf("Invalid Choice");
 }
 else
 switch(choice)
 {
 	case 0:
 		{
 			cout<<"________THANK-YOU_______"<<endl;
			break;
		 }
    case 2:
    	{
    		cout<<" .d8b.  d8888b. .88b  d88. d888888b d8b   db      .d8888. d888888b  d888b  d8b   db db    db d8888b."<<endl;
    		cout<<"d8' `8b 88  `8D 88'YbdP`88   `88'   888o  88      88'  YP   `88'   88' Y8b 888o  88 88    88 88  `8D"<<endl;
    		cout<<"88ooo88 88   88 88  88  88    88    88V8o 88      `8bo.      88    88      88V8o 88 88    88 88oodD'"<<endl;
    		cout<<"88~~~88 88   88 88  88  88    88    88 V8o88        `Y8b.    88    88  ooo 88 V8o88 88    88 88~~~  "<<endl;
    		cout<<"88   88 88  .8D 88  88  88   .88.   88  V888      db   8D   .88.   88. ~8~ 88  V888 88b  d88 88     "<<endl;
    		cout<<"YP   YP Y8888D' YP  YP  YP Y888888P VP   V8P      `8888Y' Y888888P  Y888P  VP   V8P ~Y8888P' 88     "<<endl;
    		cout<<"Press any key to go back to main menu:";
    		cin>>back;
    		if(back==1)
    		{
    			mainmenu();
			}
			else 
			{
				mainmenu();
			}
    		break;
		}
	case 1:
		{
			cout<<" .d8b.  d8888b. .88b  d88. d888888b d8b   db      db       .d88b.   d888b  d888888b d8b   db"<<endl;
			cout<<"d8' `8b 88  `8D 88'YbdP`88   `88'   888o  88      88      .8P  Y8. 88' Y8b   `88'   888o  88"<<endl;
			cout<<"88ooo88 88   88 88  88  88    88    88V8o 88      88      88    88 88         88    88V8o 88"<<endl;
			cout<<"88~~~88 88   88 88  88  88    88    88 V8o88      88      88    88 88  ooo    88    88 V8o88"<<endl;
			cout<<"88   88 88  .8D 88  88  88   .88.   88  V888      88booo. `8b  d8' 88. ~8~   .88.   88  V888"<<endl;
			cout<<"YP   YP Y8888D' YP  YP  YP Y888888P VP   V8P      Y88888P  `Y88P'   Y888P  Y888888P VP   V8P"<<endl;
			cout<<"Press any key to go back to main menu:";
    		cin>>back;
    		if(back==1)
    		{
    			mainmenu();
			}
			else 
			{
				mainmenu();
			}
			break;
		}
	case 3:
		{
			cout<<" .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.      db       .d88b.   d888b  d888888b d8b   db"<<endl;
			cout<<"d8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D      88      .8P  Y8. 88' Y8b   `88'   888o  88"<<endl;
			cout<<"8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'      88      88    88 88         88    88V8o 88"<<endl;
			cout<<"8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b        88      88    88 88  ooo    88    88 V8o88"<<endl;
			cout<<"Y8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.      88booo. `8b  d8' 88. ~8~   .88.   88  V888"<<endl;
			cout<<" `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD      Y88888P  `Y88P'   Y888P  Y888888P VP   V8P"<<endl;
			cout<<"Press any key to go back to main menu:";
    		cin>>back;
    		if(back==1)
    		{
    			mainmenu();
			}
			else 
			{
				mainmenu();
			}
			break;
		}
	case 4:
		{
			cout<<" .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.      .d8888. d888888b  d888b  d8b   db db    db d8888b."<<endl;
			cout<<"d8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D      88'  YP   `88'   88' Y8b 888o  88 88    88 88  `8D"<<endl;
			cout<<"8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'      `8bo.      88    88      88V8o 88 88    88 88oodD'"<<endl;
			cout<<"8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b          `Y8b.    88    88  ooo 88 V8o88 88    88 88~~~  "<<endl;
			cout<<"Y8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.      db   8D   .88.   88. ~8~ 88  V888 88b  d88 88     "<<endl;
			cout<<" `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD      `8888Y' Y888888P  Y888P  VP   V8P ~Y8888P' 88     "<<endl;
			cout<<"Press any key to go back to main menu:";
    		cin>>back;
    		if(back==1)
    		{
    			mainmenu();
			}
			else 
			{
				mainmenu();
			}
			break;
	
		}
	case 5:
		{
		}
 }
                                                                                                                                                                                                       
}
int main()
{
 cout<<"888       888          888                                                888                   888888b           d8888 888     888              d8888 d8b         888 d8b"<<endl;
 cout<<"888   o   888          888                                                888                   888   88b        d88888 888     888             d88888 Y8P         888 Y8P"<<endl;
 cout<<"888  d8b  888          888                                                888                   888   88P       d88P888 888     888            d88P888             888 "<<endl;
 cout<<"888 d888b 888  .d88b.  888  .d8888b  .d88b.  88888b.d88b.   .d88b.        888888  .d88b.        8888888K.      d88P 888 Y88b   d88P           d88P 888 888 888d888 888 888 88888b.   .d88b.  .d8888b "<<endl;
 cout<<"888d88888b888 d8P  Y8b 888 d88P     d88  88b 888  888  88b d8P  Y8b       888    d88  88b       888   Y88b    d88P  888  Y88b d88P           d88P  888 888 888P    888 888 888  88b d8P  Y8b 88K     "<<endl;
 cout<<"88888P Y88888 88888888 888 888      888  888 888  888  888 88888888       888    888  888       888    888   d88P   888   Y88o88P           d88P   888 888 888     888 888 888  888 88888888  Y8888b."<<endl;
 cout<<"8888P   Y8888 Y8b.     888 Y88b.    Y88..88P 888  888  888 Y8b.           Y88b.  Y88..88P       888   d88P  d8888888888    Y888P           d8888888888 888 888     888 888 888  888 Y8b.          X88"<<endl;
 cout<<"888P     Y888   Y8888  888   Y8888P   Y88P   888  888  888   Y8888          Y888   Y88P         8888888P   d88P     888     Y8P           d88P     888 888 888     888 888 888  888   Y8888   88888P'"<<endl;
 cout<<"\n\t\t\t\t\t+++++++++++++ Welcome to BAV AirLines +++++++++++++\n\nTo Further Proceed, Please enter a value."<<endl;
 cout<<"\n***** Default Username && Password is root-root ***** Using Default Credentials will restrict you to just view the list of Passengers...."<<endl;
	management Mobj;
	return 0;
}
