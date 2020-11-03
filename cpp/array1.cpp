#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int a[1000];
void printArray(int);
void solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n / 2; i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	printArray(n);
}

void printArray(int n){
	cout<<"Reversed Array : ";
	for(int i = 0;i < n; i++)
		cout<<a[i]<<"\t";
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