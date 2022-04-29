#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int main() {
	using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1));
	int treeSize = 0;
	int maxTreeSize = 100;
	while (treeSize < maxTreeSize) {
		treeSize++;
		std::string tree = "";
		for (int i = 0; i < treeSize; i++) {
			tree += '.';
		}
		std::cout << tree << std::endl;
		sleep_for(nanoseconds(1000000));
	}
	while (treeSize > 0) {
		treeSize--;
		std::string tree = "";
		for (int i = 0; i < treeSize; i++) {
			tree += '.';
		}
		std::cout << tree << std::endl;
		sleep_for(nanoseconds(1000000));
	}
}