#include <iostream>
#include <vector>
#include <string>

std::string longestCommonPrefix(const std::vector<std::string>& strs) {
    if (strs.empty()) return "";

    std::string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    std::vector<std::string> v1 = {"flower", "flow", "flight"};
    std::vector<std::string> v2 = {"dog", "racecar", "car"};
    std::vector<std::string> v3 = {"interview", "interact", "interstellar"};

    std::cout << longestCommonPrefix(v1) << std::endl; // "fl"
    std::cout << longestCommonPrefix(v2) << std::endl; // ""
    std::cout << longestCommonPrefix(v3) << std::endl; // "inter"

    return 0;
}
