#include<bits/stdc++.h>
 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define alla(a, n) a, a + n
 
using namespace std;
 
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

// Some contants
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
 
// Some frequently used functions
template <typename T>
T modpow(T base, T exp, T modulus){  
    base %= modulus;  T result = 1;  
    while(exp > 0){    
        if(exp & 1) result = (result * base) % modulus;    
        base = (base * base) % modulus;    
        exp >>= 1;  
    }  
    return result;
}
vector <ll> prime_fact(ll a)
{
    vector<ll> v;
    while(a%2==0)
    {
        a/=2;
        v.push_back(2);
    }
    for(ll i=3;i<sqrt(a);i+=2)
    {
        if(a%i==0)
        {
            a/=i;
            v.push_back(i);
        }
    }
    if(a>2)
        v.push_back(a);
    return v;
}
vector <ll> seive(ll a)
{
    bool prime[a+1];
    for(ll p=2;p<=a;p++)
    {
        if(prime[p]==false)
        {
            for(ll i=p*p;i<=a;i+=p)
            {
                prime[i]=true;
            }
        }
    }
    vector<ll> v;
    for(p=2;p<=a;p++)
    {
        if(prime[p]==false)
            v.push_back(p);
    }
}
ll gcd(ll a,ll b){ return a%b==0?b:gcd(b,a%b);}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
ll int_pow(ll base,ll exp)
{
    ll result = 1;
    while (exp)
    {
        if (exp & 1)
        {
           result = (base*result)%inf;
       }
        exp >>= 1;
        base = (base*base)%inf;
    }
    //cout<<result;
    return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}