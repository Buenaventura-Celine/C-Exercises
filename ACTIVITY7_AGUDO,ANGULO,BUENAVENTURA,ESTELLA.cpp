#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main(){
	char username[100] = {0}, password[100] = {0}, retype[100] = {0}, c = 0;
	int i, j, k, uppercase, lowercase, digit;
	cout << " Username: ";
	cin.getline(username, 100);
	cout << " Password: ";
	pass:
	i = uppercase = lowercase = digit = 0;
	c = getch();
	while (c != 13 || (i == 0 && c == 13)){ //habang di pa napipindot ang enter
		if (c == -32){ //arrow keys (dalawa kasi ascii ng arrow keys)
			c = getch();
			c = 0;
		}else if(c == 27){ //escape
			c = 0;
		}else if(c == 8){ //backspace
			if (i > 0){
				i--;	
			}else{
				i = 0;
			}
			password[i] = 0;
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			for(j = 0; j < i; j++){
				cout << "*";
			}
		}else if(c == 13){ //pag nagenter ng blank
			c = 0;
		}else{
			password[i++] = c;
			cout << "*";
		}
		c = getch();
	}
	password[i] = 0; //end string
	if (i < 6){
		cout << "\nPassword must have a minimum length of 6.\n";
		system("pause");
		system("cls");
		cout << " Username: " << username << endl;
		cout << " Password: ";
		goto pass;
	}else if(i > 10){
		cout << "\nPassword must have a maximum length of 10.\n";
		system("pause");
		system("cls");
		cout << " Username: " << username << endl;
		cout << " Password: ";
		goto pass;
	}else{
		for (j = 0; j < i; j++){
			if (password[j] >= 'a' && password[j] <= 'z'){
				lowercase++;
			}else if(password[j] >= 'A' && password[j] <= 'Z'){
				uppercase++;
			}else if(password[j] >= '0' && password[j] <= '9'){
				digit++;
			}
		}
		if (lowercase == 0){
			cout << "\nPassword must contain at least 1 lowercase.\n";
			system("pause");
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			goto pass;
		}else if(uppercase == 0){
			cout << "\nPassword must contain at least 1 uppercase.\n";
			system("pause");
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			goto pass;
		}else if(digit == 0){
			cout << "\nPassword must contain at least 1 digit.\n";
			system("pause");
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			goto pass;
		}
	}
	k = 0;
	cout << "\n Re-type Password: ";
	c = getch();
	while (c != 13 || (i == 0 && c == 13)){ //habang di pa napipindot ang enter
		if (c == -32){ //arrow keys (dalawa kasi ascii ng arrow keys)
			c = getch();
			c = 0;
		}else if(c == 27){ //escape
			c = 0;
		}else if(c == 8){ //backspace
			if (i > 0){
				k--;	
			}else{
				k = 0;
			}
			retype[k] = 0;
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			for(j = 0; j < i; j++){
				cout << "*";
			}
			cout << "\n Re-type Password: ";
			for(j = 0; j < k; j++){
				cout << "*";
			}
		}else if(c == 13){ //pag nagenter ng blank
			c = 0;
		}else{
			retype[k++] = c;
			cout << "*";
		}
		c = getch();
	}
	retype[k] = 0; //end string
	//comparing
	if(!strcmp(password, retype)){
		cout << "\n\n Success!";
	}else{
		cout << "\nPassword do not match.\n" << password << " "<<retype;
			system("pause");
			system("cls");
			cout << " Username: " << username << endl;
			cout << " Password: ";
			goto pass;
	}
}
