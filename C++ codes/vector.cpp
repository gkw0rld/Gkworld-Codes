#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> v)
{
    int size = v.size();
    for(int i=0; i<size ;i++)
    {
        cout<<v[i]<<endl;
        //cout<<v.at(i)<<endl;
    }
}

int main()
{
    vector<int> v; //vector he hai
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"The elements of the array are "<<endl;
    printvector(v);

    cout<<"Removing elements of the array one by one"<<endl;

    v.pop_back();    //popping from backwards
    printvector(v);
    cout<<endl;

    v.pop_back();    //popping from backwards
    printvector(v);
    cout<<endl;

    v.pop_back();    //popping from backwards
    printvector(v);

    //i want to clear the vector
    //v.clear();


    return 0;
}