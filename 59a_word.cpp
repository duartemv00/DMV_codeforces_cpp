
// Created by Duarte on 29/01/2025.

// Word
// https://codeforces.com/problemset/problem/59/A

/**
* Change lettes to uppercase or lowercase
* In a way that the lesser amount of letters are changed
* If equal, change all to lowercase
*/

#include <iostream>

int main(){
    std::string word; std::cin >> word;
    int upper = 0, lower = 0;
    for (char i : word){
        if (isupper(i)) upper++;
        else lower++;
    }
    if (upper > lower){
        for (char& i : word) i = toupper(i);
    } else {
        for (char& i : word) i = tolower(i);
    }

    std::cout << word;
}