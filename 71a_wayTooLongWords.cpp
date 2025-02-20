
// Created by Duarte on 20/01/2025.

// Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

/*
* A word too long if its length is strictly more than 10 char
* Shorten it by writing the first and last letter, and the number of letters between them
*/

#include <iostream>

int main(){
    int numberOfWords;
    std::cin >> numberOfWords;

    std::string word[numberOfWords];

    for(int i = 0; i < numberOfWords; i++){
        std::cin >> word[i];
    }

    for(int i = 0; i < numberOfWords; i++){
        word[i].size() > 10 ? std::cout <<
            word[i][0] << // First letter
                word[i].size() - 2 << // Number of letters between the first and last
                    word[i][word[i].size() - 1] << '\n' // Last letter
        : std::cout << word[i] << '\n'; // The word itself
    }
}
