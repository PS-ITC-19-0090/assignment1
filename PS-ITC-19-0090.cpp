#include <iostream>

using namespace std;

int main()
{
    int choice;
    int ID;
    int printer=50;
    int table=30;
    int phone=70;
    float vat=0.12;
    double vat_amount;
    int quantity;
    double amount_owed;
    double amount_you_have;
    double amount_to_add;
    double balance;
    string item;
    string item_bought;
    string username;


    cout<<"Please enter your name"<<endl<<endl;
    cin>>username;
    cout<<""<<endl;
    cout<<"please enter your ID"<<endl;
    cin>>ID;
    cout<<""<<endl;
    cout<<"Welcome Mr./Mrs. "<<username<<" To INF SUPERMARKET"<<endl<<endl;
    cout<<"Items sold here;"<<endl;
    cout<<"1. Printer -Ghc 50"<<endl;
    cout<<"2. Phone   -Ghc 70"<<endl;
    cout<<"3. Table   -Ghc 30"<<endl<<endl;

    cout<<"Please what do you want to buy"<<endl;
    cin>>choice;
    cout<<""<<endl;


    cout<<""<<endl;
    cout<<"How many would you like to purchase"<<endl;
    cin>>quantity;

    switch(choice){
    case 1: vat_amount=quantity*printer*vat;
    amount_owed= (printer*quantity)+vat_amount;
    item_bought="Printer";
    break;

    case 2: vat_amount=quantity*phone*vat;
    amount_owed = (phone*quantity)+vat_amount;
    item_bought="Phone";
    break;

    case 3: vat_amount=quantity*table*vat;
    amount_owed= (table*quantity)+vat_amount;
    item_bought="Table";
    break;

    default: cout<<"Enter a figure from 1 to 3";
    }
    cout<<""<<endl;

    cout<<"Please how much do you have on you"<<endl;
    cin>>amount_you_have;

    amount_to_add=amount_owed-amount_you_have;
    balance=amount_you_have-amount_owed;





cout<<""<<endl<<endl;
cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"                                      Here is your receipt           "<<endl<<endl;
cout<<"                               Name of the customer: "<<username<<endl;
cout<<"                               Unique ID: "<<ID<<endl;
cout<<"                               Item bought: "<<item_bought<<endl;
cout<<"                               Quantity bought: "<<quantity<<endl;
cout<<"                               Vat amount: "<<vat_amount<<endl;
cout<<"                               Total cost: Ghc "<<amount_owed<<endl;
cout<<"                               Total amount paid: Ghc "<<amount_you_have<<endl<<endl;
    if (amount_you_have>amount_owed){
        cout<<"                               Your balance is "<<balance<<endl;
        }

else;

       if(amount_you_have<amount_owed) {        cout<<"                               Please you still owe "<<amount_to_add<<endl<<endl;
    }

    cout<<"                               Thank You for transacting with us Mr."<<username<<endl;


    return 0;
}
