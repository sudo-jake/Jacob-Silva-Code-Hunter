// Libraries
#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;

 
// Main Function
int main()
{
	// For string handling 
	string textToAnalyze;

	// Variables
	// int foo = 0; What is this for? Extra Credit?
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0; 
	int unknownCharacters = 0;
	int checkSum = 0;
	// int bar = 0; What is this for? Extra Credit?

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	
	// Reads String or a line
	getline(cin, textToAnalyze);

	// For statment loop 
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		// If the string that was inputed has any of these letters add one or more to vowels depending on whats inputed
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; // Changed to add vowels not minus
		}

		// If the string that was inputed has any of these letters add one or more to consonants depending on whats inputed
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants; // Uncommented ++ consonants to add consonants when needed
		}
		
		// If the string that was inputed has any of these number add one or more to digits depending on whats inputed
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}

		// If the string that was inputed has any of space add one or more to spaces depending on whats inputed
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}

		// If anything else was inputed add to uknowncharacters
		else
		{
			++unknownCharacters;
		}
	}

	// Analizis length
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();

	// Adds unkownCharecters to vowels consonants digits and spaces
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	// If checkSum equals lengthOfStringSubmittedForAnalysis the analysis is valid
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	// If checkSum doesn equal lengthOfStringSubmittedForAnalysis the analysis is invalid
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	// Pauses the program so it doesn't close after execution
	system("pause");

	// Exit code of the program
	return 0;
}