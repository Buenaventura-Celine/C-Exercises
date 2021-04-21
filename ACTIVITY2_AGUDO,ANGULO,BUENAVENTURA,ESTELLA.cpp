#include <iostream>
using namespace std;
int main ()
{
	float arraymo[2][2];
	float w, x, y, z;
	cout<<"Enter eight numbers: "<<endl;
	
	for ( int i = 0; i<2; i ++)
	{
		for (int j = 0; j < 2 ; j++)
		
		cin>>arraymo[i][j];
		
	}
	
	
	
	
	float arraynya[2][2];
	
	
	for ( int a = 0; a<2; a ++)
	{
		for (int b = 0; b < 2 ; b++)
		
		cin>>arraynya[a][b];
		
	}
	system("cls");
	
	for ( int i = 0; i<2; i ++)
	{
		for (int j = 0; j < 2 ; j++)
		
		cout<<arraymo[i][j]<<"  ";
		cout<<endl;
		cout<<endl;
	}
	
	
	cout<<endl;
	

	
	for ( int a = 0; a<2; a ++)
	{
		for (int b = 0; b < 2 ; b++)
		
		cout<<arraynya[a][b]<<"  ";
		cout<<endl;
		cout<<endl;
	}
	system ("pause");
	system ("cls");
	w = (arraymo[0][0] * arraynya[0][0]) + ( arraymo[0][1] * arraynya[1][0]);
	x = (arraymo[0][0] * arraynya[0][1]) + ( arraymo[0][1] * arraynya[1][1]);
	y = (arraymo[1][0] * arraynya[0][0]) + ( arraymo[1][1] * arraynya[1][0]);
	z = (arraynya[0][1] * arraymo[1][0]) + ( arraymo[1][1] * arraynya[1][1]);
	
	cout<<w<<" "<<x<<endl;
	cout<<endl;
	cout<<y<<" "<<z<<endl;
}
