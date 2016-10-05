#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define inf 1000000005
#define all(a) (a).begin(), (a).end()
#define ms(a,x) memset(a, x, sizeof(a))
#define mod 1000000007
#define sz(a) ((int)(a).size())

template<class T> int getbit(T s, int i) { return (s >> i) & 1; }
template<class T> T onbit(T s, int i) { return s | (T(1) << i); }
template<class T> T offbit(T s, int i) { return s & (~(T(1) << i)); }
template<class T> int cntbit(T s) { return __builtin_popcount(s);}
#define Rep(i,n) for(int i = 0; i < (n); ++i)
#define Repd(i,n) for(int i = (n)-1; i >= 0; --i)
#define For(i,a,b) for(int i = (a); i <= (b); ++i)
#define Ford(i,a,b) for(int i = (a); i >= (b); --i)

typedef unsigned long long ull;
typedef long long ll;
typedef double ld;
#define eps 1e-12
typedef pair<int, int> II;
typedef pair<ll, ll> LL;
template<class T> T gcd(T a, T b){ T r; while (b != 0) { r = a % b; a = b; b = r; } return a;}
template<class T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
#define PI (2 * acos(0))
#define linf (1ll << 60)
#define y1 y32432
#define y0 y435346

#define maxn 105

ll n, k, a[maxn][maxn], num[maxn];
int test;

void solve(){
	cin >> n >> k;
	For(i, 1, n){
		cin >> num[i];
		For(j, 1, num[i]) cin >> a[i][j];
	}
	vector<int> V;
	For(i, 1, num[1]) V.pb(a[1][i]);
	sort(all(V));

	For(i, 2, n){
		vector<int> temp;
		Rep(j, sz(V)) For(t, 1, num[i]){
			temp.pb(V[j] + a[i][t]);
		}
		sort(all(temp));
		V.clear();
		for(int j = 0; j < int(temp.size()) && j < k; j++) V.pb(temp[j]);
	}

	Rep(i, k) cout << V[i] << " "; cout << "\n";

}

int main(){
//	freopen("in.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> test;
	Rep(itest, test) solve();
    return 0;
}
