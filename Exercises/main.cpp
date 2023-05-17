#include<iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

/*
int main()
{
	std::map<int, std::string> map1;
	//std::map<std::string,std::vector<std::string, std::string>> map1;
	//std::map<char, std::string> map1;

	map1.emplace(15, "Manish");//key = 15, value = manish
	map1.insert(map1.begin(), std::pair<int, std::string>(13, "Pau"));//insert key and value forcefully
	map1[12] = "Marc";//if key = 12 exists replaces the value with the new string otherwise creates the key with the value

	//Read Map
	//Ranged based loop

	map1[12] = "Tommy";

	std::cout << findStringByKey(map1, 17) << std::endl; 
	std::cout << map1.size() << std::endl;

	std::vector<int> v = { 5, 10, 15 };

	//for(int i = 0; i < v.size(); ++i) -> v[i]
	//operator C++11 
	//Ranged based looop std::vector<int> v : 


	for (std::pair<int, std::string> pairKeyValue : map1)
	{
		std::cout << "KEY: " << pairKeyValue.first << "VALUE: " << pairKeyValue.second;
	}

	auto it = map1.find(12);
	map1.erase(it);
	map1.erase(15);
}

std::string findStringByKey(std::map<int, std::string>& map1, int key) 
{
	std::string result = "";

	std::map<int, std::string>::const_iterator it = map1.find(key);

	auto it = map1.find(key);

	if (it != map1.end())
	{
		result = it->second;
	}

	return result;
}

*/

int main()
{
	std::string s = "abccbaacz";
	std::string result = " ";
	std::unordered_set<char> uniqueChar;

	for (char c : s)
	{
		auto it = uniqueChar.find(c);
		if (it != uniqueChar.end())
		{
			result = c;
			break; 
		}
		uniqueChar.emplace(c);
	}
	std::cout << result << std::endl;
}