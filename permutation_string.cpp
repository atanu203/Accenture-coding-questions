#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to find the number of permutations with fixed vowels
int count_permutations_with_fixed_vowels(string S) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> consonants;
    
    // Collect consonants from the string
    for (char c : S) {
        if (vowels.find(c) == vowels.end()) {
            consonants.push_back(c);
        }
    }
    
    // If there are no consonants, return 0
    if (consonants.size() == 0) {
        return 0;
    }
    
    // Count frequencies of each consonant
    unordered_map<char, int> consonant_count;
    for (char c : consonants) {
        consonant_count[c]++;
    }
    
    // Calculate the number of permutations
    long long numerator = factorial(consonants.size());
    long long denominator = 1;
    
    for (auto& pair : consonant_count) {
        denominator *= factorial(pair.second);
    }
    
    return numerator / denominator;
}

int main() {
    string S;
    cin >> S;
    
    int result = count_permutations_with_fixed_vowels(S);
    cout << result << endl;
    
    return 0;
}