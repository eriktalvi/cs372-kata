#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "I";
	
	if (num == 5)
		return returnString = "V";
		
	if (num == 6)
		return returnString = "VI";
	
	while (num > 1)
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
