#include <iostream>
#include <sstream>
#include <unordered_set>

std::string removeDuplicateWords(const std::string& str)
{
    std::stringstream ss (str), os;
    std::unordered_set<std::string> string_history;
    std::string current_string;
    ss >> current_string;
    os << current_string;
    string_history.insert(std::move(current_string));
    while(ss >> current_string) {
        if(string_history.find(current_string) == string_history.end()) {
            os << " " << current_string;
            string_history.insert(std::move(current_string));
        }
    }
    return os.str();
}

int main() {
    std::cout << removeDuplicateWords("alpha beta alpha alpha delta alpha beta delta gamma") << std::endl;
    return 0;
}
