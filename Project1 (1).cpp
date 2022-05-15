//Kayla Jamar
//Project 1
//This project was made to compute the gross box office revenue, the distributor amount, and the net profit from the users inputs
//which are the amount of children and adult tickets.The final output is the movie name, gross box revenue, distributor amount, and net profit.
//9/8/2020
#import <iostream>
#import <iomanip>
using namespace std;
 const int MAX= 200;
   int main(){
      //need from user
      //movie name
      char Moviename [MAX] = ""; //c-string
      cout<<"What is the name of the movie?"<<endl;
      cin.getline(Moviename, 200);
    //int tickets sold
    int numAdultTicketS;
    cout<<"How many adult tickets sold?"<<endl;
    cin>>numAdultTicketS;
    int numChildrensTicketS;
    cout<<"How many children tickets sold?"<<endl;
    cin>>numChildrensTicketS;
    //outputs
    double Adultprice,Childprice,greenboxrev,Distributoramount,NetProfit;
    Adultprice = 7.50;
    Childprice = 4.75;
    greenboxrev = (numAdultTicketS * Adultprice) + (numChildrensTicketS * Childprice);
    Distributoramount = greenboxrev * .8;
    NetProfit = greenboxrev * .2;

    cout<<fixed<<setprecision(2);//exact two decimals
   //set the columns with outputs
    cout<<setw(35)<<"Movie Name:"<<setw(36)<<Moviename<<endl;
    cout<<setw(35)<<"Gross Box Office Revenue:"<<setw(30)<<"$"<<greenboxrev<<endl;
    cout<<setw(35)<<"Distributor Amount:"<<setw(30)<<"$"<<Distributoramount<<endl;
    cout<<setw(35)<<"Net Profit:"<<setw(30)<<"$"<<NetProfit<<endl;


return 0;}
