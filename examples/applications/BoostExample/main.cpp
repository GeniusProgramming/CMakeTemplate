//Boost-Example
//http://www.boost.org/doc/libs/1_60_0/doc/html/signals/tutorial.html

#include <iostream>
#include <boost/signals2.hpp>

struct HelloWorld
{
	void operator()() const
	{
		std::cout << "Hello, World!" << std::endl;
	}
};

int main() {
	// Signal with no arguments and a void return value
	boost::signals2::signal<void ()> sig;

	// Connect a HelloWorld slot
	HelloWorld hello;
	sig.connect(hello);

	// Call all of the slots
	sig();
}