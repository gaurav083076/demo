#include<iostream>
using namespace std;
int main()
{
    string s,z;
    //int -10^9 to 10^9  , long -10^12 to 10^12, long long 10^18 to 10^18, float, double
    //string and getline
    //getline(cin,s);
    //int day;
    //cin>>day;
    //switch (day)
    //{
      //  case 1:
        //cout<<"Monday";
       // break;
       // case 2:
        //cout<<"Tuesday";
        //break;
        //case 3:
        //cout<<"wed";
        //case 4:
        //cout<<"thursday";
        //case 5:
        //cout<<"friday";
        //case 6:
        //cout<<"daturday";
       // default:
        //cout<<"invalid";
        int n;
        cin>>n;
        for (int i=1;i<=n;i++)
        {
            for (int j=5;j>=i;j--)
            cout<<"*";
            cout<<"\n";
        }
      
return 0;
    }
