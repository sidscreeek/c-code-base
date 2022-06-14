#include<bits/stdc++.h>
using namespace std;

class match
{
    string name;
    int numberOfmatches;
    int runsScored;
    public:
    static int maxRuns;
    static int maxMatch;
    static int count;

    match()
    {
       numberOfmatches = 0;
       runsScored = 0;
      
    }

    void setName() //setting name of player
    {
        cout<<"\nEnter the name of the player:";
        cin>>this->name;
    }
    
    void setMatch()
    {
        
        cout<<"Enter the number of matches palyed: ";
        cin>>this->numberOfmatches;
        //maxMatch = max(maxMatch,numberOfmatches);
    } 
    void setRuns()
    {
        
        cout<<"Enter the number of runs scored: ";
        cin>>this->runsScored;
        //maxRuns =  max(maxRuns,runsScored);
    }

    // int maxRun()
    // {
    //     return maxRuns;
    // }

    void display()
    {
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"Matches Played:"<<this->numberOfmatches<<endl;
        cout<<"Runs Scored:"<<this->runsScored<<endl;
        cout<<"---------------------------------------------"<<endl;
    }


    int mRuns()
    {
       maxRuns=max(this->runsScored,maxRuns) ;
       return maxRuns;
    }
    int mMatches()
    {
       maxMatch=max(this->numberOfmatches,maxMatch) ;
       return maxMatch;
    }
    


};

int match::maxRuns=0;
int match::maxMatch=0;
int match::count=0;


int main()
{   int ct,mt;
    int choice;
    match obj[5];
    for(int i=0;i<5;i++)
    {
        obj[i].setName();
        obj[i].setMatch();
        obj[i].setRuns();
       
    }

    
     do
     {
         cout<<"Enter 1 for displaying player's information"<<endl;
         cout<<"Enter 2 for displaying maximum total runs"<<endl;
         cout<<"Enter 3 for displaying most number of matches"<<endl;
         cout<<"Enter -1 to exit"<<endl;
         
         cin>>choice;

         switch (choice)
        {
         case 1 :
            for(int i=0;i<5;i++)
            {
                obj[i].display();
            }
            break;
         case 2 :
         for(int i=0;i<5;i++)
         {
             ct = obj[i].mRuns(); 
         }
         cout<<"MAX RUNS SCORED BY:"<<ct<<endl;
         break;

         case 3 :
          
         for(int i=0;i<5;i++)
         {
             mt = obj[i].mMatches(); 
         }
         cout<<"MOST NUMBER OF MATCHES PLAYED:"<<mt<<endl;
         break;         
         default: cout<<"Invalid choice";
             break;
        }
     } while (choice!=-1);
}