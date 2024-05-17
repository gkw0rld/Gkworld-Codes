#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRanks, int np, int mid)
{
    int currP = 0; // initial cooked prata count
    for(int i = 0; i<cooksRanks.size(); i++)
    {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;

        while(true)
        {
            if(timeTaken + j*R <= mid)
            {
                ++currP;
                timeTaken += j*R;
                j++;
            }

            else
            {
                break;
            }
        }
        if(currP >= np)
        {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>  cooksRanks, int np)
{
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());

    int end = highestRank*(np*(np+1)/2);
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(isPossibleSolution(cooksRanks, np, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int T;  //no of test cases
    cin>>T;
    while(T--)
    {
        int np, nc; //no of prata, no of cooks
        cin>>np>>nc;
        vector<int>cooksRanks;

        while(nc--)
        {
            int R;  //ranks
            cin>>R;
            cooksRanks.push_back(R);
        }

        cout<<minTimeToCompleteOrder(cooksRanks, np)<<endl;
    }
    return 0;
}