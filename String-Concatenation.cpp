#include <iostream>
#include<cstring>
using namespace std;
void stringcat(char *string1, char *string2);

int main()
{
	char string1[100];
	char string2[100];
	cout<<"Enter the first string: ";
	cin.getline(string1, 100);
	cout<<"Enter the second string: ";
	cin.getline(string2, 100);
	
	stringcat(string1,string2);
	cout<<"New String: "<<string1<<endl;
	system("pause");
	return 0;
}

void stringcat(char *string1, char *string2)
{
	while (*string1++);
	string1--;
	while(*string1++=*string2++);
	

}
