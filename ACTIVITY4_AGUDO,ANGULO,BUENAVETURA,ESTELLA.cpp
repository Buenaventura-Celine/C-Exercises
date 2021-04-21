#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	
	srand(time(0));
	int  A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y;
	int g,i,j,x,y,a,q,Z,val=0,val1=0,val2=0,val3=0,val4=0;
	A=1;
	B=2;
	C=3;
	D=4;
	E=5;
	F=6;
	G=7;
	H=8;
	I=9;
	J=10;
	K=11;
	L=12;
	M=13;
	N=14;
	O=15;
	P=16;
	Q=17;
	R=18;
	S=19;
	T=20;
	U=21;
	V=22;
	W=23;
	X=24;
	Y=25;
	q=0;
	
	int arr1[5][5];
	y=0;
	for(i=0; i<5; i++)
    {
        for (j=0;j<5;j++)
		{
		x= (rand()%10)+1;
        if((x==1 || x==5 || x==10) && (y!=5))
        {
            arr1[i][j] = -1;
            y++;
        }
        else 
		arr1[i][j] = 22;
		}
	}
	
	
	
Main:int arr[5][5]={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y};
	
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			
			if (arr[i][j]<10 &&arr[i][j]>0)
			cout<<"    "<<"[0"<<arr[i][j]<<"]"<<"     ";
			if (arr[i][j]>=10)
			cout<<"    "<<"["<<arr[i][j]<<"]"<<"     ";
			if (arr[i][j]<-1)
			{
			arr[i][j]+=10;
			cout<<"       "<<arr[i][j]<<"     ";
			}
		}
		cout<<endl<<endl<<endl<<endl;
		
	}
	if (q==20)
	goto Winner;

int XX;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            XX = 0;
            if(arr1[i][j] == 22)
            {
	if(i == 0 && j == 0)
                {
                   if(arr1[i][j+1] == -1)
                        XX++;
                   if(arr1[i+1][j] == -1)
                        XX++;
                   if(arr1[i+1][j+1] == -1)
                        XX++;
                }

                if(i == 0 && j == 4)
                {
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i+1][j] == -1)
                        XX++;
                    if(arr1[i+1][j-1] == -1)
                        XX++;
                }

                if(i == 4 && j == 0)
                {
                    if(arr1[i][j+1] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                    if(arr1[i-1][j+1] == -1)
                        XX++;
                }

                if(i == 4 && j == 4)
                {
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                }

                if( i == 0 && j != 0 && j != 4)
                {
                    if(arr1[i][j+1] == -1)
                        XX++;
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i+1][j] == -1)
                        XX++;
                    if(arr1[i+1][j+1] == -1)
                        XX++;
                    if(arr1[i+1][j-1] == -1)
                        XX++;
                }

                if(i == 4 && j != 0 && j != 4)
                {
                    if(arr1[i][j+1] == -1)
                        XX++;
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                    if(arr1[i-1][j+1] == -1)
	XX++;
                    if(arr1[i-1][j-1] == -1)
                        XX++;
                }

                if(j == 0 &&i != 0 &&i != 4)
                {
                    if(arr1[i+1][j] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                    if(arr1[i][j+1] == -1)
                        XX++;
                    if(arr1[i+1][j+1] == -1)
                        XX++;
                    if(arr1[i-1][j+1] == -1)
                        XX++;
                }

                if(j == 4 &&i != 0 &&i != 4)
                {
                    if(arr1[i+1][j] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i+1][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j-1] == -1)
                        XX++;
                }
	

               if(i !=0 &&i!= 4 && j != 0 && j != 4)
                {
                    if(arr1[i][j+1] == -1)
                        XX++;
                    if(arr1[i][j-1] == -1)
                        XX++;
                    if(arr1[i+1][j] == -1)
                        XX++;
                    if(arr1[i-1][j] == -1)
                        XX++;
                    if(arr1[i+1][j+1] == -1)
                        XX++;
                    if(arr1[i+1][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j-1] == -1)
                        XX++;
                    if(arr1[i-1][j+1] == -1)
                        XX++;

                }

                arr1[i][j] = XX;

            }
        }
    }  
	
cout<<"Enter a number: "<<endl;
	cin>>a;
	
	if(a==1)
	{
		val++;
		if(val!=1)
		{
		system("CLS");
		goto Main;
		}
	}
	if(a==2)
	{
		val1++;
		if(val1!=1)
		{
		system("CLS");
		goto Main;
		}
	}
	if(a==3)
	{
		val2++;
		if(val2!=1)
		{
		system("CLS");
		goto Main;
		}
	}
	if(a==4)
	{
		val3++;
		if(val3!=1)
		{
		system("CLS");
		goto Main;
		}
	}
	if(a==5)
	{
		val4++;
		if(val4!=1)
		{
		system("CLS");
		goto Main;
		}
	}
	switch(a)
	{
		case 1:
			{
				
				if (arr1[0][0]==-1)
				goto End;
				A=arr1[0][0]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 2:
			{
				if (arr1[0][1]==-1)
				goto End;
				B=arr1[0][1]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 3:
			{
				if (arr1[0][2]==-1)
				goto End;
				C=arr1[0][2]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 4:
			{
				if (arr1[0][3]==-1)
				goto End;
				D=arr1[0][3]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 5:
			{
				if (arr1[0][4]==-1)
				goto End;
				E=arr1[0][4]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 6:
			{
				if (arr1[1][0]==-1)
				goto End;
				if(arr[1][0]==0 || arr[1][0]==1 ||  arr[1][0]==2 || arr[1][0]==3 || arr[1][0]==4 || arr[1][0]==5)
				{
				
				system("CLS");
				goto Main;
				}
				F=arr1[1][0]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 7:
			{
				if (arr1[1][1]==-1)
				goto End;
				if(arr[1][1]==0 || arr[1][1]==1 ||  arr[1][1]==2 || arr[1][1]==3 || arr[1][1]==4 || arr[1][1]==5)
				{
				system("CLS");
				goto Main;
				}
				G=arr1[1][1]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 8:
			{
				if (arr1[1][2]==-1)
				goto End;
				if(arr[1][2]==0 || arr[1][2]==1 ||  arr[1][2]==2 || arr[1][2]==3 || arr[1][2]==4 || arr[1][2]==5)
				{
				system("CLS");
				goto Main;
				}
				H=arr1[1][2]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 9:
			{
				if (arr1[1][3]==-1)
				goto End;
				if(arr[1][3]==0 || arr[1][3]==1 ||  arr[1][3]==2 || arr[1][3]==3 || arr[1][3]==4 || arr[1][3]==5)
				{
				system("CLS");
				goto Main;
				}
				I=arr1[1][3]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 10:
			{
				if (arr1[1][4]==-1)
				goto End;
				if(arr[1][4]==0 || arr[1][4]==1 ||  arr[1][4]==2 || arr[1][4]==3 || arr[1][4]==4 || arr[1][4]==5)
				{
				system("CLS");
				goto Main;
				}
				J=arr1[1][4]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 11:
			{
				if (arr1[2][0]==-1)
				goto End;
				if(arr[2][0]==0 || arr[2][0]==1 ||  arr[2][0]==2 || arr[2][0]==3 || arr[2][0]==4 || arr[2][0]==5)
				{
				system("CLS");
				goto Main;
				}
				K=arr1[2][0]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 12:
			{
				if (arr1[2][1]==-1)
				goto End;
				if(arr[2][1]==0 || arr[2][1]==1 ||  arr[2][1]==2 || arr[2][1]==3 || arr[2][1]==4 || arr[2][1]==5)
				{
				system("CLS");
				goto Main;
				}
				L=arr1[2][1]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 13:
			{
				if (arr1[2][2]==-1)
				goto End;
				if(arr[2][2]==0 || arr[2][2]==1 ||  arr[2][2]==2 || arr[2][2]==3 || arr[2][2]==4 || arr[2][2]==5)
				{
				system("CLS");
				goto Main;
				}
				M=arr1[2][2]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 14:
			{
				if (arr1[2][3]==-1)
				goto End;
				if(arr[2][3]==0 || arr[2][3]==1 ||  arr[2][3]==2 || arr[2][3]==3 || arr[2][3]==4 || arr[2][3]==5)
				{
				system("CLS");
				goto Main;
				}
				N=arr1[2][3]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 15:
			{
				if (arr1[2][4]==-1)
				goto End;
				if(arr[2][4]==0 || arr[2][4]==1 ||  arr[2][4]==2 || arr[2][4]==3 || arr[2][4]==4 || arr[2][4]==5)
				{
				system("CLS");
				goto Main;
				}
				O=arr1[2][4]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 16:
			{
				if (arr1[3][0]==-1)
				goto End;
				if(arr[3][0]==0 || arr[3][0]==1 ||  arr[3][0]==2 || arr[3][0]==3 || arr[3][0]==4 || arr[3][0]==5)
				{
				system("CLS");
				goto Main;
				}
				P=arr1[3][0]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 17:
			{
				if (arr1[3][1]==-1)
				goto End;
				if(arr[3][1]==0 || arr[3][1]==1 ||  arr[3][1]==2 || arr[3][1]==3 || arr[3][1]==4 || arr[3][1]==5)
				{
				system("CLS");
				goto Main;
				}
				Q=arr1[3][1]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 18:
			{
				if (arr1[3][2]==-1)
				goto End;
				if(arr[3][2]==0 || arr[3][2]==1 ||  arr[3][2]==2 || arr[3][2]==3 || arr[3][2]==4 || arr[3][2]==5)
				{
				system("CLS");
				goto Main;
				}
				R=arr1[3][2]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 19:
			{
				if (arr1[3][3]==-1)
				goto End;
				if(arr[3][3]==0 || arr[3][3]==1 ||  arr[3][3]==2 || arr[3][3]==3 || arr[3][3]==4 || arr[3][3]==5)
				{
				system("CLS");
				goto Main;
				}
				S=arr1[3][3]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 20:
			{
				if (arr1[3][4]==-1)
				goto End;
				if(arr[3][4]==0 || arr[3][4]==1 ||  arr[3][4]==2 || arr[3][4]==3 || arr[3][4]==4 || arr[3][4]==5)
				{
				system("CLS");
				goto Main;
				}
				T=arr1[3][4]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 21:
			{
				if (arr1[4][0]==-1)
				goto End;
				if(arr[4][0]==0 || arr[4][0]==1 ||  arr[4][0]==2 || arr[4][0]==3 || arr[4][0]==4 || arr[4][0]==5)
				{
				system("CLS");
				goto Main;
				}
				U=arr1[4][0]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 22:
			{
				if (arr1[4][1]==-1)
				goto End;
				if(arr[4][1]==0 || arr[4][1]==1 ||  arr[4][1]==2 || arr[4][1]==3 || arr[4][1]==4 || arr[4][1]==5)
				{
				system("CLS");
				goto Main;
				}
				V=arr1[4][1]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 23:
			{
				if (arr1[4][2]==-1)
				goto End;
				if(arr[4][2]==0 || arr[4][2]==1 ||  arr[4][2]==2 || arr[4][2]==3 || arr[4][2]==4 || arr[4][2]==5)
				{
				system("CLS");
				goto Main;
				}
				W=arr1[4][2]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 24:
			{
				if (arr1[4][3]==-1)
				goto End;
				if(arr[4][3]==0 || arr[4][3]==1 ||  arr[4][3]==2 || arr[4][3]==3 || arr[4][3]==4 || arr[4][3]==5)
				{
				system("CLS");
				goto Main;
				}
				X=arr1[4][3]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		case 25:
			{
				if (arr1[4][4]==-1)
				goto End;
				if(arr[4][4]==0 || arr[4][4]==1 ||  arr[4][4]==2 || arr[4][4]==3 || arr[4][4]==4 || arr[4][4]==5)
				{
				system("CLS");
				goto Main;
				}
				Y=arr1[4][4]-10;
				q++;
				system("CLS");
				goto Main;
				break;
			}
		default:
			{
				
				cout<<"Error"<<endl;
				system("PAUSE");
				system("CLS");
				goto Main;
			}
		
	}
Winner:g=1;
	goto done;
End:g=2;
	goto done;
done:if (g==1)
	{
	cout<<"                               Congratulations!!!";
	
	}
	if (g==2)
	{
	system("CLS");
	cout<<endl<<endl<<"                               MINESWEEPER"<<endl<<endl<<endl;
	for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if (arr1[i][j]>=0)
			cout<<" "<<arr1[i][j]<<" ";
			if (arr1[i][j]==-1)
			cout<<" "<<"x"<<" ";
        }
cout<<endl<<endl<<endl<<endl;
		}
	}

return 0;	

}

