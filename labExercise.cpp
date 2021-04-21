#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>


char charInput[10], again[5], repeat[5];
int length, output, numInput[10], checker;
int max(int x, int y);
COORD coord = {0,0};

void gotoxy(int x, int y)
{
    coord.X = x + 17; coord.Y = y + 2;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printArray()
{
		for(int i = 1; i <= 10; i++)
		{
			gotoxy(32, 7 + i);
			for(int j = 1; j<= 10; j++)
			{
				if(i == j)
				{
					printf("1 ");
				}
				else
				{
					printf("0 ");
				}
			}
		}
}

void printCol(int col, int arrayNum[10][10])
{
	for(int i = 1; i <= 10; i++)
	{
		gotoxy(32, i + 9); printf("%d", arrayNum[i][col]);
	}
}

void printRow(int row, int arrayNum[10][10])
{
	for(int i = 1; i <= 10; i++)
	{
		gotoxy(32 + (2*i), 9); printf("%d", arrayNum[row][i]);
	}
}

int max(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

void drawRectangle()
{
    int i, j;
    gotoxy(0,-1);
    printf("%c",201);
    for(i = 1; i < 85; i++){
        gotoxy(i, -1);
        printf("%c",205);
    }
    gotoxy(85,-1);
    printf("%c",187);
    for(i = 0; i < 25; i++){
        gotoxy(85, i);
        if(i == 5){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(85, 25);
    printf("%c",188);
    for(i = 84; i > 0; i--){
        gotoxy(i,25);
        if(i == 30){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }

    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > -1; i--){
        gotoxy(0,i);
        if(i == 5){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }

    for(i = 1; i < 85; i++){
        gotoxy(i,5);
        if(i == 30){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }

    for(i = 6; i < 25; i++){
        gotoxy(30,i);
        printf("%c",186);
    }

}

void SetColor(int ForgC)
{
     WORD wColor;
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

void clearWindow()
{
    int i,j;
    for(i = 32; i < 85; i++){
        for(j = 6; j < 25; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    return;
}

void loadBar()
{
	gotoxy(35, 10); printf("Loading");
	gotoxy(23, 12);
	sleep(1);
	int r,q;
	for(r=1; r<=11; r++)
	{
		for(q =0; q<=2; q++)
		{
			printf("%c",219);
			usleep(100000);
		}
	}
	sleep(2);
	system("cls");
}

void progDetails()
{
	gotoxy(32,6); printf("This program will ask you to enter 10 numbers and");
	gotoxy(32,7); printf("   will display it in ascending order.");
	gotoxy(32,8); printf("This program will convert the entered decimal number");
	gotoxy(32,9); printf("    by the user to its equivalent binary number.");
	gotoxy(32,10); printf("This program will display the 1st and 2nd to the");
	gotoxy(32,11); printf("   highest and lowest from the entered numbers");
	gotoxy(32,12); printf("This program will check if the entered word of the");
	gotoxy(32,13); printf("   the user is a palindrome");
	gotoxy(32,14); printf("This program will compute the area of the following");
	gotoxy(32,15); printf("   polygons and circle (square, rectangle, triangle).");
	gotoxy(32,16); printf("This program will compute the factorial of the");
	gotoxy(32,17); printf("   entered number by the user.");
	gotoxy(32,18); printf("This program will display the greatest from the two");
	gotoxy(32,19); printf("   entered numbers by the user.");
	gotoxy(32,20); printf("This program will print out the chosen column or ");
	gotoxy(32,21); printf("   row number entered by the user.");
}

int _window()
{
	menu:
	progDetails();
	drawRectangle();
	SetColorAndBackground(31,36);
  	gotoxy(31,1); printf(" Lab Exercise 1 & 2 ");
  	gotoxy(23,2); printf(" Created by: Patrick Jan A. Forcadela ");
  	gotoxy(34,3); printf(" BS CoE 2-1 ");
  	SetColorAndBackground(17,15);
  	gotoxy(25,23);
  	char key, input[5], charInput[20], again[5];
	int length, output, numInput[10], num, error = 0;
  	SetColor(28);
	gotoxy(2,6); printf("Program Number 1");
	gotoxy(2,8); printf("Program Number 2");
	gotoxy(2,10); printf("Program Number 3");
	gotoxy(2,12); printf("Program Number 4");
	gotoxy(2,14); printf("Program Number 5");
	gotoxy(2,16); printf("Program Number 6");
	gotoxy(2,18); printf("Program Number 7");
	gotoxy(2,20); printf("Program Number 8");
	gotoxy(2,22); printf("Press 0 to Exit");
	SetColorAndBackground(31,36);
  	gotoxy(2,23); printf("Enter your choice:      ");
  	gotoxy(21,23);
	scanf("%[^\n]%*c", &input);
	SetColorAndBackground(0,15);
	length = strlen(input);
    output = atoi(input);
	for(checker = 0; checker <= length; checker++)
	{
		if(isspace(input[checker]) || isalpha(input[checker]) || output < 0 || output > 8 ||  ((input[0] == '-') && (input[1] == '0')))
		{
			error = 1;
		}
	}
	if(length != 0 && error == 0)
	{
		if(output == 1)
		{
				do{
				int i = 1, j, num;
				clearWindow();
				SetColorAndBackground(0,40);
				gotoxy(50,6); printf(" Program No. 1 ");
				SetColorAndBackground(16,15);
				gotoxy(32,7); printf("Enter your 10 numbers \n");
				do
				{
					for(int x = 52; x < 85; x++)
					{
						gotoxy(x, 7 + i); printf(" ");
					}
					for(int x = 32; x < 85; x++){
	        			for(int y = 22; y < 24; y++){
	            			gotoxy(x,y);printf(" ");
	        			}
	    			}

					int error = 0;
					gotoxy(32, 7 + i);
					printf("Enter the number %d :", i);
					scanf("%[^\n]%*c", &charInput);
					length = strlen(charInput);
					for(checker = 0; checker <= length; checker++)
					{
						if(isspace(charInput[checker]) || isalpha(charInput[checker]) || ((charInput[0] == '-') && (charInput[1] == '0')))
						{
							error = 1;
						}
					}
					if(length != 0 && error == 0)
					{
						++i;
						numInput[i-1] = atoi(charInput);
					}
					else
					{
						gotoxy(32,22); printf("Invalid input!");
						gotoxy(32,23); printf("Do you want to try again? Yes or No only.");
						scanf("%s", &repeat);
						if((repeat[0] == 'Y' || repeat[0] == 'y') || (repeat[1] == 'E' || repeat[1] == 'e') || (repeat[2] == 'S' || repeat[2] == 's'))
						{
							fflush(stdin);
						}
						else if((repeat[0] == 'N' || repeat[0] == 'n') || (repeat[1] == 'O' || repeat[1] == 'o'))
						{
							clearWindow();
							goto menu;
						} else
						{
							gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						}
					}
				}
				while( i <= 10);
				for(i = 1; i <= 10; i++)
				{
					for (j = i + 1; j < 11; j++)
	            	{

		                if (numInput[i] > numInput[j])
		                {
		                    int a =  numInput[i];
		                    numInput[i] = numInput[j];
		                    numInput[j] = a;
		                }
					}
	        	}
	        	gotoxy(32, 19); printf("The numbers arranged in ascending order:  ");
	        	gotoxy(32,20);
				for (i = 1; i <= 10; i++)
	        	{
	            	printf("%d ", numInput[i]);
	        	}
				gotoxy(32,23); printf("Do you want to start again? Note: Yes or No only. ");
				scanf("%s", &again);
				fflush(stdin);
	 			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
						{
							clearWindow();
							goto menu;
						} else
						{
							gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						}

		} else if(output == 2)
		{
			do
			{
			clearWindow();
			int i = 0, error = 0;
			double z,doub,r,n,count = 0,frac;
			int num,p;
			SetColorAndBackground(0,40);
			gotoxy(50,6); printf(" Program No. 2 ");
			SetColorAndBackground(16,15);
			gotoxy(32,8); printf("Enter a decimal number less");
			gotoxy(32,9); printf("than 2,000,000,000: ");
		    scanf("%[^\n]%*c", &charInput);
		    length = strlen(charInput);
		    doub = atof(charInput);
		    num = doub;
			frac = doub - num;
				for(checker = 0; checker <= length; checker++)
				{
					if(isspace(charInput[checker]) || isalpha(charInput[checker]) || doub > 2000000000 || doub < 0 || ((charInput[0] == '-') && (charInput[1] == '0')))
					{
						error = 1;
					}
				}
				if(length != 0 && error == 0)
				{
					while(num != 0)
					{
						numInput[i] = num % 2;
						num = num / 2;
						i++;
						count++;
					}
					gotoxy(32, 11); printf("Binary equivalent: ");
					for(i = (count-1); i >= 0; i--)
					{
						if(i == 3)
						{
							gotoxy(35, 12);
						}
						printf("%d",numInput[i]);
					}
					printf(".");
					for(int temp = 0; temp <= 11; temp++)
					{	z=frac*2;
						p=z;
						frac=z-p;
						printf("%d",p);
					}

				}
				else
				{
					gotoxy(32,22); printf("Invalid input!");
				}
			gotoxy(32, 23); printf("Do you want to start again? Note: Yes or No only. ");
			scanf("%s", &again);
			fflush(stdin);
			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}

		} else if(output == 3)
		{
				do{
				int i = 1, j, num;
				clearWindow();
				SetColorAndBackground(0,40);
				gotoxy(50,6); printf(" Program No. 1 ");
				SetColorAndBackground(16,15);
				gotoxy(32,7); printf("Enter your 10 numbers \n");
				do
				{
					for(int x = 52; x < 85; x++)
					{
						gotoxy(x, 7 + i); printf(" ");
					}
					for(int x = 32; x < 85; x++){
	        			for(int y = 22; y < 24; y++){
	            			gotoxy(x,y);printf(" ");
	        			}
	    			}

					int error = 0;
					gotoxy(32, 7 + i);
					printf("Enter the number %d :", i);
					scanf("%[^\n]%*c", &charInput);
					length = strlen(charInput);
					for(checker = 0; checker <= length; checker++)
					{
						if(isspace(charInput[checker]) || isalpha(charInput[checker]) || ((charInput[0] == '-') && (charInput[1] == '0')))
						{
							error = 1;
						}
					}
					if(length != 0 && error == 0)
					{
						++i;
						numInput[i-1] = atoi(charInput);
					}
					else
					{
						gotoxy(32,22); printf("Invalid input!");
						gotoxy(32,23); printf("Do you want to try again? Yes or No only.");
						scanf("%s", &repeat);
						if((repeat[0] == 'Y' || repeat[0] == 'y') || (repeat[1] == 'E' || repeat[1] == 'e') || (repeat[2] == 'S' || repeat[2] == 's'))
						{
							fflush(stdin);
						}
						else if((repeat[0] == 'N' || repeat[0] == 'n') || (repeat[1] == 'O' || repeat[1] == 'o'))
						{
							goto menu;
						} else
						{
							gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						}
					}
				}
				while( i <= 10);
				for(i = 1; i <= 10; i++)
				{
					for (j = i + 1; j < 11; j++)
	            	{

		                if (numInput[i] > numInput[j])
		                {
		                    int a =  numInput[i];
		                    numInput[i] = numInput[j];
		                    numInput[j] = a;
		                }
					}
	        	}
	        	gotoxy(32, 19); printf("The first number to the highest: %d", numInput[10]);
	        	gotoxy(32, 20); printf("The second number to the highest: %d", numInput[9]);
	        	gotoxy(32, 21); printf("The first number to the lowest: %d", numInput[1]);
	        	gotoxy(32, 22); printf("The second number to the lowest: %d", numInput[2]);
				gotoxy(32,23); printf("Do you want to start again? Note: Yes or No only. ");
				scanf("%s", &again);
				fflush(stdin);
	 			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
						{
							clearWindow();
							goto menu;
						} else
						{
							gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						}
		} else if(output == 4)
		{
			int length, i;
			char again[5];
			do
			{
			clearWindow();
			SetColorAndBackground(0,40);
			gotoxy(50,6); printf(" Program No. 3 ");
			SetColorAndBackground(16,15);
			gotoxy(32, 8); printf("Enter a string: ");
			scanf("%[^\n]%*c" , &charInput);
			length = strlen(charInput);
				if(length == 1)
				{
					gotoxy(32,10); printf("The string you've entered is not a palindrome. ");
					goto mark;
				}
				for(i = 0; i < length / 2; i++)
				{
					if(charInput[i] != charInput[length - 1 - i])
					{
						gotoxy(32, 10); printf("The string you've entered is not a palindrome. ");
						goto mark;
					}
				}
				if(i == length / 2)
				{
					gotoxy(32, 10); printf("The string you've entered is a palindrome. ");
				}
					mark:
					gotoxy(32, 22); printf("Do you want to start again? Note: Yes or No only. ");
					scanf("%s", &again);
				fflush(stdin);
			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 23); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						goto mark;
					}
	} else if(output == 5)
	{
			do
			{
				clearWindow();
				int error = 0, num;
				SetColorAndBackground(0,40);
				gotoxy(50,6); printf(" Program No. 5 ");
				SetColorAndBackground(16,15);
				gotoxy(32, 8); printf("[1] - Area of square");
				gotoxy(32, 9); printf("[2] - Area of rectangle");
				gotoxy(32, 10); printf("[3] - Area of triangle");
				gotoxy(32, 11); printf("[4] - Area of circle");
				gotoxy(32, 12); printf("[5] - Exit");
				gotoxy(32, 13); printf("Enter your choice: ");
    			scanf("%[^\n]%*c",&charInput);
				length = strlen(charInput);
				num = atoi(charInput);
				for(checker = 0; checker <= length; checker++)
				{
					if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num < 0 || num > 5)
					{
						error = 1;
					}
				}
				if(length != 0 && error == 0)
				{
					if(num == 1)
					{
						do{
							for(int x = 32; x < 85; x++){
				        		for(int y = 16; y < 24; y++){
				            		gotoxy(x,y);printf(" ");
				        		}
				        	}
						gotoxy(32,15); printf("Area of square");
						gotoxy(32,16); printf("Enter the side of the square: ");
						scanf("%[^\n]%*c",&charInput);
						length = strlen(charInput);
						float num = atof(charInput);
						for(checker = 0; checker <= length; checker++)
						{
							if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num < 0)
							{
								error = 1;
							}
						}
						if(length != 0 && error == 0)
						{
							num *= num;
							gotoxy(32, 18); printf("The area of the square is %f sq. units", num);
						}
						else
						{
							gotoxy(32, 22); printf("Invalid input!");
						}
							gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
							scanf("%s", &again);
							fflush(stdin);
						} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
							{
								clearWindow();
								goto menu;
							} else
							{
								gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
							}
					} else if(num == 2)
					{
						do{
						error = 0;
						for(int x = 32; x < 85; x++)
						{
				        	for(int y = 16; y < 24; y++)
							{
				           		gotoxy(x,y);printf(" ");
				        	}
				       	}
						gotoxy(32,15); printf("Area of rectangle");
						gotoxy(32,16); printf("Enter the length of the rectangle: ");
						scanf("%[^\n]%*c",&charInput);
						length = strlen(charInput);
						float lengthRec = atof(charInput);
						for(checker = 0; checker <= length; checker++)
						{
							if(isspace(charInput[checker]) || isalpha(charInput[checker]) || lengthRec < 0)
							{
								error = 1;
							}
						}
						if(length != 0 && error == 0)
						{
							gotoxy(32,17); printf("Enter the width of the rectangle: ");
							scanf("%[^\n]%*c",&charInput);
							length = strlen(charInput);
							float widthRec = atof(charInput);
							float num = lengthRec * widthRec;
							for(checker = 0; checker <= length; checker++)
							{
								if(isspace(charInput[checker]) || isalpha(charInput[checker]) || widthRec < 0)
								{
									error = 1;
								}
							}
							if(length != 0 && error == 0)
							{
								gotoxy(32, 18); printf("The area of the rectangle is %f sq. units", num);
							}
							else
							{
								gotoxy(32, 22); printf("Invalid input!");
							}
						}
						else
						{
							gotoxy(32, 22); printf("Invalid input!");
						}
							gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
							scanf("%s", &again);
							fflush(stdin);
						} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
							{
								clearWindow();
								goto menu;
							} else
							{
								gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
							}
					} else if(num == 3)
					{
						do{
						error = 0;
						for(int x = 32; x < 85; x++)
						{
				        	for(int y = 16; y < 24; y++)
							{
				           		gotoxy(x,y);printf(" ");
				        	}
				       	}
						gotoxy(32,15); printf("Area of triangle");
						gotoxy(32,16); printf("Enter the base of the triangle: ");
						scanf("%[^\n]%*c",&charInput);
						length = strlen(charInput);
						float lengthRec = atof(charInput);
						for(checker = 0; checker <= length; checker++)
						{
							if(isspace(charInput[checker]) || isalpha(charInput[checker]) || lengthRec < 0)
							{
								error = 1;
							}
						}
						if(length != 0 && error == 0)
						{
							gotoxy(32,17); printf("Enter the base of the triangle: ");
							scanf("%[^\n]%*c",&charInput);
							length = strlen(charInput);
							float widthRec = atof(charInput);
							float num = (lengthRec * widthRec)/2;
							for(checker = 0; checker <= length; checker++)
							{
								if(isspace(charInput[checker]) || isalpha(charInput[checker]) || widthRec < 0)
								{
									error = 1;
								}
							}
							if(length != 0 && error == 0)
							{
								gotoxy(32, 18); printf("The area of the triangle is %f sq. units", num);
							}
							else
							{
								gotoxy(32, 22); printf("Invalid input!");
							}
						}
						else
						{
							gotoxy(32, 22); printf("Invalid input!");
						}
							gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
							scanf("%s", &again);
							fflush(stdin);
						} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
							{
								clearWindow();
								goto menu;
							} else
							{
								gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
							}
					} else if(num == 4)
					{
							do{
							for(int x = 32; x < 85; x++){
				        		for(int y = 16; y < 24; y++){
				            		gotoxy(x,y);printf(" ");
				        		}
				        	}
						gotoxy(32,15); printf("Area of circle");
						gotoxy(32,16); printf("Enter the radius of the circle: ");
						scanf("%[^\n]%*c",&charInput);
						length = strlen(charInput);
						float num = atof(charInput);
						for(checker = 0; checker <= length; checker++)
						{
							if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num < 0)
							{
								error = 1;
							}
						}
						if(length != 0 && error == 0)
						{
							num = (num*num)* 3.141592;
							gotoxy(32, 18); printf("The area of the circle is %f sq. units", num);
						}
						else
						{
							gotoxy(32, 22); printf("Invalid input!");
						}
							gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
							scanf("%s", &again);
							fflush(stdin);
						} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
						if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
							{
								clearWindow();
								goto menu;
							} else
							{
								gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
							}
					} else if(num == 5)
					{
						clearWindow();
						goto menu;
					}
				}
				else{
					gotoxy(32, 22); printf("Invalid input!");
				}
					gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
					scanf("%s", &again);
					fflush(stdin);
			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
				if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
	} else if (output == 6)
	{
			do
			{
				clearWindow();
				unsigned long long factorial = 1;
				int error = 0, num, fac;
				SetColorAndBackground(0,40);
				gotoxy(50,6); printf(" Program No. 6 ");
				SetColorAndBackground(16,15);
				gotoxy(32, 8); printf("Please enter the desired integer from 1 to 20: ");
    			scanf("%[^\n]%*c",&charInput);
				length = strlen(charInput);
				num = atoi(charInput);
				for(checker = 0; checker <= length; checker++)
				{
					if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num < 0)
					{
						error = 1;
					}
				}
				if(length != 0 && error == 0)
				{
					for(fac = 1; fac <= num; ++fac)
					{
					    factorial *= fac;
					}
					gotoxy(32,10); printf("Factorial of %d = %llu", num, factorial);
				}
				else{
					gotoxy(32, 22); printf("Invalid input!");
				}
					gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
					scanf("%s", &again);
					fflush(stdin);


			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
				if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
	} else if (output == 7)
	{
			SetColorAndBackground(0,40);
			gotoxy(50,6); printf(" Program No. 7");
			SetColorAndBackground(16,15);
			do
			{
				clearWindow();
				int i = 0;
				do
				{
					int error 	= 0 ;
					for(int x = 45; x < 85; x++)
					{
						gotoxy(x, 7 + i); printf(" ");
					}
					for(int x = 32; x < 85; x++){
	        			for(int y = 22; y < 24; y++){
	            			gotoxy(x,y);printf(" ");
	        			}
	    			}
					gotoxy(32, 7 + i);
					printf("Enter an integer: ");
					scanf("%[^\n]%*c", &charInput);
					length = strlen(charInput);
					for(checker = 0; checker <= length; checker++)
					{
						if(isspace(charInput[checker]) || isalpha(charInput[checker]))
						{
							error = 1;
						}
					}
					if(length != 0 && error == 0)
					{
						numInput[i] = atoi(charInput);
						++i;
					}
					else
					{
						gotoxy(32,22); printf("Invalid input!");
						gotoxy(32,23); printf("Do you want to try again? Yes or No only.");
						scanf("%s", &repeat);
						if((repeat[0] == 'Y' || repeat[0] == 'y') || (repeat[1] == 'E' || repeat[1] == 'e') || (repeat[2] == 'S' || repeat[2] == 's'))
						{
							fflush(stdin);
						}
						else if((repeat[0] == 'N' || repeat[0] == 'n') || (repeat[1] == 'O' || repeat[1] == 'o'))
						{
							clearWindow();
							goto menu;
						} else
						{
							gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
						}
					}
				} while(i <= 1);
				if(numInput[0] == numInput[1])
				{
					gotoxy(32, 10); printf("The value of the entered numbers is equal");
				} else
				{
					gotoxy(32, 10); printf("The largest is %d ", max(numInput[0], numInput[1]));
				}
				gotoxy(32,23); printf("Do you want to start again? Note: Yes or No only. ");
				scanf("%s", &again);
				fflush(stdin);
			} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
	} else if( output == 8)
	{
		do{
		int arrayNum[10][10];
		for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(i == j)
				{
					arrayNum[i][j] = 1;
				}
				else
				{
					arrayNum[i][j] = 0;
				}
			}
		}
		_8menu:
		error = 0;
		clearWindow();
		SetColorAndBackground(0,40);
		gotoxy(50,6); printf(" Program No. 8 ");
		SetColorAndBackground(16,15);
		gotoxy(32, 7); printf("The array is shown below");
		printArray();
		gotoxy(32, 18); printf("[1] Column");
		gotoxy(32, 19); printf("[2] Row");
		gotoxy(32, 20); printf("[3] Exit");
		gotoxy(32, 21); printf("Enter your choice: ");
		scanf("%[^\n]%*c",&charInput);
		length = strlen(charInput);
		num = atoi(charInput);
		for(checker = 0; checker <= length; checker++)
		{
			if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num < 0 || num > 3)
			{
				error = 1;
			}
		}
		if(length != 0 && error == 0)
		{
			if(num == 1)
			{
				do{
					error = 0;
					clearWindow();
					SetColorAndBackground(0,40);
					gotoxy(50,6); printf(" Program No. 8 ");
					SetColorAndBackground(16,15);
					gotoxy(32, 8); printf("Enter the column number you want to print out: ");
					scanf("%[^\n]%*c",&charInput);
					length = strlen(charInput);
					num = atoi(charInput);
					for(checker = 0; checker <= length; checker++)
					{
						if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num <= 0 || num > 10)
						{
							error = 1;
						}
					}
					if(length != 0 && error == 0)
					{	
						for(int i = 0; i < 10; i++)
						{
							gotoxy(32, i + 9); printf("%d", arrayNum[i][num -1]);
						}
					} else
					{
						gotoxy(32, 22); printf("Invalid input!");
					}
						gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
						scanf("%s", &again);
						fflush(stdin);
				} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto _8menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
			} else if(num == 2)
			{
				do{
					error = 0;
					clearWindow();
					SetColorAndBackground(0,40);
					gotoxy(50,6); printf(" Program No. 8 ");
					SetColorAndBackground(16,15);
					gotoxy(32, 8); printf("Enter the row number you want to print out: ");
					scanf("%[^\n]%*c",&charInput);
					length = strlen(charInput);
					num = atoi(charInput);
					for(checker = 0; checker <= length; checker++)
					{
						if(isspace(charInput[checker]) || isalpha(charInput[checker]) || num <= 0 || num > 10)
						{
							error = 1;
						}
					}
					if(length != 0 && error == 0)
					{
							for(int i = 0; i < 10; i++)
							{
								gotoxy(32 + (2*i), 9); printf("%d", arrayNum[num-1][i]);
							}
					} else
					{
						gotoxy(32, 22); printf("Invalid input!");
					}
						gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
						scanf("%s", &again);
						fflush(stdin);
				} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto _8menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
				
			} else
			{
				clearWindow();
				goto menu;
			}
		}
		else{
			gotoxy(32, 22); printf("Invalid input!");
		}
			gotoxy(32, 23); printf("Do you want to try again? Note: Yes or No only. ");
			scanf("%s", &again);
			fflush(stdin);
		} while((again[0] == 'Y' || again[0] == 'y') || (again[1] == 'E' || again[1] == 'e') || (again[2] == 'S' || again[2] == 's'));
					if((again[0] == 'N' || again[0] == 'n') || (again[1] == 'O' || again[1] == 'o'))
					{
						clearWindow();
						goto menu;
					} else
					{
						gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
					}
	} else if( output == 0)
	{
		return 0;
	}
	}
	else
	{
		gotoxy(32,22); printf("Invalid input!");
		gotoxy(32,23); printf("Do you want to try again? Yes or No only.");
		scanf("%s", &repeat);
		fflush(stdin);
		if((repeat[0] == 'Y' || repeat[0] == 'y') || (repeat[1] == 'E' || repeat[1] == 'e') || (repeat[2] == 'S' || repeat[2] == 's'))
		{
			clearWindow();
			goto menu;
		}
		else if((repeat[0] == 'N' || repeat[0] == 'n') || (repeat[1] == 'O' || repeat[1] == 'o'))
		{
			clearWindow();
			goto menu;
		} else
		{
			gotoxy(32, 24); printf("ERROR: INVALID INPUT! YES OR NO ONLY! ");
		}
	}
}

int main(){
    system("COLOR F0");
    //loadBar();
    SetConsoleTitle("Laboratory Exercise 1 and 2");
    _window();
    return 0;
}
