#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void Bucle();
int participantes[5];

int main(){
	Bucle();
}

void Bucle(){
	cout<<"[1]Dumba= "<<participantes[0]<<endl;
	cout<<"[2]Kubin= "<<participantes[1]<<endl;
	cout<<"[3]Yino= "<<participantes[2]<<endl;
	cout<<"[4]Tuca= "<<participantes[3]<<endl;
	switch(getch()){
		case '1':
			participantes[0]++;
			break;
		case '2':
			participantes[1]++;
			break;
		case '3':
			participantes[2]++;
			break;
		case '4':
			participantes[3]++;
			break;
		case '-':	
			switch(getch()){
				case '1':
					participantes[0]--;
					break;
				case '2':
					participantes[1]--;
					break;
				case '3':
					participantes[2]--;
					break;
				case '4':
					participantes[3]--;
					break;
			}	
			break;
		case 'R':
		case 'r':
			participantes[0]=0; participantes[1]=0; participantes[2]=0; participantes[3]=0; 			
			break;
		case 'Q':
		case 'q':
			system("cls");
			cout<<"chau"<<endl;
			exit(1);
			break;
	}
	system("cls");
	Bucle();	
}
