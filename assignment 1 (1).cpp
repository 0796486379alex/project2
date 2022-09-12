//restaurant menu system
#include <iostream>

using namespace std;

int main()
{
      int order,no_deals;
      cout<<"welcome to zetech rastaurant"<<endl;
      cout<<"todays special"<<endl;
      cout<<endl;
      cout<<"item number:     price in ksh:        name:        unit:";
      cout<<endl;
      cout<<"meals"<<endl;
      cout<<endl;
      cout<<"(1)            500              fish served with rice     "<<endl;
      cout<<"(2)            150              beef served with ugali    "<<endl;
      cout<<"(3)            300              chicken served with chapati "<<endl;
      cout<<"please select the order:";
      cin>>order;
      cout<<"please select the order of deals:";
      cin>>no_deals;
      cout<<endl;
      switch (order) {

                  case 1:
        cout<<"order:fish serverd with rice."<<endl;
        cout<<"number of deals:no_deals"<<endl;
        cout<<"price of each deals: ksh 500 only "<<endl;
        cout<<"total price:<<ksh<<500* no_deals<<" "<<only."<<endl;
        cout<<endl;
        cout<<"thank you for coming "<<endl;
        break;
                  case 2:
        cout<<"order: beef served with ugali"<<endl;
        cout<<"number of deals:<<no_deals"<<endl;
        cout<<"price of each deals ksh150 only"<<endl;
        cout<<"total price:"<<"&*<<150*no_deals<<" "<<only."<<endl;
        cout<<endl;
        cout<<"thank you for coming"<<endl;
        break;
                 case 3:
        cout<<"order :chicken served with chapati."<<endl;
        cout<<"number of deals:no_deals "<<endl;
        cout<<"price of each deals:ksh300 only"<<endl;
        cout<<"total price:<<ksh<<300*no_deals"<<" "<<"only."<<endl;
        cout<<endl;

        cout<<"drinks"<<endl;
        cout<<endl;
        cout<<"(4)                500              fruit juice          "<<endl;
        cout<<"(5)                50               soda                 "<<endl;
        cout<<"(6)                40               lemon water          "<<endl;
        cout<<"(7)                30               tea                  "<<endl;
        cout<<endl;
        cout<<"please select the order number:";
        cin>>order;
        cout<<"please enter the number of deals:";
        cin>>no_deals;
        cout<<endl;
        switch(order){

              case 4:
        cout<<"order:frut juice"<<endl;
        cout<<"number of deals:no_deals"<<endl;
        cout<<"price of each deals:ksh100 only"<<endl;
        cout<<"total price:<<ksh<<100*no_deals<<" "<< only."<<endl;
        cout<<endl;
        cout<<"thank your for coming"<<endl;
        break;
               case 5:


        cout<<"order:soda"<<endl;
        cout<<"number of deals:no_deals"<<endl;
        cout<<"price of each deals:ksh50 only"<<endl;
        cout<<"total price:<<ksh<<50*no_deals<<" "<<only."<<endl;
        cout<<endl;
        cout<<"thank you for watching"<<endl;

    return 0;



}


