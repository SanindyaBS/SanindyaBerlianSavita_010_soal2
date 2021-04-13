#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class RetailItem
{
	private:
		string description;
		int unitsOnHand;
		double price;
		
	public:
		RetailItem(string d, int u, double p)
		{description = d; unitsOnHand = u; price = p;}
		
		void setDescription(string d)
		{description = d;}
		
		void setUnitsOnHand(int u)
		{unitsOnHand = u;}
		
		void setPrice(double p)
		{price = p;}
		
		string getDescription()
		{ return description;}
		
		int getUnitsOnHand()
		{ return unitsOnHand;}
		
		double getPrice()
		{return price;}
};

void displayItem(RetailItem);

int main()
{
	RetailItem item1 ("Jacket", 12, 59.95);
	RetailItem item2 ("Designer Jeans", 40, 34.95);
	RetailItem item3 ("Shirt", 20, 24.95);
	
	displayItem(item1);
	displayItem(item2);
	displayItem(item3);
	return 0;
	
}

void displayItem (RetailItem item)
{
	cout<<setprecision(2)<<fixed<<showpoint;
	cout<<"Description: "<<item.getDescription()<<endl;
	cout<<"Units On Hand: "<<item.getUnitsOnHand()<<endl;
	cout<<"Price: $"<<item.getPrice()<<endl;
}
