#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

string intToRoman(int num)
{
	string returnString = "";

	if (num >= 500)
	{
		returnString += "D";
		num-= 500;
	}


	while (num >= 100)
	{
		returnString += "C";
		num-= 100;
	}

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
	REQUIRE( intToRoman(51) == "LI" );
	REQUIRE( intToRoman(52) == "LII" );
	REQUIRE( intToRoman(53) == "LIII" );
	REQUIRE( intToRoman(55) == "LV" );
	REQUIRE( intToRoman(56) == "LVI" );
	REQUIRE( intToRoman(57) == "LVII" );
	REQUIRE( intToRoman(58) == "LVIII" );
	REQUIRE( intToRoman(60) == "LX" );
	REQUIRE( intToRoman(61) == "LXI" );
	REQUIRE( intToRoman(62) == "LXII" );
	REQUIRE( intToRoman(63) == "LXIII" );
	REQUIRE( intToRoman(65) == "LXV" );
	REQUIRE( intToRoman(66) == "LXVI" );
	REQUIRE( intToRoman(67) == "LXVII" );
	REQUIRE( intToRoman(68) == "LXVIII" );
	REQUIRE( intToRoman(70) == "LXX" );
	REQUIRE( intToRoman(71) == "LXXI" );
	REQUIRE( intToRoman(72) == "LXXII" );
	REQUIRE( intToRoman(73) == "LXXIII" );
	REQUIRE( intToRoman(75) == "LXXV" );
	REQUIRE( intToRoman(76) == "LXXVI" );
	REQUIRE( intToRoman(77) == "LXXVII" );
	REQUIRE( intToRoman(78) == "LXXVIII" );
	REQUIRE( intToRoman(80) == "LXXX" );
	REQUIRE( intToRoman(81) == "LXXXI" );
	REQUIRE( intToRoman(82) == "LXXXII" );
	REQUIRE( intToRoman(83) == "LXXXIII" );
	REQUIRE( intToRoman(85) == "LXXXV" );
	REQUIRE( intToRoman(86) == "LXXXVI" );
	REQUIRE( intToRoman(87) == "LXXXVII" );
	REQUIRE( intToRoman(88) == "LXXXVIII" );
	REQUIRE( intToRoman(100) == "C" );
	REQUIRE( intToRoman(500) == "D" );
	REQUIRE( intToRoman(1000) == "M" );
}
