#include<iostream>
#include<bits/stdc++.h>
#define FOR(a,b,c) for(int(a) = (b); (a) <(c); ++(a)) 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
fast_cin();

// cout << "Hello";
// phương pháp cộng dồn mảng - prefix sum
int arr[] = {10,20,40,60,50};
int n = 5;
FOR(i,1,n)
arr[i]=arr[i]+arr[i-1];


for(int i : arr)
cout << i << " ";
return 0;
}
