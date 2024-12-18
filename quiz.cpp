#include <iostream>

using namespace std;

int main() {
	// writing a quiz
	string ans;
	int score;
	int percent;
	int correctAns = 0;
	double const totalPercent = 100;
	bool isIn = false;
	double numOfQuestion = 0;
	double numOfWrong = 0;
	char ans1,ans2,ans3,ans4,ans5;
	string options[8] = {"A","a","B","b","C","c","D","d"};
	//first question
	cout<<"1.What is the largest animal on earth?"<<endl;
	numOfQuestion++;
	cout<<"A.Leopard\n B.Hippotamus\n C.Blue Whale\n D.Elephant\n";
	cin>>ans;
	if (ans == "C" || ans=="c"){
		cout<<"Correct!!\n\n";
		correctAns++;
		
	}
	else{
		cout<<"OOops...Wrong\n\n";
		numOfWrong++;
	}
	
	//second question	
	cout<<"2.what is the Capital city of Egypt\n";
	numOfQuestion++;
	cout<<"A.Lesotho\n B.Nairobi\n C. Antananaviro\n D.Cairo\n";
	cin>>ans;
	if (ans == "D" || ans=="d"){
		cout<<"Correct!!\n\n";
		correctAns++;
		
	}else{
		cout<<"OOops...Wrong\n\n";
		numOfWrong++;
	}
	//third question
	cout<<"3.Which of the following are primary colors in the RGB color model\n\n";
	numOfQuestion++;
	cout<<"hint:choose two option for correct ans\n\n";
	cout<<"A.Red\n B.Yellow\n C. Green\n D.Brown\n";
	cin>>ans;
	if((ans=="A"|| ans=="a" ) && (ans=="C" || ans=="c")){
		cout<<"Correct";
		correctAns++;
	}	else{
		cout<<"OOops....Wrong\n\n";
		numOfWrong++;
	}
	
	// fourth Question
	cout<<"4. what is the largest bird in the world\n\n";
	numOfQuestion++;
	cout<<"A.Ostrich\n B.Eagle\n C. Owl\n D.Vulture\n";
	cin>>ans;
	if (ans == "A"|| ans=="a"){
		cout<<"Correct\n\n";
		correctAns++;
	}else{
		cout<<"Oops..Wrong\n\n";
		numOfWrong++;
	}
	
	//fifth question
	cout<<"5. Which of the following countries is part of United Kingdom(UK)\n\n";
	numOfQuestion++;
	cout<<"A.USA\n B.Canada\n C. Austria\n D.Wales\n";
	cin>>ans;
	if (ans == "D" || ans == "d"){
		cout<<"Correct\n\n";
		correctAns++;
	}else{
		cout<<"Oops..Wrong\n\n";
		numOfWrong++;
	}
	system("cls");
	cout<<"You scored "<<correctAns<<"/"<<numOfQuestion<<endl;
	cout<<"You got "<<numOfWrong<<" wrongs\n";
	percent = (correctAns/numOfQuestion) * totalPercent;
	cout<<"Your percentage is "<<percent<<"%"<<endl; 
	
	// if the user fails he or she will do it again here
	if(percent== 100){
		cout<<"Excellent"<<endl;
	} else if(percent>= 80){
		cout<<"Well Done"<<endl;
		
	}else if(percent >= 60){
		cout<<"Pass"<<endl;
	
	}else{
		cout<<"Failed"<<endl<<endl;
		cout<<"You have to do it again\n\n";
		
		while (percent <= 40){
				//first question
				correctAns = 0;
				numOfQuestion = 0;
				numOfWrong = 0;
			cout<<"1.What is the largest animal on earth?"<<endl;
			numOfQuestion++;
			cout<<"A.Leopard\n B.Hippotamus\n C.Blue Whale\n D.Elephant\n";
			cin>>ans;
			if (ans == "C" || ans=="c"){
				cout<<"Correct!!\n\n";
				correctAns++;
				
			}
			else{
				cout<<"OOops...Wrong\n\n";
				numOfWrong++;
			}
			
			//second question	
			cout<<"2.what is the Capital city of Egypt\n";
			numOfQuestion++;
			cout<<"A.Lesotho\n B.Nairobi\n C. Antananaviro\n D.Cairo\n";
			cin>>ans;
			if (ans == "D" || ans=="d"){
				cout<<"Correct!!\n\n";
				correctAns++;
				
			}else{
				cout<<"OOops...Wrong\n\n";
				numOfWrong++;
			}
			//third question
			cout<<"3.Which of the following are primary colors in the RGB color model\n\n";
			numOfQuestion++;
			cout<<"hint:choose two option for correct ans\n\n";
			cout<<"A.Red\n B.Yellow\n C. Green\n D.Brown\n";
			cin>>ans;
			if((ans=="A"|| ans=="a" ) && (ans=="C" || ans=="c")){
				cout<<"Correct";
				correctAns++;
			}	else{
				cout<<"OOops....Wrong\n\n";
				numOfWrong++;
			}
			
			// fourth Question
			cout<<"4. what is the largest bird in the world\n\n";
			numOfQuestion++;
			cout<<"A.Ostrich\n B.Eagle\n C. Owl\n D.Vulture\n";
			cin>>ans;
			if (ans == "A"|| ans=="a"){
				cout<<"Correct\n\n";
				correctAns++;
			}else{
				cout<<"Oops..Wrong\n\n";
				numOfWrong++;
			}
			
			//fifth question
			cout<<"5. Which of the following countries is part of United Kingdom(UK)\n\n";
			numOfQuestion++;
			cout<<"A.USA\n B.Canada\n C. Austria\n D.Wales\n";
			cin>>ans;
			if (ans == "D" || ans == "d"){
				cout<<"Correct\n\n";
				correctAns++;
			}else{
				cout<<"Oops..Wrong\n\n";
				numOfWrong++;
			}
			cout<<"You scored "<<correctAns<<"/"<<numOfQuestion<<endl;
			cout<<"You got "<<numOfWrong<<" wrongs\n";
			percent = (correctAns/numOfQuestion) * totalPercent;
			cout<<"Your percentage is "<<percent<<"%"<<endl;
				}
			}
	return 0;
}
