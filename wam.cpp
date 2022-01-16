#include <stdio.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void LevelThree(double& score){
    double tries = 0.0;
    while((tries >= 0) && tries<5){
        char lvlThree [4][4] = {{'O', 'O', 'O', 'O'},{'O', 'O', 'O', 'O'},{'O', 'O', 'O', 'O'}, {'O', '*', 'O', 'O'}};
         int a, b;
        char c, user;
        //nested for loop for 2D array
        for(int j = 0; j<4; j++){
            for(int k = 0; k<4; k++){
                a = rand() % 4;
                b = rand() % 4;
                //intialize new value to retain previous value of the array
                c = lvlThree[j][k];
                lvlThree[j][k] = lvlThree[a][b];
                lvlThree[a][b] = c;
            }//end of insde for loop
        }//end of outside for loop
        
        cout << endl << endl;
        
        for(int j = 0; j<4; j++){
            for(int k = 0; k<4; k++){
                cout << lvlThree[j][k] << " ";
            }//end of inside for loop
            cout << endl;
        }//end of outside for loop
        
        
        
        cout << "Enter the location of the mole:";
        cin >> user;
        if (user != 'Q' && user != 'W' && user != 'E' && user != 'A' && user != 'S' && user != 'D'
            && user != 'Z' && user != 'X' && user != 'C' && user !='1' && user != '2' && user != '3'
            && user != '4' && user != 'R' && user != 'F' && user != 'V'){
            cout << "Whoops! You must enter a valid option." << endl;
            tries++;
        }else{
            if(user == '1' && lvlThree[0][0]== '*' ){
                score++;
                tries++;
        }
            if(user == '1' && lvlThree[0][0]!= '*' ){
                tries++;
        }
            if(user == '2' && lvlThree[0][1]== '*' ){
                score++;
                tries++;
        }
            if(user == '2' && lvlThree[0][1]!= '*' ){
                tries++;
                
        }    if(user == '3' && lvlThree[0][2]== '*' ){
                score++;
                tries++;
        }
            if(user == '3' && lvlThree[0][2]!= '*' ){
                tries++;
                
        }    if(user == '4' && lvlThree[0][3]== '*' ){
                score++;
                tries++;
        }
            if(user == '4' && lvlThree[0][3]!= '*' ){
                tries++;
                
        }    if(user == 'Q' && lvlThree[1][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'Q' && lvlThree[1][0]!= '*' ){
                tries++;
                
        }    if(user == 'W' && lvlThree[1][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'W' && lvlThree[1][1]!= '*' ){
                tries++;
                
        }    if(user == 'E' && lvlThree[1][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'E' && lvlThree[1][2]!= '*' ){
                tries++;
                
        }    if(user == 'R' && lvlThree[1][3]== '*' ){
                score++;
                tries++;
        }
            if(user == 'R' && lvlThree[1][3]!= '*' ){
                tries++;
                
        }    if(user == 'A' && lvlThree[2][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'A' && lvlThree[2][0]!= '*' ){
                tries++;
                
        }    if(user == 'S' && lvlThree[2][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'S' && lvlThree[2][1]!= '*' ){
                tries++;
                
        }    if(user == 'D' && lvlThree[2][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'D' && lvlThree[2][2]!= '*' ){
                tries++;
                
        }    if(user == 'F' && lvlThree[2][3]== '*' ){
                score++;
                tries++;
        }
            if(user == 'F' && lvlThree[2][3]!= '*' ){
                tries++;
                
        }    if(user == 'Z' && lvlThree[3][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'Z' && lvlThree[3][0]!= '*' ){
                tries++;
                
        }    if(user == 'X' && lvlThree[3][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'X' && lvlThree[3][1]!= '*' ){
                tries++;
                
        }    if(user == 'C' && lvlThree[3][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'C' && lvlThree[3][2]!= '*' ){
                tries++;
                
        }    if(user == 'V' && lvlThree[3][3]== '*' ){
                score++;
                tries++;
        }
            if(user == 'V' && lvlThree[3][3]!= '*' ){
                tries++;
        }
        cout << "Your score is: " << score << endl;
    }
        }//end of else statement
        if((score/(tries) + 10) >= (8/10)){
        cout << "You have completed the game!!";
        
    }
}//end of while

void LevelTwo(double& score){
    double tries = 0.0;
    while((tries >= 0) && tries<5){
        char lvlTwo [3][3] = {{'O', 'O', 'O'},{'O', 'O', 'O'}, {'O', '*', 'O'}};
         int a, b;
        char c, user;
        //nested for loop for 2D array
        for(int j = 0; j<3; j++){
            for(int k = 0; k<3; k++){
                a = rand() % 3;
                b = rand() % 3;
                //intialize new value to retain previous value of the array
                c = lvlTwo[j][k];
                lvlTwo[j][k] = lvlTwo[a][b];
                lvlTwo[a][b] = c;
            }//end of insde for loop
        }//end of outside for loop
        
        cout << endl << endl;
        
        for(int j = 0; j<3; j++){
            for(int k = 0; k<3; k++){
                cout << lvlTwo[j][k] << " ";
            }//end of inside for loop
            cout << endl;
        }//end of outside for loop
        
        
        
        cout << "Enter the location of the mole:";
        cin >> user;
        if (user != 'Q' && user != 'W' && user != 'E' && user != 'A' && user != 'S' && user != 'D'
            && user != 'Z' && user != 'X' && user != 'C'){
            cout << "Whoops! You must enter a valid option." << endl;
            tries++;
        }else{
            if(user == 'Q' && lvlTwo[0][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'Q' && lvlTwo[0][0]!= '*' ){
                tries++;
        }
            if(user == 'W' && lvlTwo[0][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'W' && lvlTwo[0][1]!= '*' ){
                tries++;
        }
            if(user == 'E' && lvlTwo[0][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'E' && lvlTwo[0][2]!= '*' ){
                tries++;
        }
            if(user == 'A' && lvlTwo[1][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'A' && lvlTwo[1][0]!= '*' ){
                tries++;
        }
            if(user == 'S' && lvlTwo[1][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'S' && lvlTwo[1][1]!= '*' ){
                tries++;
        }
            if(user == 'D' && lvlTwo[1][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'D' && lvlTwo[1][2]!= '*' ){
                tries++;
        }        
            if(user == 'Z' && lvlTwo[2][0]== '*' ){
                score++;
                tries++;
        }
            if(user == 'Z' && lvlTwo[2][0]!= '*' ){
                tries++;
        }
            if(user == 'X' && lvlTwo[2][1]== '*' ){
                score++;
                tries++;
        }
            if(user == 'X' && lvlTwo[2][1]!= '*' ){
                tries++;
        } 
            if(user == 'C' && lvlTwo[2][2]== '*' ){
                score++;
                tries++;
        }
            if(user == 'C' && lvlTwo[2][2]!= '*' ){
                tries++;
        }
        cout << "Your score is: " << score << endl;
    }
        }//end of else statement
        if((score/(tries + 5) >= (8/10))){
        cout << "You have advanced to level three!!";
        LevelThree(score);
    }
    }//end of while
    
    
    
void LevelOne(){
    double score = 0.0;
    double tries = 0.0;
    char user;
    char lvlOne [2][2] = {{'O', '*'},{'O', 'O'}};
    srand(time(NULL));
    
    //code for displaying the game baord
    while((tries >= 0) && tries<5){
        int a, b;
        char c;
        //nested for loop for 2D array
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                a = rand() % 2;
                b = rand() % 2;
                //intialize new value to retain previous value of the array
                c = lvlOne[j][k];
                lvlOne[j][k] = lvlOne[a][b];
                lvlOne[a][b] = c;
            }//end of insde for loop
        }//end of outside for loop
        
        cout << endl << endl;
        
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                cout << lvlOne[j][k] << " ";
            }//end of inside for loop
            cout << endl;
        }//end of outside for loop
        
        
        
        cout << "Enter the location of the mole:";
        cin >> user;
        if (user != 'Q' && user != 'W' && user != 'A' && user != 'S'){
            cout << "Whoops! You must enter a valid option." << endl;
            tries++;
        }else{
        if(user == 'Q' && lvlOne[0][0]== '*'){
            score++;
            tries++;
        }
        if(user == 'Q'  && lvlOne[0][0]!= '*' ){
            tries++;
        }
        if(user == 'W'  && lvlOne[0][1]== '*' ){
            score++;
            tries++;
        }
        if(user == 'W'  && lvlOne[0][1]!= '*' ){
            tries++;
        }
        if(user == 'A'   && lvlOne[1][0]== '*' ){
            score++;
            tries++;
        }
        if(user == 'A'  && lvlOne[1][0]!= '*' ){
            tries++;
        }
        if(user == 'S'  && lvlOne[1][1]== '*' ){
            score++;
            tries++;
        }
        if(user == 'S' && lvlOne[1][1]!= '*' ){
            tries++;
        }
        }
        cout << "Your score is: " << score << endl;
    }//end of while loop
    
    if((score/tries) == (1)){
        cout << "You must be a genius!" << endl;
        cout << "You have advanced to level Two!!";
        LevelTwo(score);
    }
    else if((score/tries)>= (.8)){
        cout << "You must be a master!" << endl;
        cout << "You have advanced to level Two!!";
        LevelTwo(score);
    }
    else if((score/tries) >=(.5) && (score/tries) <(.8)){
        cout << "You could do better!" << endl;
    }
    else{
        cout << "“Not good...";
    }
}


void PrintMenu(){
    int answer;
    cout << "Main Menu" << endl;
    cout << "1. Play Whac A Mole" << "\n2. Instructions" << endl;
    cout << "Choose an option: ";
    cin >> answer;
    
    if(answer == 1){
        LevelOne();
    }
    else if(answer ==2){
        
    }
    else{
        cout << "That was not a valid option";
    }
    
}


int main() {
    PrintMenu();

return 0; 
}




