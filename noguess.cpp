#include<iostream>
using namespace std;
int main(){
    int randNo=(rand() % 100 + 1)
    int guess=0;
    int attempts=0;
    cout<<"*****THIS IS A NUMBER GUESSING GAME*****"<<endl;
    cout<<"I have generated a random number!"<<endl;
    do{
        cout<<"Enter your number guess between (1-100): ";
        cin>>guess;
        attempts++;
        if(guess<randNo){
            cout<<"Your guess is too low! Guess again.\n";
        }
        else if(guess>randNo){
            cout<<"Your guess is too high! Guess again.\n";
        }
        else{
            cout<<"COngrats! You guessed it right.\n";
        } 
    }
    while(guess!=randNo);
    return 0;
}
