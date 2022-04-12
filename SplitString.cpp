//
// Created by 胡政 on 2022/4/12.
//
// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
// Parse (split) a string in C++ using string delimiter (standard C++)
#include <iostream>
#include <string>
#include <regex>

using namespace std;

std::vector <std::string> split(const std::string str, const std::string regex_str) {
    std::regex regrexz(regex_str);
    std::vector <std::string> list(
            std::sregex_token_iterator(str.begin(), str.end(), regrexz, -1),
            std::sregex_token_iterator()
    );
    return list;
}

int main() {
    // 也是支持中文
    std::string input_str = "lets split this";
    std::string regrex_str = " ";
    auto tokens = split(input_str, regrex_str);
    for (auto &item: tokens) {
        std::cout << item << std::endl;
    }
}

// build
//clang++ SplitString.cpp -o result/splitString -std=c++17
// run
// ./result/splitString
