#include <cstdio>

#include <cstdlib>

#include <iostream>

using namespace std;




int askValue (string arg)

{
    
	double x;

	std::cout << "Input the "<< arg <<" value to be converted now" << endl;

	std::cin >> x;

	return x;

}





int Fcalculator(double arg)

{
    
	//COVERTS F VALUE TO A C VALUE
    
	double y;
    
	std::cout << "Converting to Celsius" << endl;
    
	y = (arg - 32) * 5/9;
    
	std::cout << "New Celsius measurement " << y << "*C";

}




int Ccalculator(double arg)

{
    
	//CONVERTS A C VALUE TO A F VALUE
    
	double y;
    
	std::cout << "Converting to Fahrenheit" << endl;
    
	y = (arg * 9/5) + 32;
    
	std::cout << "New Fahrenheit measurement " << y << "*F";

}




int main()

{
    
	string choice;
    
	string systemUsed;
    
	double x;
    
	printf("Fahrenheit to Celsius calculator.\n");
    
	std::cout << "Original measurement in Fahrenheit or Celsius?" << "\nType F for Fahrenheit and C for Celsius" << endl;
    
	std::cin >> choice;
    
	if (choice == "F")
    
	{
        
		systemUsed = "Fahrenheit";
        
		x = askValue(systemUsed);
        
		Fcalculator(x);
    
	}
    
	else if (choice == "C")
    
	{
        
		systemUsed = "Celsius";
        
		x = askValue(systemUsed);
        
		Ccalculator(x);
    
	}
    
	else {
        
		std::cout << "\nInvalid input..\nEnding program";
   
	}

	std::cout << "\nPress Enter to continue..." << endl;
    
	cin.ignore(10, '\n');
    
	cin.get();
	return 0;

}

