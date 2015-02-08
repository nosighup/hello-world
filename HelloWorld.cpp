#include <string>
#include <vector>
#include <iostream>
#include <iterator>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
        // Set a hello-world vector of strings
    vector<string> HelloWorld = { "This is ", "a C++ " };

	// Add some strings to the vector 
    HelloWorld.push_back("Hello ");
    HelloWorld.push_back("World ");
    HelloWorld.push_back("program ");
    
	// print the vector
	for (auto iterator = cbegin(HelloWorld);
		iterator != cend(HelloWorld); ++iterator) {
		cout << *iterator << endl;
    }
    
	return 0;
}
