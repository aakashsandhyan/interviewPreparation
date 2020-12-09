/******** Rain water trapping ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int a[100000];
void printArray(int);
int solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	
	if(n <= 1)
		return 0;
	//initialize
	vector<int> leftHeights(n);
	vector<int> rightHeights(n);
	
	rightHeights[n - 1] = 0;
	leftHeights[0] = 0;
	
	for(int i = 1; i < n; i++){
		leftHeights[i] = max(leftHeights[i - 1], height[i-1]);
		rightHeights[n-i-1] = max(rightHeights[n-i], height[n-i]);
	}
	
	long ans = 0;
	for(int i = 1; i < n - 1; i++){
		if(height[i] < leftHeights[i] and height[i] < rightHeights[i] )
			ans = ans + min(leftHeights[i], rightHeights[i]) - height[i];
	}
	
	return ans;
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
		cout<<solve()<<"\n";
	}
	return 0;
}