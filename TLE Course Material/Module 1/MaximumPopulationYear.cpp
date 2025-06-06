#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maximumPopulation(vector<vector<int>> &logs)
{
    vector<int> population(101, 0);
    for (auto it : logs)
    {
        population[it[0] - 1950]++;
        population[it[1] - 1950]--;
    }
    int ans = 0;
    int mx = population[0];
    for (int i = 1; i <= 100; i++)
    {
        population[i] += population[i - 1];
        if (population[i] > mx)
        {
            mx = population[i];
            ans = i;
        }
    }
    return (ans + 1950);
}
