#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<limits.h>
using namespace std;
int a[1000];
void solve(){
	
	int n;
	cin>>n;
	for(int i = 0; i < n ; i++)
		cin>>a[i];
	int minElement = INT_MAX, maxElement = INT_MIN;
	int i = 0;
	while(i<n){
		minElement = min(minElement, a[i]);
		maxElement = max(maxElement, a[i++]);		
	}
	cout<<"Max element : "<<maxElement<<"\nMin Element : "<<minElement<<"\n";
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