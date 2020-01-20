/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

is_isogram("Dermatoglyphics" ) == true
is_isogram("aba" ) == false
is_isogram("moOse" ) == false # -- ignore letter case
*/

#include <iostream>
#include <set>
#include<algorithm>

bool is_isogram(std::string str) {
	std::string orig = str;
	std::for_each(str.begin(), str.end(), [](char& c) { c = ::tolower(c); });

	std::set<int> s(str.begin(), str.end());
	str.assign(s.begin(), s.end());
	
	if (str.size() < orig.size()) return true;
	return false;
}

int main()
{
	is_isogram("Dermatoglyphics");
	is_isogram("moOse");
	is_isogram("isIsogram");
}
