#include <iostream>
#include <fstream>
#include <list>
 
using namespace std;
 
void split(string str, string separator, list<string>* results)
{
    unsigned int found;
    found = str.find_first_of(separator);
       
    while(found != string::npos)
    {
        if(found > 0)
        {
            results->push_back(str.substr(0,found));
        }
           
        str = str.substr(found+1);
        found = str.find_first_of(separator);
    }
   
    if(str.length() > 0)
    {
        results->push_back(str);
    }
}
 
bool compare(string first, string second)
{
    return first.length()>second.length();
}
int main()
{
    int n=0;
    //vector<string> results;
    list<string>::iterator it;
    list<string> results;
    char str[10000];
    while (cin >> n && !feof(stdin))
    {
        for (int i = 0; i < n; i++)
        {
            cin.get();
            cin.get(str,3000);
            split(str," ",&results); 
            int size = results.size();
            results.sort(compare);
            for (it = results.begin(); it !=results.end() ; it++)
            {
                cout <<*it;
                if (size!=1)
                {
                    cout << " ";
                }
                size--;
            }
            cout <<endl;
            results.clear();
        }
    }
    return 0;
}
