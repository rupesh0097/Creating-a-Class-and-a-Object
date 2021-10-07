#include <iostream>					
using namespace std;

/*class My_class {					//The class
	public:									//Access specifier
	int My_int;							//Attribute
	string My_string;				//Atrribute

};

int main(){
	My_class My_obj;				//Creat an Object of MyClass

	//Access attribute and set value
	My_obj.My_int = 49;
	My_obj.My_string = "Rupesh";

	//Printing the attribute  values
	cout << My_obj.My_int << endl;
	cout << My_obj.My_string << endl;
	return 0;

}
*/


//Creating Multiple object for one class
class car{
	public:
	string brand;
	string model;
	int year;
};

int main() {
	car car1;						//Creating object 1
	car1.brand = "Ford";
	car1.model = "Model-X";
	car1.year = 1999;

	car car2;						//Creating object 2
	car2.brand = "BMW";
	car2.model = "ModeAlfa";
	car2.year = 1989;

	car car3;						//Creating object 3
	car3.brand = "Tesla";
	car3.model = "NEXY";
	car3.year = 2001;

	car car4;						//Creating object 4
	car4.brand = "Apple";
	car4.model = "Self-Diving";
	car4.year = 2021;

	//Printing attribute values
	cout << car1.brand << " "<< car1.model<<" " << car1.year << endl;
	cout << car2.brand << " "<<car2.model <<" "<< car2.year << endl;
	cout << car4.brand << " " << car3.model <<" " << car3.year << endl;

}

