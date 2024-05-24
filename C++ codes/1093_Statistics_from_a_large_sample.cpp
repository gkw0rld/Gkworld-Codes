#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        vector<double> ans;
        int n = count.size();

        double maxi = -1;
        double mini = INT_MAX;
        double sample_size = 0;

        double mean_sum = 0;
        double mean;
        double median;
        double mode=0;

        for(long long i = 0; i<n; i++)
        {
            if(count[i] != 0 && mini == INT_MAX)
            {
                mini = i;
            }
            if(count[n-1-i] != 0 && maxi ==-1)
            {
                maxi = n-1-i;
            }

            if(count[i] != 0)
            {
                mean_sum += i*count[i];
                sample_size += count[i];
            }
            if(i<n-1 && (count[i+1] > count[mode]))
            {
                mode = i+1;
            }
        }

        mean = mean_sum/(double)sample_size;
        
        if((int)sample_size & 1)
        {
            int temp = 0;
            //odd no of elements
            for(int i = 0; i<n; i++)
            {
                temp += count[i];
                if(temp >= ((sample_size+1)/2))
                {
                    median = i;
                    break;
                }
            }
        }
        else
        {
            double temp = 0;
            double first = -1;
            double second = -1;
            for(int i = 0; i<n; i++)
            {   
                if(second != -1 && first != -1)
                {
                    break;
                }
                if(first != -1)
                {
                    if(count[i] == 0)
                    {
                        continue;
                    }
                    else
                    {
                        second = i;
                        median = (first + second)/(double)2;
                        break;
                    }
                }

                temp += count[i];
                if(temp == sample_size/2)
                {
                    //median = (i+i+1)/(double)2;
                    //break;
                    first = i;
                }

                if(temp > sample_size/2)
                {
                    median = (i+i)/(double)2;
                    break;
                }
            }
            
            //median = (first + second)/(double)2;
        }

        cout<<"sample size: "<<sample_size<<endl;

        ans.push_back(mini);
        ans.push_back(maxi);
        ans.push_back(mean);
        ans.push_back(median);
        ans.push_back(mode);

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> count = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    vector<double> ans = sol.sampleStats(count);

    for(int i = 0 ; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}