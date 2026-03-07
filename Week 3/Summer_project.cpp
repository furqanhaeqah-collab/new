#include <iostream>
using namespace std;
main(){
float weight,cost_bag,size_bag,price_fert,cost_per_sqft;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>weight;
cout<<"Enter the cost of the bag: $";
cin>>cost_bag;
cout<<"Enter the area in square feet that can be converted by the bag: ";
cin>>size_bag;
price_fert = cost_bag/weight;
cout<<"Cost of fertilizer per pound: $"<<price_fert<<endl;
cost_per_sqft = cost_bag/size_bag;
cout<<"Cost of fertilizing per square foot: $"<<cost_per_sqft;
}