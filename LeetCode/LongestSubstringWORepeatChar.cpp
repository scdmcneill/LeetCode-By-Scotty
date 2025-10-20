// Given a string s, find the length of the longest substring without repeating
// characters.

#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(std::string s);

int main() {
	std::string s = "hello";

	std::cout << lengthOfLongestSubstring(s) << '\n';
	
	return 0;
}

int lengthOfLongestSubstring(std::string s) {
	std::unordered_map<char, int> charCount;

	for (char c : s) {
		std::string subString;
        subString.append(1, c); 
		charCount[c] += 1;
		if (charCount[c] > 1) {
			lengthOfLongestSubstring(s.substr(1)); // recursive call of string without first character
		}
	}

	int substringLength = charCount.size();
	
	return substringLength;
}