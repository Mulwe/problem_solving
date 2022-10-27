#include <iostream>
#include <string>
#include <list>

using namespace std;

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

void show_lst(list<string> &lst);

/**allocate memory**/
list<string> *morse_code(void)
{
	list<string> lst;
	string str;
	int pos = 0;

	cin >> str;
	if (str.length() > 0 && str.length() <= 500 && str.find("..") != string::npos)
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
	list<string> *alst = new list<string>;
	if (!lst.empty())
	{
		alst->resize(lst.size());
		copy(lst.begin(), lst.end(), alst->begin());
	}
	return (alst);
}

void show_lst(list<string> &lst)
{
	if (!lst.empty())
	{
		cout << "[";
		for (auto it = lst.begin(); it != lst.end(); it++)
			cout << "\"" << (*it) << ((*it) == lst.back() ? "\"" : "\",");
		cout << "]";
	}
	cout << endl;
}

int main(void)
{
	list<string> *tmp;
	tmp = morse_code();
	show_lst(*tmp);
	delete tmp;
	return (0);
}
