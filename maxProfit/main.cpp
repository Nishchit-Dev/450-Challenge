#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int sell = 0;
    int holding = prices[0];
    int profit = 0;
    for (int now : prices)
    {

        if (now - holding > 0)
        {
            if (now - holding > profit)
            {
                // cout << "now -> "<<now << " holding-> "<<holding<<" proift -> "<< profit<<endl;
                profit = now - holding;
            }
        }
        else
        {
            if (now < holding)
            {
                // cout << "now -> " << now << " holding->" << holding<<endl;
                holding = now;
            }
        }
    }
    cout << endl<< profit;
    cout << "holding -> " << holding;
}

int main()
{

    vector<int> vec;
    int num;
    while (cin >> num)
    {
        vec.push_back(num);
    }

    int k = maxProfit(vec);
    return 0;
    // cout << k;
}