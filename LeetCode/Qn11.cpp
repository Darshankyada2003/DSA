// Container with most water
// maximum amount of water a container can store.

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int lp = 0, rp = height.size() - 1;
    int maxWater = 0;

    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        // Move the shorter line
        if (height[lp] < height[rp])
            lp++;
        else
            rp--;
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum area: " << maxArea(height) << endl;
    return 0;
}