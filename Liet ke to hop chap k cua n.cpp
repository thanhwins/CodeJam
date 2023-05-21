#include<bits/stdc++.h>
using namespace std;

void makeCombiUtil(vector<vector<int> >& ans,
    vector<int>& tmp, int n, int left, int k)
{
    if (k == 0) {
        ans.push_back(tmp);
        return;
    }
    for (int i = left; i <= n; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);
        tmp.pop_back();
    }
}

vector<vector<int> > makeCombi(int n, int k)
{
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

int main(){
	int n=5,k=3;
	vector<vector<int> > v = makeCombi(n,k);
	for (int i = 0; i < v.size(); i++) 
	{
        for (int j = 0; j < v[i].size(); j++) 
		{
			cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
