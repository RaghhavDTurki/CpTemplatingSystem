#include <bits/stdc++.h>

using namespace std;
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define ln "\n"
#define ll long long int
#define Mod 1000000007
#define lld long double

template<typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
	if (start < 0) start = 0;
	if (end < 0) end = int(v.size());

	for (int i = start; i < end; i++)
		cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

void solve(int tc) {
	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cout << setprecision(15) << fixed;
	ll t = 1;
	cin >> t;
	for (ll i = 0; i < t; i++)
	{
		solve(i);
	}
	return 0;
}