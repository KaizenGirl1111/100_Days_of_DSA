#include<iostream>
using namespace std;
string Capitalize(string title)
{
    int n=title.size();
    int j=0;
    while(j<n)
    {
        int i=j;
        while(title[j]!=32 && j<n) title[j]=tolower(title[j]),j++;
        if(j-i>2) title[j]=toupper(title[j]);
        j++;
    }
    return title;
}