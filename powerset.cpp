#include <iostream>
#include <set>
#include <string>

int main()
{
	std::set<std::string> s1;
	std::string element;

	while(std::cin >> element) {
		s1.insert(element);
	}

	for(auto &i : s1) {
		std::cout << i << ' ' ;
	}

	std::set<std::string> powerset;
	for(auto &i : s1) {
		powerset.insert('{' + powerset + '}');
	}
}
