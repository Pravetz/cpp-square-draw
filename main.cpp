#include <iostream>
#include <string>

using namespace std;
int w, h;

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

int main()
{
	cout<<"Enter width: ";
	cin>>w;
	cout<<"Enter height: ";
	cin>>h;
	draw();
	geometry();
}
