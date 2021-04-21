#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char mystery_word[100] = {0}, select[26] = {0}, screen_word[200] = {0}, c[100] = {0};
	int i, j, lives = 4, is_selected = 0, passed, is_complete = 0, _counter = 0;
	input:
		cout << "\n\n Mystery Word: ";
		cin.getline(mystery_word, 100);
		//checking
		for (i = 0; i < strlen(mystery_word); i++){
			if ((mystery_word[i] >= '0' && mystery_word[i] <='9') || mystery_word[i] == '_'){
				system("cls");
				cout << "Mystery word must not contain any number or underscore\n\n";
				system("pause");
				system("cls");
				goto input;
			}
		}
		//convert to uppercase
		strupr(mystery_word);
		system("cls");
		//guessing
		for (i = 0, j = 0; j < strlen(mystery_word); i+=2, j++){
			if(isalpha(mystery_word[j])){
				screen_word[i] = '_';
			}else{
				screen_word[i] = mystery_word[j];
			}
			screen_word[i+1] = ' ';
		}
		guess:
		while (lives >= 0 && !is_complete){
			is_selected = 0;
			//checking if nahulaan na lahat
			for (i = 0, _counter = 0; (i < strlen(screen_word)); i+=2){
				if (screen_word[i] == '_'){
					_counter++;
				}
			}
			if (_counter == 0){
				is_complete = 1;
				goto guess;
			}
			cout << "\n\n\t" << screen_word << endl<<endl;;
			for (i = 0; i < 26; i++){
				if (select[i] == 0){
					cout << (char)(i + 'A') << " ";
				}else{
					cout << "  ";
				}
			}
			cout << endl;
			cin >> c;
			strupr(c);
			//checking input
			if (strlen(c) > 1){
				system("cls");
				cout << "Too many input";
				system("pause");
				system("cls");
				goto guess;
			}else if(!isalpha(c[0])){
				system("cls");
				cout << "Only letters are allowed\n\n";
				system("pause");
				system("cls");
				goto guess;
			}else{
				if (select[c[0] - 'A'] == 1){
					is_selected = 1;
				}else{
					is_selected = 0;
					select[c[0] - 'A'] = 1;
				}
			}
			//checking if already existing na ung letter
			if (!is_selected){
				passed = 0;
				for(i = 0, j = 0; j < strlen(mystery_word); i+=2, j++){
					if (mystery_word[j] == c[0]){
						screen_word[i] = mystery_word[j];
						passed = 1;
					}
				}
				if (passed == 0){
					lives--;
				}
			}else{
				system("cls");
				cout << "You have already typed that letter\n\n";
				system("pause");
				system("cls");
				goto guess;
			}
			system("cls");
			cout << "\t\t\t\t\t\t\t\t Lives: " << lives;
		}
		system("cls");
		//ending
		if (is_complete){
			cout << "\tYou win!\n\n";
		}else{
			cout << "\tYou lost!\n\n";
		}
		cout << "The mystery word is: " << mystery_word;
}
