/******** Move all negative numbers to beginning and positive to end  ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int a[10000];
void printArray(int);
void swap(int, int);
void solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int curr = 0;
	int negativeIndex = 0;
	int high = n - 1;
	while(curr <= high){
		if(a[curr] < 0){
			swap(curr, negativeIndex);
			negativeIndex++;
		}
		curr++;
	}
	printArray(n);
	
}
void swap(int x, int y){
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
} 
void printArray(int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	
}
int main(){
	//to do
	int t;
	scanf("%i", &t);
	while(t--){
		solve();
	}
	return 0;
}