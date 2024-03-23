/* MUHAMMAD HAYYAN
23I-2041_______CY-A
Assignment#04_____Q4A */

#include <iostream>
using namespace std;

int main()
{
		//Program to output which colors of rainbows the number represents
	
	int color;
	
	//Inputting number
	cout<< "\n\n Enter a number: ";
	cin>> color;
	
	cout<<"\n\n Colors which number "<<color<< " represents are: \n";
	
	if (color & 1)					//Taking & of number with binary 1 to check its 0th bit
		cout<< " Violet \n";
		
	if (color & (1 << 1))				//Taking & of number with binary 10 to check its 1st bit
		cout<< " Indigo \n";
	
	if (color & (1 << 2))				//Taking & of number with binary 100 to check its 2nd bit
		cout<< " Blue \n";
		
	if (color & (1 << 3))				//Taking & of number with binary 1000 to check its 3rd bit
		cout<< " Green \n";
	
	if (color & (1 << 4))				//Taking & of number with binary 10000 to check its 4th bit
		cout<< " Yellow \n";
		
	if (color & (1 << 5))				//Taking & of number with binary 100000 to check its 5th bit
		cout<< " Orange \n";
		
	if (color & (1 << 6))				//Taking & of number with binary 1000000 to check its 6th bit
		cout<< " Red \n";
		
	return 0;
}
		
