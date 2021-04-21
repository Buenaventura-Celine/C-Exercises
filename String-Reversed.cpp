#include<iostream>
#include<cstring>
using namespace std;
char* stringreverse(char*string);

int main()
{
	char string[100];
	cout<<"Enter a string: ";
	cin.getline(string, 100);
	cout<<"Reversed form of the string: "<<stringreverse(string)<<endl;
	system("pause > 0");
	return 0;
}

char* stringreverse(char *string)
{
	char *rev;
	rev = new char;
	int i, counter(0);
	
	for (i = 0; string[i]!= '\0'; i++)
	{
		
		counter++;
	}
	for (i = 0;string[counter]>= 0; i++)
	{
		rev[i] = string[--counter];
	}
	
	rev[i] = '\0';
	return rev;
}
