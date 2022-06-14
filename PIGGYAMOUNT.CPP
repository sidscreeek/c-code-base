#include<bits/stdc++.h>
using namespace std;

class AddAmount
{
    public:
    int amount;
    int totalAmount;
    

    AddAmount()
    {
        totalAmount = 50;
    }

    void getAmount()
    {
        cout<<"Enter the amoount you want to deposit :";
        cin>>amount;
        totalAmount=totalAmount+amount;
        
    }

    void displayAmount()
    {
        cout<<"Current Balance in your account:"<<this->totalAmount<<endl;

    }

    void showChoices()
    {
        cout<<"Enter 1 for depositing money in your account"<<endl;
        cout<<"Enter 2 for checking balance in your account"<<endl;
        cout<<"Enter 3 for exiting the portal"<<endl;
        cout<<"Enter your choice:";
    }

   

};

int main()
{
  AddAmount obj;
  int choice;
  do
  {
      obj.showChoices();
      cin>>choice;

      switch (choice)
      {
      case 1:
          obj.getAmount();
          break;
      case 2:
          obj.displayAmount();
          break;
      case 3:
          break;
      default:
      cout<<"invalid choice"<<endl;
          break;
      }
  } while (choice!=3);
}
  