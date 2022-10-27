#include <iostream>
#include <string>
#include <list>
/**
 * Morse Code
 *
 * Given a string morsecode that contains a list of '.' and '-'.
 * You are allowed to make one move and replace two consecutive ".." with "--".
 * Return all possible morse codes you can get after a single move you do to the string morsecode.
 * If you cannot do any moves, just return an empty array.
 *
 * Example 1:
 *  	Input: morsecode = "...."
 *  	Output: ["--..",".--.","..--"]
 *
 * Constraints:
 *  	1 <= morsecode.length <= 500
 *  	morsecode[i] is either '.' or '-'.
 * **/

void show_lst(std::list<std::string> &lst);

void morse_code(void)
{
	std::string str;
	std::list<std::string> lst;
	int pos = 0;

	std::cin >> str;
	if (str.length() > 0 && str.length() <= 500 && str.find("..") != std::string::npos)
	{
		while (1)
		{
			if ((pos = (int)str.find("..", pos)) >= 0)
				lst.push_back(str.substr(0, pos) + "--" + str.substr(pos + 2, str.length()));
			else
				break;
			pos += 1;
		}
	}
	if (!lst.empty())
		show_lst(lst);
	std::cout << '\n';
}

void show_lst(std::list<std::string> &lst)
{
	if (!lst.empty())
	{
		std::cout << "[";
		for (auto it = lst.begin(); it != lst.end(); it++)
			std::cout << "\"" << (*it) << ((*it) == lst.back() ? "\"" : "\",");
		std::cout << "]";
	}
}

int main(void)
{
	morse_code();
	return (0);
}
