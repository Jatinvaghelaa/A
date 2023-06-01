// WAP TO CRICKETER INFO USING SINGLE INHERITANCE

#include<iostream>
using namespace std; 
class A    
{
public:

    int run, match, balls, best; 
    char bn[50], from[50]; 
    float avg, str; // VARIABLE FOR FLOATING VALUE
    
    int getdata()
    {
        // TAKE USER INPUT
        cout<<"Enter Batsman name : ";
        cin>>bn;
        cout<<"Where Batsman from : ";
        cin>>from;
        cout<<"Total Runs : ";
        cin>>run;
        cout<<"Total Match : ";
        cin>>match;
        cout<<"Ball Faced : ";
        cin>>balls;
        cout<<"Best Score : ";
        cin>>best;
        return 0;
    }
};

class B : public A // DERIVED CLASS : BASE CLASS
{
public:
    int showdata()
    {
        // USER OUTPUT
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN 
        cout<<"\nAvarage Is = "<<avg;
        
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN STRIKE RATE
        str = (float (run) / balls) * 100; 
        cout<<"\nStrike Rate Is = "<<str;
        
        cout<<"ScoreCard";
        cout<<endl<<bn << " " << from;

        cout<< "Matches Runs " "________"   " Avarage " "_______ "  " Strike Rate ""__________  "" _________" " Best Score"; 
        cout<<endl<<    match<<"        "<<run<<"  "<<avg<<"  "<<str<<"        "<< best;
           
                
        
        
        /* avg = (float)run / (float)match; // CALCULATION FOR BATSMAN AVERAGE
        cout<<"\nAvarage Is = "<<avg;
        
        avg = (float)run / (float)match; // CALCULATION FOR BATSMAN STRIKE RATE
        str = (float (run) / balls) * 100; 
        cout<<"\nStrike Rate Is = "<<str; */
        return 0;
    }
};

int main() // MAIN FUNCTION
{
    B b1;
    b1.getdata();
    b1.showdata();
    return 0;
}
