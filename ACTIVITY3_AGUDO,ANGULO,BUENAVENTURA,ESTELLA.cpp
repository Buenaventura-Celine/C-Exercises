#include <iostream>
#include <conio.h>
using namespace std;

char number[9] = {'1','2','3','4','5','6','7','8','9'};
char mark[2]={'X', 'O'};

int main();
void game();
int result();

int result()
{
	if (number[0] == number[1] && number[1] == number[2])
		return 1;
	else if (number[3] == number[4] && number[4] == number[5])
		return 1;
	else if (number[6] == number[7] && number[7] == number[8])
		return 1;
	else if (number[0] == number[3] && number[3] == number[6])
		return 1;
	else if (number[1] == number[4] && number[4] == number[7])
		return 1;
	else if (number[2] == number[5] && number[5] == number[8])
		return 1;
	else if (number[0] == number[4] && number[4] == number[8])
		return 1;
	else if (number[2] == number[4] && number[4] == number[6])
		return 1;
	else if (number[0] != '1' && number[1] != '2' && number[2] != '3' &&
	         number[3] != '4' && number[4] != '5' && number[5] != '6' &&
            number[6] != '7' && number[7] != '8' && number[8] != '9')
		return 0;
	else
		return -1;
}

void game()
{
	system("cls");
	cout << "\n\n\tTik Tak Toe\n\n";

	cout <<"\t"<< "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

		cout << "\t"<<"___________________" << endl;
	cout <<"\t"<< "|     |     |     |     " << endl;
	cout <<"\t"<< "|  " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "  |  " <<endl;
	cout << "\t"<<"|_____|_____|_____|" << endl;
	
	cout <<"\t"<< "|     |     |     |     " << endl;
	cout <<"\t"<< "|  " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "  |  " <<endl;
	cout << "\t"<<"|_____|_____|_____|" << endl;
	
	cout <<"\t"<< "|     |     |     |     " << endl;
	cout <<"\t"<< "|  " << number[6] << "  |  " << number[7] << "  |  " << number[8] << "  |  " <<endl;
	cout << "\t"<<"|_____|_____|_____|" << endl;
	
	cout<<endl;
	cout<<endl;

}

int main()
{
	int player = 1;
	int x;
	int c;
	int i;

	do
	{
		x = player % 2;
		if (x == 1)
		{
			game();
			cout<<"Player 1: ";
			cin>>c;
			
			if(c == 1 && number [0] == '1')
			number [0]= mark[0];
		
			else if(c == 2 && number [1] == '2')
			number [1]= mark[0];
			
			else if(c == 3 && number [2] == '3')
			number [2]= mark[0];
			
			else if(c == 4 && number [3] == '4')
			number [3]= mark[0];
			
			else if(c == 5 && number [4] == '5')
			number [4]= mark[0];
			
			else if(c == 6 && number [5] == '6')
			number [5]= mark[0];
			
			else if(c == 7 && number [6] == '7')
			number [6]= mark[0];
			
			else if(c == 8 && number [7] == '8')
			number [7]= mark[0];
			
			else if(c == 9 && number [8] == '9')
			number [8]= mark[0];
			
			else
				{
					cout<<"Invalid move ";

					player--;
					cin.ignore();
					cin.get();
				}
		}
		
		if (x == 0)
		{
		 game();
			cout<<"Player 2: ";
			cin>>c;
			if(c == 1 && number [0] == '1')
			number [0]= mark[1];
		
			else if(c == 2 && number [1] == '2')
			number [1]= mark[1];
			
			else if(c == 3 && number [2] == '3')
			number [2]= mark[1];
			
			else if(c == 4 && number [3] == '4')
			number [3]= mark[1];
			
			else if(c == 5 && number [4] == '5')
			number [4]= mark[1];
			
			else if(c == 6 && number [5] == '6')
			number [5]= mark[1];
			
			else if(c == 7 && number [6] == '7')
			number [6]= mark[1];
			
			else if(c == 8 && number [7] == '8')
			number [7]= mark[1];
			
			else if(c == 9 && number [8] == '9')
			number [8]= mark[1];
			
			else
				{
					cout<<"Invalid move ";

					player--;
					cin.ignore();
					cin.get();
				}
		}
		
		player = player + 1;
		i = result();
	}
	while (i == -1);
	
	game();
	if(i==1 && x == 0)
		{
			cout<<"Player 2 WINS!!!!!!"<<endl;
		}
	else if( i == 1 && x == 1)
		{
			cout <<"Player 1 WINS!!!!"<<endl;
		}
	else
		cout<<"Game draw"<<endl;
	getch();
	return 0;
}

