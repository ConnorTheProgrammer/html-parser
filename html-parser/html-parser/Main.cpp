#include <iostream>
#include <string>
#include <array>
#include <list>

using namespace std;

int main() {
	string html = "<title>";
	
	//Start of function - find a way to return a string array or handle multiple returns
	string tag = html; //Use tag in function brackets instead of defining it
	string middle_tag;
	for (int i = 0; i < tag.size() - 2; i++) {
		middle_tag += tag[i + 1];
	}

	string broken_html[3] = { "<", middle_tag, ">" };
	//End of function

	cout << broken_html[0] << endl;
	cout << broken_html[1] << endl;
	cout << broken_html[2] << endl;

	return 0;
}