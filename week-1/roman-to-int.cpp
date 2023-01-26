#include <bits/stdc++.h>

using namespace std;

/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/

int main()
{
    string case1 = "III";     // 3
    string case2 = "VIII";    // 58 L = 50, V = 5, III = 3
    string case3 = "MCMXCIV"; // 1994 M = 1000, CM = 900, XC = 90, IV = 4

    int result = 0;
    int curr = 0;

    unordered_map<char, int> roman_numbers = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = 0; i < case3.length(); i++)
    {
        cout << roman_numbers[case3[i]] << ' ' << roman_numbers[case3[i + 1]] << endl;
        if (roman_numbers[case3[i]] < roman_numbers[case3[i + 1]])
            result -= roman_numbers[case3[i]];
        else
            result += roman_numbers[case3[i]];
    }

    cout << result;
}
