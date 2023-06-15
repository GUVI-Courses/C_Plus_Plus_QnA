#include <iostream>
#include <string>
#include <vector>


using namespace std;


const int MOD = 1e9 + 7;


int numDecodings(const string& s) {
    int n = s.length();
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = (s[0] != '0') ? 1 : 0;
    for (int i = 2; i <= n; i++) {
        int oneDigit = stoi(s.substr(i - 1, 1));
        int twoDigits = stoi(s.substr(i - 2, 2));
        if (oneDigit >= 1 && oneDigit <= 9) {
            dp[i] += dp[i - 1];
            dp[i] %= MOD;
        }
        if (twoDigits >= 10 && twoDigits <= 26) {
            dp[i] += dp[i - 2];
            dp[i] %= MOD;
        }
    }
    return dp[n];
}


int main() {
    string s;
    while (getline(cin, s)) {
        if (s == "0") {
            break;
        }
        int ans = numDecodings(s);
        cout << ans << endl;
    }
    return 0;
}