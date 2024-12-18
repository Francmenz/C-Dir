#include <iostream>
#include <cmath>
using namespace std;


// building a dummy a calculator from basic operation
double calculator(){
	double num_1, num_2;
	double add,subtract,divide,multiply;
	string option = "";
	//giving an introduction to our simple program
	cout<<"WELCOME TO OUR BASIC CALCUS...\n\n\n";
	cout<<"SELECT AN OPTION BELOW........\n\n\n";
	cout<<"1.ADD\n";
	cout<<"2.SUBTRACT\n";
	cout<<"3.MULTIPLY\n";
	cout<<"4.DIVIDE\n\n\n";
	cin>>option;
	if(option == "1"){
		cout<<"YOU WANNA ADD TWO NUMBERS.....\n\n";
		cout<<"Enter your first number"<<endl;
		cin>>num_1;
		system("cls");
		cout<<"Enter your second number"<<endl;
		cin>>num_2;
		system("cls");
		add = num_1 + num_2;
		cout<<num_1<<" Plus "<<num_2<<" is "<<add;
		
	}else if(option== "2"){
		cout<<"YOU WANNA SUBTRACT TWO NUMBERS......\n\n";
		cout<<"Enter your first number"<<endl;
		cin>>num_1;
		system("cls");
		cout<<"Enter your second number"<<endl;
		cin>>num_2;
		system("cls");
		subtract = num_1 - num_2;
		cout<<num_1<<" Minus "<<num_2<<" is "<<subtract;
		
	}
	else if(option=="3"){
		cout<<"YOU WANNA MULTIPLY TWO NUMBERS......\n\n";
		cout<<"Enter your first number"<<endl;
		cin>>num_1;
		system("cls");
		cout<<"Enter your second number"<<endl;
		cin>>num_2;
		system("cls");
		multiply = num_1 * num_2;
		cout<<num_1<<" Multiply by "<<num_2<<" is "<<multiply;
	}


	else if(option == "4"){
		cout<<"YOU WANNA DIVIDE TWO NUMBERS......\n\n";
		cout<<"Enter your first number"<<endl;
		cin>>num_1;
		system("cls");
		cout<<"Enter your second number"<<endl;
		cin>>num_2;
		system("cls");
		divide = num_1 / num_2;
		cout<<num_1<<" Divided by "<<num_2<<" is "<<divide;
	}
	else{
		
		cout<<"Oops!!!"<<endl;
		cout<<"You Entered a wrong option";
	}
	
}
int main(){
	
	calculator();

	
	return 0;
}
