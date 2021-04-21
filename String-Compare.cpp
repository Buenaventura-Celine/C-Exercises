#include <iostream>
#include<cstring>
using namespace std;
int stringcompare(char *string1, char *string2);

int main()
{
	char string1[100];
	char string2[100];
	cout<<"Enter the first string: ";
	cin.getline(string1, 100);
	cout<<"Enter the second string: ";
	cin.getline(string2, 100);
 
	cout<<"String Compare Value: "<<stringcompare(string1,string2)<<endl;
	system("pause");
	return 0;
}

int stringcompare(char *string1, char *string2)
{
	for (;*string1 == *string2; *string1++,*string2++)
	{
		if(*string1 == '\0' && *string2 == '\0')
		{
			return 0;
		}
		return *string1-*string2;
	}
}
