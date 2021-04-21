#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string word;
    int x, i, vowels, consonant, uppercase, lowercase;
    vowels = 0;
    consonant = 0;
   
     
     cout<<"Enter word/s: ";
     getline(cin, word);
     x = word.length();
     
	 
	 for(i = 0; i <= x; i++)
	 {
	 	if((word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' ||
           word[i]=='E' || word[i]=='I' || word[i]=='O' ||
           word[i]=='U') && word[i]!= ' ')
        {
            ++vowels;
        }
        else if(((word[i]>='a'&& word[i]<='z') || (word[i]>='A'&& word[i]<='Z')) && word [i] != ' ')
        {
            ++consonant;
        }
	 }
	 
	
	cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonant << endl; 
}

