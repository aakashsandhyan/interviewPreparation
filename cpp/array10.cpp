/******** Minimum number of steps to reach end or is it possible?  ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int a[100000];
void printArray(int);
bool canJump(int n) {
	
	int can_reach = 0;
	for(int i = 0;i <= can_reach; i++){
		
		if(i == n - 1){
			return true;
		}
		can_reach = max(can_reach, a[i] + i);
	}
	return false;
}
bool solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	
	if(n == 1)
		return true;
	
	pair<int, int> interval{0, 0};
	int jumps = 0;        
	while(true){
		jumps++;
		int can_reach = -1;
		for(int i = interval.first; i <= interval.second; i++){
			can_reach = max(can_reach, a[i] + i);
		}
		
		if(can_reach >= n - 1){
			cout<<jumps<<endl;
			return true;
		}
		
		interval = {interval.second + 1, can_reach};
		if(interval.first > interval.second)
			return false; // cant go any further
	}
	
	return false;
	//the code will not come here..
        
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