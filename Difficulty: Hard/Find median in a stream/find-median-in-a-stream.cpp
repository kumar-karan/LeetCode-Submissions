//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> g;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(s.empty())  
        {
            s.push(x);
            return;
        }
        if(s.size() > g.size())
        {
            if(s.top()> x)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);
        }
        else
        {
            if(s.top() > x)
                s.push(x);
            else
            {
                g.push(x);
                s.push(g.top());
                g.pop();
            }
        }
        getMedian();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(s.size() == g.size())
            return (double)(s.top()+ g.top())/2.0;
        else
            return s.top();
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends