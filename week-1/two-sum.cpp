#include "bits/stdc++.h"

using namespace std;

int main()
{
    vector<int> nums = {2, 0, 11, 7};
    int target = 9;

    vector<int> target_indices;
    unordered_map<int, int> hash_table;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums.at(i);
        if (hash_table.find(complement) != hash_table.end())
        {
            target_indices.push_back(hash_table.at(complement));
            target_indices.push_back(i);
            break;
        }
        hash_table.insert({nums.at(i), i});
    }

    cout << target_indices.at(0) << " " << target_indices.at(1);

    return 0;
}