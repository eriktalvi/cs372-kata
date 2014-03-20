#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "";

	if (num >= 50)
	{
		returnString += "L";
		num-= 50;
	}

	while (num >= 10)
	{
		returnString += "X";
		num -= 10;
	}	
	
	if (num >= 5)
	{
		returnString += "V";
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
	REQUIRE( intToRoman(7) == "VII" );
	REQUIRE( intToRoman(8) == "VIII" );
	REQUIRE( intToRoman(10) == "X" );
	REQUIRE( intToRoman(11) == "XI" );
	REQUIRE( intToRoman(12) == "XII" );
	REQUIRE( intToRoman(13) == "XIII" );
	REQUIRE( intToRoman(15) == "XV" );
	REQUIRE( intToRoman(16) == "XVI" );
	REQUIRE( intToRoman(17) == "XVII" );
	REQUIRE( intToRoman(18) == "XVIII" );
	REQUIRE( intToRoman(20) == "XX" );
	REQUIRE( intToRoman(21) == "XXI" );
	REQUIRE( intToRoman(22) == "XXII" );
	REQUIRE( intToRoman(23) == "XXIII" );
	REQUIRE( intToRoman(25) == "XXV" );
	REQUIRE( intToRoman(26) == "XXVI" );
	REQUIRE( intToRoman(27) == "XXVII" );
	REQUIRE( intToRoman(28) == "XXVIII" );
	REQUIRE( intToRoman(30) == "XXX" );
	REQUIRE( intToRoman(31) == "XXXI" );
	REQUIRE( intToRoman(32) == "XXXII" );
	REQUIRE( intToRoman(33) == "XXXIII" );
	REQUIRE( intToRoman(35) == "XXXV" );
	REQUIRE( intToRoman(36) == "XXXVI" );
	REQUIRE( intToRoman(37) == "XXXVII" );
	REQUIRE( intToRoman(38) == "XXXVIII" );
	REQUIRE( intToRoman(50) == "L" );
}
