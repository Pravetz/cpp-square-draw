#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
int w, h, lw, ttp;

void drawtriangle()
{
	int CASE;
	srand(time(0));
	CASE = rand() % 2 + 1;
	if(CASE==1){
		for(int i=0; i<=7; i++){
			for(int j=1; j<=i; j++){
				cout<<"*";
				}
			cout<<""<<endl;
			}
		
		}
	if(CASE==2){
		for(int i=0; i<7; i++){
			for(int j=0; j<i; j++){
				cout<<" ";
				}
			for(int l=7; l>=i; l--){
				cout<<"*";
				}
			cout<<""<<endl;
			}
		
		}		
}
	

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
		cout<<endl;
		
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
		cout<<endl;
	
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
	cout<<"3. Triangle"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>c;
	if(c!=1&&c!=2&&c!=3&&c!=4) /*automatically sets c(choice) to 3 if c is not equal to 1, 2, 3 or 4 */
		c=3;
	if(c==1)
		return 0;
	if(c==2)
		return 1;
	if(c==3)
		return 2;
	if(c==4)
		return 3;
		
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
	if(cdone==2){
		drawtriangle();
		}
	if(cdone==3){
		return 0;
		}
	
}
