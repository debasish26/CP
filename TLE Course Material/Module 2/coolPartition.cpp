#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // For each position i, store what elements appear in suffix [i+1, n-1]
        vector<set<int>> suffix(n + 1);

        // Build suffix sets from right to left
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1];
            suffix[i].insert(a[i]);
        }

        int segments = 0;
        int start = 0;

        // Greedy approach: try to make as many segments as possible
        while (start < n)
        {
            set<int> current_segment;

            for (int i = start; i < n; i++)
            {
                current_segment.insert(a[i]);

                // Check if we can end segment at position i
                bool can_end_here = true;

                if (i == n - 1)
                {
                    // Last element, must end here
                    can_end_here = true;
                }
                else
                {
                    // Check if all elements in current segment appear in remaining part
                    for (int elem : current_segment)
                    {
                        if (suffix[i + 1].find(elem) == suffix[i + 1].end())
                        {
                            can_end_here = false;
                            break;
                        }
                    }
                }

                if (can_end_here)
                {
                    // End segment here and start new one
                    segments++;
                    start = i + 1;
                    break;
                }
            }
        }

        cout << segments << "\n";
    }

    return 0;
}
