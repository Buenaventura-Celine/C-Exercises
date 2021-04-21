#include <iostream>
#include<cstring>
using namespace std;
void stringcopy(char *string1, char *string2);

int main()
{
	char string1[100];
	char string2[100];
	cout<<"Enter a string to copy: ";
	cin.getline(string2, 100);
	stringcopy(string1,string2);
	cout<<"string 1: "<<string1<<endl;
	cout<<"string 2: "<<string2<<endl;
	system("pause");
	return 0;
}

void stringcopy(char *string1, char *string2)
{
	while (*string2 != '\0')
	{
		*string1 = *string2;
		string1++;
		string2++;
	}
	
	*string1 = '\0';
}
