// Dakota Wilson
// Program 1 - sales tax
// CS 1044 - Computer Science I
// 10/02/18
// The problem for this program makes the user input ten different sets of 
// data. This is data that has been given from a purchase that the user has 
// made. The program uses the constants of state and city taxes on the amount
// purchased to give a sum of there total purchase. The code executes a 
// receipt like format when showing the user how much they have to spend on 
// the total amount they are buying. Essentially it takes the total amount
// adds together the given state and city taxes to print a receipt giving them
// their total amount spent in the store.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main(void)
{
	int count;
	const double StateTaxAmt = .05;//States the State tax amouunt as a constant
	const double CityTaxAmt = .0325;
	double PurAmt, StateTax, CityTax, Total; // causes the variables to 
	                                         //show as decimals

	ofstream outfile;
	outfile.open("program1.txt");

	outfile << "Dakota Wilson\n"; // Prints name at begining of output

	count = 1;
	outfile << fixed << setprecision(2);

	while (count <= 10) // loops 10 times for diffrent data
	{
		cout << "Enter Purchase Amount: "; // Prompts the user to enter 
		                                   // purchase ammount
		cin >> PurAmt;

		outfile << "\n\n"; // Adds space to make easier to read

		StateTax = PurAmt * StateTaxAmt;
		CityTax = PurAmt * CityTaxAmt;
		Total = PurAmt + CityTax + StateTax; // Sums the total

		outfile << "Purchase amount" << setw(8) << "$" << setw(9) << PurAmt 
			<< "\n";
		outfile << "State sales tax" << setw(8) << "$" << setw(9) << StateTax 
			<< "\n";
		outfile << "City sales tax" << setw(9) << "$" << setw(9) << CityTax 
			<< "\n";
		outfile << " " << setw(32) << "-----------" << "\n";// Makes the line
		                                                    // on reciept
		outfile << "Total sales amount" << setw(5) << "$" << setw(9) << Total 
			<< "\n";

		count = count + 1;
	} // loop ends 

	outfile.close();

	return 0;
}
