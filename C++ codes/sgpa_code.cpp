#include<iostream>
using namespace std;

int main()
{
    cout<<"A++ = 10"<<endl;
    cout<<"A+  = 9"<<endl;
    cout<<"A   = 8.5"<<endl;
    cout<<"B+  = 8"<<endl;
    cout<<"B   = 7.5"<<endl;
    cout<<"C+  = 7"<<endl;
    cout<<"C   = 6.5"<<endl;
    cout<<"D+  = 6"<<endl;
    cout<<"D   = 5.5"<<endl;
    cout<<"E+  = 5"<<endl;
    cout<<"E   = 4"<<endl;

    double mefa, aem, de, dsa, oops, se, dsalab, oopslab, selab, delab, it, deca;

    cout<<"Enter points of mefa/tc"<<endl;
    cin>>mefa;

    cout<<"Enter points of AEM"<<endl;
    cin>>aem;

    cout<<"Enter points of DE"<<endl;
    cin>>de;

    cout<<"Enter points of DSA"<<endl;
    cin>>dsa;

    cout<<"Enter points of OOPS"<<endl;
    cin>>oops;

    cout<<"Enter points of SE"<<endl;
    cin>>se;

    cout<<"Enter points of DSA Lab"<<endl;
    cin>>dsalab;

    cout<<"Enter points of OOPS Lab"<<endl;
    cin>>oopslab;

    cout<<"Enter points of SE Lab"<<endl;
    cin>>selab;

    cout<<"Enter points of DE Lab"<<endl;
    cin>>delab;

    cout<<"Enter points of Industrial Training"<<endl;
    cin>>it;

    cout<<"Enter points of DECA"<<endl;
    cin>>deca;

    double sgpa = ((mefa*2)+(aem*3)+(de*3)+(dsa*3)+(oops*3)+(se*3)+(dsalab*1.5)+(oopslab*1.5)+(selab*1.5)+(delab*1.5)+(it*1)+(deca*0.5))/24.5;

    cout<<"Your approx sgpa is:"<<endl;
    cout<<sgpa;

    return 0;

}