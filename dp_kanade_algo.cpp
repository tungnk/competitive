#include<iostream>
#include<bits/stdc++.h>
#define FOR(a,b,c) for(int(a) = (b); (a) <(c); ++(a)) 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
/* Thuật toán Kadane – Tìm tập hợp con có tổng lớn nhất
. Giới thiệu:
–  Là thuật toán quy hoạch động có thể tìm ra tập hợp con có tổng lớn nhất 
từ tập hợp ban đầu một cách nhanh chóng, tốc độ thực hiện O(n).

– Chẳng hạn: A = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84} ,
 nên tập hợp con có tổng hợp nhất là {59, 26, -53, 58, 97}

Algorithms
curr_max = a[0],
max_so_far = a[0],
For (i to N)
{
    curr_max = maximum(a[i], curr_max +a[i])
    max_so_far = maximun(max_so_far, curr_max)
}
return max_so_far;
*/
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
fast_cin();
int a[100] = {};
int n;
cin >> n;
FOR(i,0 ,n)
cin >> a[i];
int curr_max = a[0], max_so_far = a[0];
FOR(i,1,n){
    curr_max = max(a[i], curr_max + a[i]); // find max in continue array element
    max_so_far = max(max_so_far, curr_max); // update max_so_far
}
cout << max_so_far << endl;  ;


return 0;
}