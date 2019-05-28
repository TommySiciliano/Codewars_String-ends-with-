#include <iostream>
using namespace std;

// Ex. String ends with?
bool solution(std::string const &str, std::string const &ending) {

	const size_t str_ending_size = ending.size();
	const size_t str_size = str.size();
	int j=0;
	bool result = false;

	if( str_size >= str_ending_size) {
		for( unsigned int i=str_size - str_ending_size; i<str_size; ++i) {
			if(str.at(i) == ending.at(j++)) {
				result = true;
			} else {
				result = false;
				break;
			}
		}
	}
    return result;
}

int main() {
	// task calling

}
