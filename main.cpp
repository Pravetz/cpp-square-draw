#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
int w, h, lw, ttp, c;
string st="*";

void drawtriangle()
{
	int CASE;
	srand(time(0));
	CASE = rand() % 2 + 1;
	if(CASE==1){
		for(int i=0; i<=7; i++){
			for(int j=1; j<=i; j++){
				cout<<st;
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
				cout<<st;
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
			cout<<st;}
	if(CASE==2){
		for(int i=0; i<lw+1; i++)
			cout<<st<<endl;}
}
void draw()
{
	for(int i=0; i<w+1; i++) //width
		cout<<st;
		cout<<endl;
		
	for(int i=0; i<h; i++){		//height
		for(int j=0; j<w; j++){
			if(j==0 || j==w-1)
			cout<<st;
			cout<<" ";
		}
		cout<<""<<endl;
	}
			
	for(int i=0; i<w+1; i++) //also width
		cout<<st;
		cout<<endl;
	
}
void geometry()
{
	if(w==h)
		cout<<"Square ("<<"S="<<""<<w*h<<")"<<endl;
	if(w>h||w<h)
		cout<<"Rectangle ("<<"S="<<""<<w<<"*"<<h<<"="<<w*h<<")"<<endl;
}
int choice()
{
	cout<<"(Enter a number)Draw: "<<endl;
	cout<<"1. Square"<<endl;
	cout<<"2. Line"<<endl;
	cout<<"3. Triangle"<<endl;
	cout<<"4. Customize figure border"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>c;
	if(c==4){
		cout<<"Enter a symbol:";
		cin>>st;
		st=st[0];
		cout<<"Draw:";
		cin>>c;
	}
	return 0;
}

int main()
{
	while(c!=1&&c!=2&&c!=3){
	choice();
	if(c==1){
	cout<<"Enter width: ";
	cin>>w;
	cout<<"Enter height: ";
	cin>>h;
	draw();
	geometry();}
	if(c==2){
		cout<<"Enter line width: ";
		cin>>lw;
		drawline();
	}
	if(c==3){
		drawtriangle();
		}
	if(c==5){
		exit(0);
		}
	if(c>5)
		cout<<"invalid choice"<<endl;
	}
}
