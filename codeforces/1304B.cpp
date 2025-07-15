#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define piza ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define prn(c) cout << c << "\n"
#define cc cout << "\n"

bool isPalindrome(const string& a) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        if (a[l++] != a[r--]) return false;
    }
    return true;
}

void alfa() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    vector<bool> used(n, false);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<string> leftPart;
    string mid = "";

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        string rev = v[i];
        reverse(rev.begin(), rev.end());

        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && v[j] == rev) {
                // Found a pair
                used[i] = true;
                used[j] = true;
                leftPart.push_back(v[i]);
                found = true;
                break;
            }
        }

        if (!found && isPalindrome(v[i]) && mid == "") {
            mid = v[i];
            used[i] = true;
        }
    }

    string result = "";
    for (string s : leftPart) result += s;
    result += mid;
    for (int i = leftPart.size() - 1; i >= 0; i--) {
        string rev = leftPart[i];
        reverse(rev.begin(), rev.end());
        result += rev;
    }

    prn(result.length());
    prn(result);
}

int main() {
    piza
    alfa();
}
