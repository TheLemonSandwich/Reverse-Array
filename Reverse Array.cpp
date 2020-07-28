#include <iostream>
#include <string>
using namespace std;

string reverse(string word)
{
	string remove_e = "";
	string reverse = "";
	for (int i = 0; i < word.length(); i++)
		if (word.at(i) == 'e' || word.at(i) == 'E');
		else remove_e += word.at(i);
	for (int i = remove_e.length() -1; i > 0; i--)
		reverse += remove_e.at(i);
	reverse += remove_e.at(0);
	return reverse;
}

int main()
{
	string word;
	cout << "Word: ";
	getline(cin, word);
	word = reverse(word);
	cout << "Reversed Word without e is: " << word << endl;
	system("pause");
}