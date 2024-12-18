#include <iostream>
#include <vector>
#include <cmath>

//building a guessing game from scratch
using namespace std;
 int main(){
 	int secretNumber = 9;
 	int guessLimit = 3;
 	int guessCounter = 1;
 	int number;
 	cout<<"Enter your guess number"<<endl;
 	cin>>number;
 	if (number == secretNumber){
 		cout<<"WOw!....YOU WON!";
 		
	 }
	 else{
 		while (number != secretNumber){
	 		cout<<"That's isn't the secret number... Enter it Again"<<endl;
	 		cin>>number;
	 		guessCounter++;
	 		if (number == secretNumber){
 				cout<<"WOw!....YOU WON!";
 			}
 			if (guessCounter == 2 && number != secretNumber){
 				cout<<"Your Last Guess\n";
 				
			 }
	 		if (guessCounter == guessLimit && number != secretNumber){
	 			cout<<"You lose";
	 			break;	
	 }
	
	 }
}
	return 0;
}
