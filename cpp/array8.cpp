/******** find Largest sum contiguous Subarray [V. IMP]   ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<limits.h>
using namespace std;
int a[100000];
void printArray(int);
void solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	
	long long max_sum = INT_MIN;
	long long curr_sum = 0;
	int i = 0;
	while(i < n){
		curr_sum += a[i];
		max_sum = max(max_sum, curr_sum);
		if(curr_sum < 0)
			curr_sum = 0;
		i++;
	}
	cout<<max_sum<<"\n";
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