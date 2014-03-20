#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "I";
	
	if (num == 2)
		return returnString += "I";
	if (num == 3)
		return returnString += "II";
	return returnString;
}

TEST_CASE( "Testing Romans", "[intToRoman]" ) 
{ 
	REQUIRE( intToRoman(1) == "I" );
	REQUIRE( intToRoman(2) == "II" );
	REQUIRE( intToRoman(3) == "III" );
}
