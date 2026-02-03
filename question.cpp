/******************************************************************************

Design a class for a StationeryShop that maintains a list of all items it sells, stored as an array
of strings, along with a corresponding list of item prices, stored as an array of doubles. Create
a menu-driven program that allows the shop owner to perform the following operations: add
items and their prices, retrieve the list of items, edit item prices, and view all items along with
their prices. Additionally, implement functionality to generate a receipt that the shopkeeper
can share with customers. The receipt should be created only after the shopkeeper inputs the
items purchased by the customer along with their quantities.

*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;

class StationeryShop{
    
    private:
    
    string items[50];
    double prices[50];
    
    int count;
    
    
    
    public:
    
    StationaryShop(){
        count=0;
    }
    
    void setitem(){
        string a ;
        int b;
        cout<<"Enter Item you want to add"<<endl;
        cin>>a>>endl;
        cout<<"Enter the price"<<endl;
        cin>>b>>endl;
        
        items[count] = a;
        prices[count]= b;
        count ++;
    }
    
    void listitem(){
        for (int i=0; i<=count; i++){
            cout<<items[count]<<endl;
            
        }
    }
    
    void editprices(){
        string x;
        int y;
        double z;
        cout<<"enter item you want to change the price of"<<endl;
        cin>>x>>endl;
        cout<<"enter item price "<<endl;
        cin>>z>>endl;
        
        for (int i=0; i<= count; i++){
            if (x == item[count]){
                y= count;
            }
        }
        prices[y]= z;
    }
    
    void veiwlist(){
        for (int i=0; i<=count; i++){
            cout<<items[count];
            cout<<" :"<<prices[count]<<endl;
            
        }
    }
    
    
    void buy(){
        cout<<items
        
        
    }
    
    
};

int main(){
    
    

    return 0;
}