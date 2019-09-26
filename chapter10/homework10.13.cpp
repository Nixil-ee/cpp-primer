#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include "Sales_data.h"
using namespace std;


bool string_size(vector<string> &s);
bool size_5(string &s);

int main()
{
	vector<string> vs;
	string s;
	while (cin >> s)
		vs.push_back(s);
	if (string_size(vs))
		cout << "yes!" << endl;
	
}



bool string_size(vector<string> &s) {
	auto i=partition(s.begin(),s.end(), size_5);
	auto f = s.begin();
	while (f < i) {
		cout << *f++ << " ";
	}
	cout << endl;
	return f < i;
}

bool size_5(string &s) {
	return s.size() >= 5;
}












