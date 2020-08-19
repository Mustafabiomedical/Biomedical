// Ex_01.cpp
// Generating multiplication tables
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;


int main()
{
	size_t tableMultiplication{}; 
	const size_t table_minSize{ 2 }; 
	const size_t table_maxSize{ 20 }; 
	char Response{}; 
	while (true)
	{
		cout << "What size table would you like ("
			<< table_minSize << " to " << table_maxSize << ")? ";
		cin >> tableMultiplication; // Get the table size
		cout << endl;

		// Make sure table size is within the limits
		if (tableMultiplication < table_minSize || tableMultiplication > table_maxSize)
		{
			cout << "Invalid table size entered. Program terminated." << endl;
			return 1;
		}
		
		std::cout << setw(6) << " |";
		for (size_t i{ 1 }; i <= tableMultiplication; ++i)
		{
			cout << " " << setw(3) << i << " |";
		}
		cout << endl;
		
		for (size_t i{}; i <= tableMultiplication; ++i)
		{
			cout << "______";
		}
		std::cout << std::endl;
		for (size_t i{ 1 }; i <= tableMultiplication; ++i)
		{ 
			cout << " " << setw(3) << i << " |"; 
			
			for (size_t j{ 1 }; j <= tableMultiplication; ++j)
			{
				cout << " " << setw(3) << i * j << " |"; 
			}
			cout << std::endl; 
		}
		// Check if another table is required
		cout << "\nDo you want another table (y or n)? ";
		cin >> Response;
		if (tolower(Response) == 'y')
			continue;
	}

}