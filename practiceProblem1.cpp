#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define FOR(a,b,c) for(int(a) = (b); (a) <(c); ++(a)) 

void solve(){
}

void traversal(int arr[], int s){
    FOR(i, 0, s)
    {
        cout << arr[i] << " ";
    }
}

int sum_arr(int arr[], int s){
    int sum = 0;
    FOR(i, 0 , s){
        sum += arr[i];
    }
    return sum;
}

void search(int arr[], int s, int x){
    FOR(i, 0, s) {
        if(arr[i] == x){
            cout << i << endl;
            break;
        }
    }
}
void swap(int &x, int &y){
    int temp = x;
    x= y;
    y = temp;
}

// array reverse Pseudo Code 
void reverse(int arr[], int s){
    int left = 0;
    int right = s -1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
        /* code */
    }
    


}

// reverse recursive 
void rev_rec(int arr[], int left, int right) {
    if (left > right)
    {
        return;
        /* code */
    }
    
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    rev_rec(arr, left +1, right -1);

}

int main()

{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//out << "Hello";
// int a,b;
// cin >> a >> b;
//cout << a + b << endl;
// int arr[] = {5, 2, 7,4 ,3,6,1};
int arr[] = {1,2,3,4,6,7}; // 5
// sum of the elements from 1 to n is given by n*(n+1)/2
int n  = 7;
int size = sizeof(arr) /sizeof(arr[0]);
// traversal(arr, size);
// cout << sum_arr(arr, size);
// search(arr,size, 7);
// reverse(arr, size);
// rev_rec(arr, 0, size -1);
// problem-1 Statement : find the missing number from the given sequence 1 to n.
int sum =0;
for (int i : arr) {
    sum += i;
}
int ans = n* (n+1)/2 -sum;
// for(int i : arr)
cout << ans << " ";
return 0;
}