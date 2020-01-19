#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
int w, h, lw;

void drawline()
{
	int CASE;
	srand(time(0));
	CASE = rand() % 2 + 1;
	if(CASE==1){
		for(int i=0; i<lw+1; i++)
			cout<<"*";}
	if(CASE==2){
		for(int i=0; i<lw+1; i++)
			cout<<"*"<<endl;}
}
void draw()
{
	for(int i=0; i<w+1; i++) //width
		cout<<"*";
		cout<<""<<endl;
		
	for(int i=0; i<h; i++){		//height
		for(int j=0; j<w; j++){
			if(j==0 || j==w-1)
			cout<<"*";
			cout<<" ";
		}
		cout<<""<<endl;
	}
			
	for(int i=0; i<w+1; i++) //also width
		cout<<"*";
		cout<<""<<endl;
	
}
void geometry()
{
	if(w==h)
		cout<<"Square ("<<w*h<<")"<<endl;
	if(w>h||w<h)
		cout<<"Rectangle ("<<w<<"*"<<h<<"="<<w*h<<")"<<endl;
}
int choice()
{
	int c;
	cout<<"(Enter a number)Draw: "<<endl;
	cout<<"1. Square"<<endl;
	cout<<"2. Line"<<endl;
	cin>>c;
	if(c!=1&&c!=2) /*automaticly sets c(choice) to 2 if c is not equal to 1 or 2*/
		c=2;
	if(c==1)
		return 0;
	if(c==2)
		return 1;
		
	return 0;
}

int main()
{
	int cdone=0;
	cdone=choice();
	if(cdone==0){
	cout<<"Enter width: ";
	cin>>w;
	cout<<"Enter height: ";
	cin>>h;
	draw();
	geometry();}
	if(cdone==1){
		cout<<"Enter line width: ";
		cin>>lw;
		drawline();
	}
	
}
