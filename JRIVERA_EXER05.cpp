/*
* Programmer: RIVERA, James Andrei C.
* Date Created: 10/05/18
* Terminal No: 26
* Program: BSIT
* Course / Section: CS126-8L/AT3
* Purpose: Using switch case statement, create a C++ program that will prompt the 
user to enter a letter in an alphabet A-Z and display the corresponding object.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declaration
	const int sizeR=5;
	const int sizeC=5;
	int r, c;
	char let,yn;
	
	//input
	do{
		
	cout<<"Enter an Alphabet letter from A-Z: ";
	cin>>let;
	cout<<endl;
	let=toupper(let);
	

	switch(let)
	{
		case 'A':
			cout<<left;
			for (r=1;r<=sizeR;r++)
			{//start of outer loop
				for(c=1;c<=sizeC;c++)
				{//start of inner loop
					if (((c>1&&c<sizeC)&&(r==1||r==3))||((r>1)&&(c==1||c==sizeC)))
					cout<<"A";
					else
						cout<<" ";
				}//end of inner loop
				cout<<endl;
			}//end of outer loop
		break;		

		case 'B':
			cout<<left;
			for (r=1;r<=sizeR;r++)
			{//start of outer loop
				for(c=1;c<=sizeC;c++)
				{//start of inner loop
					if ((r==1||r==3||r==sizeR)&&(c<sizeC)||(r==2||r==4)&&(c==1||c==sizeC))
					cout<<"B";
					else
						cout<<" ";
				}//end of inner loop
				cout<<endl;
			}//end of outer loop
		break;	

		case 'C':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{//start of outer loop
				for (c=1;c<=sizeC;c++)
				{//start of inner loop
					if ((c==1&&(r>1&&r<sizeR))||(c>1&&(r==1||r==sizeR)))
					cout<<"C";
					else
						cout<<" ";
				}//end of inner loop
				cout<<endl;
			}//end of outer loop
		break;	

		case 'D':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{//start of outer loop
				for (c=1;c<=sizeC;c++)
				{//start of inner loop
					if (c<sizeC&&(r==1||r==sizeR)||(c==1||c==sizeC)&&(r>1&&r<sizeR))
					cout<<"D";
					else
						cout<<" ";
				}//end of inner loop
				cout<<endl;
			}//end of outer loop
		break;	
			
		case 'E':
			cout<<left;
			for (r=1;r<=sizeR;r++)
			{
				for(c=1;c<=sizeC;c++)
				{
					if ((r==1||r==sizeR)||(c==1)||(r==3&&c<sizeC-1))
					cout<<"E";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
			case 'F':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (r==1||c==1||r==3&&c<sizeC-1)
					cout<<"F";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
			case 'G':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if((c==sizeC&&!(r==2))||(c==1&&(r>1&&r<sizeR))||((r==1||r==sizeR)&&(c>1&&c<sizeC))||(r==3&&(c>2&&c<sizeC)))
					cout<<"G";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'H':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (r==3||c==1||c==sizeC)
					cout<<"H";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'I':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (c==3||r==1||r==sizeR)
					cout<<"I";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'J':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==sizeC&&r<sizeR)||(r==sizeR&&(c>1&&c<sizeC))||(c==1&&r==sizeR-1))
					cout<<"J";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'K':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==r&&c>3)||(c==1)||(r==3&&c<sizeR-1)||(r==1&&c==sizeC)||(r==2&&c==sizeC-1))
					cout<<"K";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
				
		case 'L':
			cout<<left;
			for (r=1;r<=sizeR;r++)
			{
				for(c=1;c<=sizeC;c++)
				{
					if (c==1||r==sizeR)
					cout<<"L";
					else
						cout<<" ";
				}//end of inner loop
				cout<<endl;
			}//end of outer loop
		break;
		
		case 'M':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==1||c==sizeC)||(r==2&&!(c==3))||(r==3&&c==3))
					cout<<"M";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'N':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==1||c==sizeC)||(r==c))
					cout<<"N";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'O':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for(c=1;c<=sizeC;c++)
				{
					if(((c==1||c==sizeC)&&(r<=sizeR-1))||
					((r==1||r==sizeR-1)&&(c>=1&&c<=sizeC-1)))
					cout<<"O";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'P':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==1)||((r==1||r==3)&&c<sizeR)||(r==2&&c==sizeC))
					cout<<"P";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		
		case 'Q':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==1&&(r>1&&r<sizeR))||(c>2&&c==r)||(r==sizeR&&(c==2||c==3))||(r==1&&(c>1&&c<sizeC))||(c==sizeC&&(r==2||r==3)))
					cout<<"Q";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'R':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c<sizeC&&(r==1||r==3))||(c==1)||(r==2&&c==sizeC)||(c>2&&c==r))
					cout<<"R";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'S':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (((r==1||r==3||r==sizeR)&&(c>1&&c<sizeC))||(r==2&&c==1)||(r==sizeR-1&&c==sizeC))
					cout<<"S";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'T':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (c==3||r==1)
					cout<<"T";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'U':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (((r<sizeR)&&(c==1||c==sizeC))||(r==sizeR&&(c>1&&c<sizeC)))
					cout<<"U";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'V':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (((r<sizeR-1)&&(c==1||c==sizeC))||((c==2||c==sizeC-1)&&r==sizeR-1)||(c==3&&r==sizeR))
					cout<<"V";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'W':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (((r<sizeR)&&(c==1||c==sizeC))||(r==sizeR&&(c==2||c==4))||(r==4&&c==3))
					cout<<"W";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'X':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if ((c==r)||(c==sizeC&&r==1)||(c==sizeC-1&&r==2)||(r==sizeR-1&&c==2)||(r==sizeR&&c==1))
					cout<<"X";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'Y':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for (c=1;c<=sizeC;c++)
				{
					if (((c==1||c==sizeC)&&r==1)||((c==2||c==sizeC-1)&&r==2)||(c==3&&r>2))
					cout<<"Y";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		case 'Z':
			cout<<left;
			for(r=1;r<=sizeR;r++)
			{
				for(c=1;c<=sizeC;c++)
				{
					if ((r==1||r==sizeR)||(c==2&&r==4)||(c==3&&r==3)||(c==4&&r==2))
					cout<<"*";
					else
						cout<<" ";
				}//end of inner-loop
				cout<<endl;
			}//end of outer-loop
		break;
		
		default:
		cout<<"Invalid Alphabet must be from A-Z only!\n";
		
	}//end of switch
	
	do{
		cout<<"\nDo you want to try again?[y/n]: ";
		cin>>yn;
		yn=toupper(yn);
	}while (yn!='Y'&&yn!='N');
	
	}while (yn=='Y');
	
	return 0;
}//end of code
