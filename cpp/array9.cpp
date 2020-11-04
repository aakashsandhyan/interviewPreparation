/********   ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int a[100000];
void printArray(int);
void solve(){
	int n, k;
	cin>>n>>k;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(a, a + n);
	
	int res = a[n-1] - a[0];
	if(res <= k){
		cout<<res<<"\n";
		return;
	}
	int big = a[n-1] - k;
	int small = a[0] + k;
	//partitions the array into two halves where 
	//we add k to the first half and subtract k from the later half
	//so we have minimum and maximum for that partitions
	for(int i = 0; i < n - 1; i++){
		if(a[i+1] - k >= 0)
		res = min(res, max(big, a[i] + k) - min(small, a[i+1] - k));
	}
	cout<<res<<"\n";
}
void printArray(int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<"\n";
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