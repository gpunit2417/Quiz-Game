#include<iostream>
using namespace std;

int playquiz(){
    playInsideFunction:
    cout<<"--------Quiz Game--------"<<endl;
    cout<<"----Please follow the instructions----"<<endl;
    cout<<"Step 1: Quiz contains 10 questions in total"<<endl;
    cout<<"Step 2: You will get 1 marks for each correct option."<<endl;
    cout<<"Step 3: There will be no negative marking."<<endl;
    cout<<"Step 4: Please press s to start the quiz."<<endl;
    cout<<"Step 5: Please select one option for each question."<<endl;
    cout<<"Step 6: Score more than 6 to pass the quiz."<<endl;

    char c;
    cout<<"enter the character s to start the game"<<endl;
    cin>>c;

    int score = 0;

    char option;

    if(c == 's' || c=='S'){
        cout<<"Q1. What is the name of your favourite cricketer?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Virat Kohli  (B) Adam Gilchrist   (C) Chris Gayle   (D) Other"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }
        
        cout<<"Q2. What is the nick name of your favourite cricketer?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Chiku  (B) Mahi   (C) Maxi   (D) Other"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q3. What is the name of your favourite Indian female cricketer?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Smriti Mandhana  (B) Harleen Deol   (C) Punam Raut   (D) Other"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q4. What is the name of your favourite Foreigner female cricketer?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Elysse Perry  (B) Meg Lanning   (C) Sarah Taylor   (D) Other "<<endl;
        cin>>option;

        if(option == 'b' || option == 'B'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q5. In which format is the IPL played?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Test  (B) T-10   (C) T-20   (D) ODI "<<endl;
        cin>>option;

        if(option == 'c' || option == 'C'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q6. Who was the unsung hero of the India vs Australia test at 'The Gabba'?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Rishabh Pant  (B) Ajinkya Rahane   (C) Virat Kohli   (D) Rohit Sharma"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q7. Which team has won the most ICC trophies?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Australia  (B) India   (C) Pakistan   (D) New Zealand"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q8. Which team has won the ODI world cup 2k23 held in india?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Australia  (B) India   (C) Sri Lanka   (D) New Zealand"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q9. Which batsman has the most IPL runs?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Virat Kohli  (B) Adam Gilchrist   (C) Chris Gayle   (D) Shikhar Dhawan"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }

        cout<<"Q10. Who was the orange cap winner in terms of most runs in a single IPL season?"<<endl;
        cout<<"Choose an option from the given options: "<<endl;
        cout<<"(A) Virat Kohli(2016)  (B) Chris Morris(2017)   (C) Chris Gayle(2020)   (D) Rohit Sharma(2012)"<<endl;
        cin>>option;

        if(option == 'a' || option == 'A'){
            score++;
        }
        else{
            score = score;
        }
    }
    else{
        cout<<"Please choose the correct character to proceed with the quiz"<<endl<<endl;
        goto playInsideFunction;
    }

    return score;
}

int main(){
    int finalResult = 0;
    char playAgain;
    int playquiz(void);
    play:
    finalResult = playquiz();

    cout<<"You Scored: "<<finalResult<<endl;

    if(finalResult > 6){
        cout<<"Congratulations! You have been passed in this quiz."<<endl;
        cout<<"Do you want to retake the test? Choose Y or N." <<endl;
        cin>>playAgain;

        if(playAgain == 'y' || playAgain == 'Y'){
            goto play;
        }
        else{
            cout<<"you can play the quiz whenever you want."<<endl;
        }
    }
    else{
        cout<<"Good Try!!! Better luck next time."<<endl;
    }
}