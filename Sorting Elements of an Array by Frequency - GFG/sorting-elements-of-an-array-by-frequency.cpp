#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    unordered_map<int, int> m;
	    unordered_map<int, int>::iterator it;
	    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	    
	    for (int i = 0; i < n; i++) {
	        m[arr[i]]++;
	    }
	    
	    for (it = m.begin(); it != m.end(); it++) {
	        pq.push({-1 * it->second, it->first});
	    }
	    
	    while(pq.size() > 0) {
	        int freq = -1 * pq.top().first;
	        int elem = pq.top().second;
	        
	        for (int i = 1; i <= freq; i++) {
	            cout << elem << " ";
	        }
	        pq.pop();
	    }
	    
	    cout << endl;
	    
	}
	return 0;
}