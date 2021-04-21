#include<iostream>
#include<cstring>
using namespace std;
struct student{
	int number;
	char idnumber[50];
	char name [50];
	float quiz1;
	float quiz2;
	float quiz3;
};

int main()
{
	student entry[5];
	float ave[5];
	string remarks[5];
	for (int i = 0; i<5; i++)
	{
		entry[i].number = i + 1;
		cout<<"Student number "<<entry[i].number<<":"<<endl;
		cout<<"ID Number: ";
		cin>>entry[i].idnumber;
		cout<<"Name: ";
		cin>>entry[i].name;
		cout<<"Quiz 1: ";
		cin>>entry[i].quiz1;
		cout<<"Quiz 2: ";
		cin>>entry[i].quiz2;
		cout<<"Quiz 3: ";
		cin>>entry[i].quiz3;
		cout<<endl<<endl;
		ave[i] = (entry[i].quiz1 + entry[i].quiz2 + entry[i].quiz3) / 3;
		if (ave[i] >= 75)
		{remarks[i] = "Passed";}
		else{remarks[i] = "Failed";}
	}
	
	cout<<"STUDENT RECORD"<<endl;
	
	
		for (int k = 0; k<5; k++)
		{
			cout<<entry[k].number<<"\t\t";
			cout<<entry[k].idnumber<<"\t\t\t\t";
			cout<<entry[k].name<<"\t\t\t\t\t";
			cout<<ave[k]<<"\t\t";
			cout<<remarks[k];
			cout<<endl;
		}
		
	
	return 0;
}
