#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char idnumber[50];
	char name[50];
    float quiz1;
	float quiz2;
	float quiz3;
};
int main()
{
	float grade;
	string remarks;
	student entry;
	cout<<"Enter Student Record:"<<endl;
	cout<<"ID Number: ";
	cin.getline(entry.idnumber,50);
	cout<<"Name: ";
	cin.getline(entry.name,50);
	cout<<"Quiz 1: ";
	cin>>entry.quiz1;
	cout<<"Quiz 2: ";
	cin>>entry.quiz2;
	cout<<"Quiz 3: ";
	cin>>entry.quiz3;
	
	grade = (entry.quiz1 + entry.quiz2 + entry.quiz3)/3;
	if (grade >= 75)
	{remarks = "Passed";}
	else{remarks = "Failed";}
	
	cout<<endl<<endl;
	cout<<"Student Record:"<<endl;
	cout<<"ID Number: "<<entry.idnumber<<endl;
	cout<<"Name: "<<entry.name<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"Remarks: "<<remarks<<endl;
	
	return 0;
}
