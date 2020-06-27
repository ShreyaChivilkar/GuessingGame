#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int cash = 100;
void play(int bet)
{
    char c[3] = {'j','q','k'};
    cout<<"Shuffling......";
    srand(time(NULL));
    int i;
    for(i =0; i<5; i++)
    {
        int X = rand()%3;
        int Y = rand()%3;
        int temp = c[X];
        c[X] = c[Y];
        c[Y]= temp;
        
    }
    

    int player_guess;
    cout<<"What is the position of queen:    ";
    cin>>player_guess;
    if(c[player_guess-1]== 'q')
    {
        cash = cash + 3* bet;
        cout<<"You Win!!!!!...";
    }
    else
    {
        cash -= bet;
        cout<<"You Lose :(";
    }

}

int main()
{
    int bet;
    cout<<"Welcome!.....";
    
    while(cash>0)
    {
        cout<<"\nAvailable Cash is: "<<cash;
        cout<<"\n What is your bet?\n ";
        
        cin>>bet;
        if( (bet == 0)|| (bet > cash))

        {
            break;
        }

        play(bet);
    }

}