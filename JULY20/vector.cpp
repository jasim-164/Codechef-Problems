#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

vector<vector<int>> mySol = {{3,1},{1,2},{4,5},{1,3},{1,2}};
sort(mySol.begin(), mySol.end());

//print out shortest distance
cout << mySol[0][0] << endl;

//print out the number of shortest paths
int nShortest = 0;
for (int i = 0; i < mySol.size(); i++)
{
    if (mySol[0][0] == mySol[i][0])
        nShortest += 1;
}
cout << nShortest << "  ";

//print out y-coordinates of the shortest paths in increasing order
for (int i = 0; i < nShortest; i++)
{
    cout << mySol[i][1] << " ";
}
}
