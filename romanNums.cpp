#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "";
	
	if (num > 5)
	{
		returnString = "V";
		num -= 5;
	}	
	
	while (num > 0)
	{
		returnString += "I";
		num--;
	}

	return returnString;
}

TEST_CASE( "Testing Romans", "[intToRoman]" ) 
{ 
	REQUIRE( intToRoman(1) == "I" );
	REQUIRE( intToRoman(2) == "II" );
	REQUIRE( intToRoman(3) == "III" );
	REQUIRE( intToRoman(5) == "V" );
	REQUIRE( intToRoman(6) == "VI" );
}
