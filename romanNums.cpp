#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "I";

	return returnString;
}

TEST_CASE( "Testing Romans", "[intToRoman]" ) 
{
	REQUIRE( intToRoman(1) == "I" );
}

