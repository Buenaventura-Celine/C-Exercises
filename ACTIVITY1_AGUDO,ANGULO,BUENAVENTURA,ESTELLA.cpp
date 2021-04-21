#include <iostream>
using namespace std;
int main ()
{
	int bubble[6]={};
	int a,  i;
	cout<<"Enter six numbers: "<<endl;
	
	for ( i = 0; i < 6; i++ )
	{
		cin>>bubble[i];
		
	}
	
	cout<<"First Arrangement:  "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	
	  
	  for ( i = 0; i < 6; i++ )
	  {
	  	for ( i = 0; i < 6; i++ )
	  	{
	  		if ( bubble [i] > bubble [i + 1])
	  			{
	  				a = bubble[i];
	  				bubble[i] = bubble[i + 1];
	  				bubble[i + 1] = a;
	  				
			 	 }
		  }
		  
		  cout<<"Second Arrangement: "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	  }
	  
	  for ( i = 0; i < 6; i++ )
	  {
	  	for ( i = 0; i < 6; i++ )
	  	{
	  		if ( bubble [i] > bubble [i + 1])
	  			{
	  				a = bubble[i];
	  				bubble[i] = bubble[i + 1];
	  				bubble[i + 1] = a;
	  				
			 	 }
		  }
		  cout<<"Third Arrangement:  "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	  }
	  
	  
	  for ( i = 0; i < 6; i++ )
	  {
	  	for ( i = 0; i < 6; i++ )
	  	{
	  		if ( bubble [i] > bubble [i + 1])
	  			{
	  				a = bubble[i];
	  				bubble[i] = bubble[i + 1];
	  				bubble[i + 1] = a;
	  				
			 	 }
		  }
		  cout<<"Fourth Arrangement: "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	  }
	  
	  
	  for ( i = 0; i < 6; i++ )
	  {
	  	for ( i = 0; i < 6; i++ )
	  	{
	  		if ( bubble [i] > bubble [i + 1])
	  			{
	  				a = bubble[i];
	  				bubble[i] = bubble[i + 1];
	  				bubble[i + 1] = a;
	  				
			 	 }
		  }
		  cout<<"Fifth Arrangement:  "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	  }
	  
	  
	  for ( i = 0; i < 6; i++ )
	  {
	  	for ( i = 0; i < 6; i++ )
	  	{
	  		if ( bubble [i] > bubble [i + 1])
	  			{
	  				a = bubble[i];
	  				bubble[i] = bubble[i + 1];
	  				bubble[i + 1] = a;
	  				
			 	 }
		  }
		  cout<<"Sixth Arrangement:  "<<bubble[0]<<" "<<bubble[1]<<" "<<bubble[2]<<" "<<bubble[3]<<" "<<bubble[4]<<" "<<bubble[5]<<" "<<endl;
	  }
}


