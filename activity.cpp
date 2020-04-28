#include<map>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#include<queue>
#include<stack>
#include<cmath>
#include<string>
#include<cstdio>
#include <iomanip>
using namespace std;
const int maxn = 3e5 + 10;
#define ll long long
int i, j, k;
int n, m, q;
const int inf = 0x3f3f3f;
const int mod = 1e9 + 7;
map<ll, ll> mp[30];
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
int s[maxn], f[maxn];
bool id[maxn];  
int main() {
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> s[i] >> f[i];
	}
	id[1] = 1;
	j = 1;
	for (i = 2; i <= n; i++) {
		if (s[i] >= f[j]) {
			id[i] = 1;
			j = i;
		}
		else
			id[i] = 0;
	}
	for (i = 1; i <= n; i++) {
		if (id[i])
			cout << "第" << i << "个可以参加的活动 : " << "ST = " << s[i] << " FT = " << f[i] << endl;
	}
	return 0;
}
