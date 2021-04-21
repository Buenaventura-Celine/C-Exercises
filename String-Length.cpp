#include<iostream>
#include<cstring>
using namespace std;
int stringlength(char *string);

int main()
{
	char string[100];
	cout<<"Enter a string: ";
	cin.getline(string, 100);
	cout<<"Length of the string: "<<stringlength(string)<<endl;
	system("Pause");
	return 0;
}

int stringlength(char *string)
{
	int i;
	for(i = 0;string[i]!='\0'; i++);
	return i;
}

