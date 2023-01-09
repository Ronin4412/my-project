#include<iostream>
#include<time.h>//we are using this library because no will be
                 //generated against current time of computer.     
using namespace std;

int random(int x){
    int upper = 100;
    int lower =  30;
    srand(time(0));

    x = (rand() % ((upper - lower + 1)) + lower);//this is to use 
                                  // to gen rand no in given range;
    return x;
}

int main() {
    char first;
    int no;
    int input;
    int count = 1;

    cout<<"do you want to play this game ? "<<endl;
    cout<<"please press y for confirmation"<<endl;
    cin>>first;

    if(first == 'y'){
        cout<<"thank u for confirmation !"<<endl;
        cout<<"good luck ^_~  (⓿_⓿)"<<endl;
        random(no);
        int z = random(no);
        //cout<<"random no is "<<z;
        int t = (random(no)/10) * 10;
        int u = t + 10;

        cout<<"guess the no "<<endl;
        cin>>input;
        while(input != z){
            count++;
         if(input > z)
        {
            cout<<"please enter a no smaller than before"<<endl;
        }
        else{
            cout<<"pleae enter a no greater than before"<<endl;
        }
        cin>>input;
        if(count == 4){
            cout<<"beta tumhari kismat acchi nahi "<<endl;
            cout<<"ye lo clue lelo ( ﾟдﾟ)つ Bye "<<endl;
            cout<<"no is between "<<t<<" and "<<u<<endl;

        }
        if(input == z){
            cout<<"congrats you have guessed correctly"<<endl;
            return 0;
        }
        

    }
    }
    else{
        cout<<"mat khel mera kya jata h"<<endl;
    }
    return 0;

}

