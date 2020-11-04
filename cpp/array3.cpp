/****Find the "Kth" max and min element of an array ******/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int a[500000];
void solve(){
	
	//priority_queue< int, vector<int>, greater<int> > minHeap;
	priority_queue<int> maxHeap;
	int n, k, x;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	//	minHeap.push(x);
	}
	cin>>k;
	for(int i = 0; i < k; i++)
	    maxHeap.push(a[i]);
	
	for(int i = k; i < n; i++){
	    if(a[i] < maxHeap.top()){
	        maxHeap.pop();
	        maxHeap.push(a[i]);
	    }
	}
	cout<<maxHeap.top()<<"\n";
}
int main(){
	//to do
	int t,n;
	scanf("%i", &t);
	while(t--){
		solve();
	}
	return 0;
}