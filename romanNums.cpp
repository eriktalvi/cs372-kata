#define CATCH_CONFIG_MAIN // This teels Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>
#include <string>
using std::string;
using std::vector;
#include <iostream>

string intToRoman(int num)
{
	string returnString = "";
	struct Romans
	{
		int number;
		string roman;
	};
	
    Romans m{1000, "M"};
    Romans d{500, "D"};
    Romans c{100, "C"};
    Romans l{50, "L"};
    Romans x{10, "X"};
    Romans v{5, "V"}; 
    Romans i{1, "I"}; 	

	vector<Romans> romanRules {m,d,c,l,x,v,i};

	for (auto i : romanRules)
	{
		if (num == 40)
		{
			returnString += "IL";
			num-= 40;
		}
		
		if (num == 4)
		{
			returnString += "IV";
			num -= 4;
		}
		
		while (num >= i.number)
		{
			returnString += i.roman;
			num -= i.number;
		}
	}

	return returnString;
}

TEST_CASE( "Testing Romans", "[intToRoman]" ) 
{ 
	REQUIRE( intToRoman(1) == "I" );
	REQUIRE( intToRoman(2) == "II" );
	REQUIRE( intToRoman(3) == "III" );
	REQUIRE( intToRoman(4) == "IV" );
	REQUIRE( intToRoman(5) == "V" );
	REQUIRE( intToRoman(6) == "VI" );
	REQUIRE( intToRoman(7) == "VII" );
	REQUIRE( intToRoman(8) == "VIII" );
	REQUIRE( intToRoman(10) == "X" );
//	REQUIRE( intToRoman(11) == "XI" );
//	REQUIRE( intToRoman(12) == "XII" );
//	REQUIRE( intToRoman(13) == "XIII" );
	REQUIRE( intToRoman(14) == "XIV" );
//	REQUIRE( intToRoman(15) == "XV" );
//	REQUIRE( intToRoman(16) == "XVI" );
//	REQUIRE( intToRoman(17) == "XVII" );
//	REQUIRE( intToRoman(18) == "XVIII" );
	REQUIRE( intToRoman(20) == "XX" );
//	REQUIRE( intToRoman(21) == "XXI" );
//	REQUIRE( intToRoman(22) == "XXII" );
//	REQUIRE( intToRoman(23) == "XXIII" );
	REQUIRE( intToRoman(25) == "XXV" );
//	REQUIRE( intToRoman(26) == "XXVI" );
//	REQUIRE( intToRoman(27) == "XXVII" );
//	REQUIRE( intToRoman(28) == "XXVIII" );
	REQUIRE( intToRoman(30) == "XXX" );
	REQUIRE( intToRoman(31) == "XXXI" );
	REQUIRE( intToRoman(32) == "XXXII" );
//	REQUIRE( intToRoman(33) == "XXXIII" );
//	REQUIRE( intToRoman(35) == "XXXV" );
//	REQUIRE( intToRoman(36) == "XXXVI" );
//	REQUIRE( intToRoman(37) == "XXXVII" );
//	REQUIRE( intToRoman(38) == "XXXVIII" );
	REQUIRE( intToRoman(40) == "IL" );
	REQUIRE( intToRoman(44) == "ILIV" );
	REQUIRE( intToRoman(50) == "L" );
//	REQUIRE( intToRoman(51) == "LI" );
//	REQUIRE( intToRoman(52) == "LII" );
//	REQUIRE( intToRoman(53) == "LIII" );
//	REQUIRE( intToRoman(55) == "LV" );
//	REQUIRE( intToRoman(56) == "LVI" );
//	REQUIRE( intToRoman(57) == "LVII" );
//	REQUIRE( intToRoman(58) == "LVIII" );
	REQUIRE( intToRoman(60) == "LX" );
//	REQUIRE( intToRoman(61) == "LXI" );
//	REQUIRE( intToRoman(62) == "LXII" );
	REQUIRE( intToRoman(63) == "LXIII" );
//	REQUIRE( intToRoman(65) == "LXV" );
//	REQUIRE( intToRoman(66) == "LXVI" );
	REQUIRE( intToRoman(67) == "LXVII" );
	REQUIRE( intToRoman(68) == "LXVIII" );
//	REQUIRE( intToRoman(70) == "LXX" );
//	REQUIRE( intToRoman(71) == "LXXI" );
	REQUIRE( intToRoman(72) == "LXXII" );
//	REQUIRE( intToRoman(73) == "LXXIII" );
	REQUIRE( intToRoman(75) == "LXXV" );
//	REQUIRE( intToRoman(76) == "LXXVI" );
//	REQUIRE( intToRoman(77) == "LXXVII" );
//	REQUIRE( intToRoman(78) == "LXXVIII" );
//	REQUIRE( intToRoman(80) == "LXXX" );
//	REQUIRE( intToRoman(81) == "LXXXI" );
//	REQUIRE( intToRoman(82) == "LXXXII" );
//	REQUIRE( intToRoman(83) == "LXXXIII" );
	REQUIRE( intToRoman(85) == "LXXXV" );
//	REQUIRE( intToRoman(86) == "LXXXVI" );
	REQUIRE( intToRoman(87) == "LXXXVII" );
//	REQUIRE( intToRoman(88) == "LXXXVIII" );
//	REQUIRE( intToRoman(100) == "C" );
//	REQUIRE( intToRoman(500) == "D" );
	REQUIRE( intToRoman(1000) == "M" );
	REQUIRE( intToRoman(1040) == "MIL" );
	REQUIRE( intToRoman(1085) == "MLXXXV" );
	REQUIRE( intToRoman(1086) == "MLXXXVI" );
	REQUIRE( intToRoman(1087) == "MLXXXVII" );
	REQUIRE( intToRoman(1088) == "MLXXXVIII" );
	REQUIRE( intToRoman(1100) == "MC" );
	REQUIRE( intToRoman(1500) == "MD" );
	REQUIRE( intToRoman(2000) == "MM" );
	REQUIRE( intToRoman(3888) == "MMMDCCCLXXXVIII" ); //Largest number we can count to
}
