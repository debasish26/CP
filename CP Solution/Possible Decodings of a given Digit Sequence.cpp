#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void helper(int idx, string s, vector<string>&ans, string &num) {
    int n = num.size();
    if (idx == n) {
        ans.push_back(s);
        return;
    }
    if (num[idx] == '0') {
        return;
    }
    if (idx == n - 1) {
        int temp = (num[idx] - '0');
        s.push_back(temp + 'a' - 1);
        helper(idx + 1, s, ans, num);
        return;
    }
    if (num[idx + 1] == '0') {
        int temp = (num[idx] - '0') * 10 + (num[idx + 1] - '0');
        s.push_back(temp + 'a' - 1);
        helper(idx + 2, s, ans, num);
        return;
    }
    int temp = (num[idx] - '0') * 10 + (num[idx + 1] - '0');
    if (temp > 26) {
        int g = (num[idx] - '0');
        s.push_back(g + 'a' - 1);
        helper(idx + 1, s, ans, num);
        return;
    }
    else {
        int g = (num[idx] - '0');
        s.push_back(g + 'a' - 1);
        helper(idx + 1, s, ans, num);
        s.pop_back();
        s.push_back(temp + 'a' - 1);
        helper(idx + 2, s, ans, num);
    }

}
int solve()
{
    string s;
    cin >> s;
    vector<string>ans;
    helper(0, "", ans, s);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}