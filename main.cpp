#include <bits/stdc++.h>
using namespace std;

// types -------------------------------------------------------------------------
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vll = vector<ll>;
using sll = set<ll>;
using vs = vector<string>;
using llll = pair<ll, ll>;
using ss = pair<string, string>;
using ldld = pair<ld, ld>;
// shortcuts ---------------------------------------------------------------------
#define PI acos(-1)
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
#define re return
#define prec(n) fixed << setprecision(n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(k, i, n) for(ll i = k; i < n; ++i)
#define rep0(i, n) rep(0, i, n)
#define irep(k, i, n) for(int i = n - 1; i >= k; --i)
#define irep0(i, n) irep(0, i, n)
// streams -----------------------------------------------------------------------
#define templX template <typename X>
#define templXY template <typename X, typename Y>
#define templXYZ template <typename X, typename Y, typename Z>
#define templXYs template <typename X, typename... Ys>
templX  istream& operator>>(istream& stream, vector<X>& vec) { for (auto& e: vec) stream >> e; re stream; }
templXY istream& operator>>(istream& stream, pair<X, Y>& p)  { stream >> p.fi >> p.se; re stream; }
templXY Y& operator<<(Y& str, const vector<X>& vec) { for (auto& e: vec) str << e; re str; }
templXY Y& operator<<(Y& str, const set<X>& vec) { for (auto& e: vec) str << e; re str; }
templXY Y& operator<<(Y& str, const list<X>& vec) { for (auto& e: vec) str << e; re str; }
templXY Y& operator<<(Y& str, const deque<X>& vec) { for (auto& e: vec) str << e; re str; }
templXYZ Z& operator<<(Z& str, const pair<X,Y>& p)  { str << p.fi << p.se; re str; }
#define endl '\n'
// sep_ostream --------------------------------------------------------------------
struct sep { sep(string sep) : _(sep) {} string _; };
struct sep_ostream {
  sep_ostream(ostream& str, string sep) : _str(str), _sep(sep) {}
  templX sep_ostream& operator<<(const X& a) { if (_step-- > 1) {*this << a;} else _str << (_step ? _sep : "") << a; re *this; }
  sep_ostream& operator<<(ostream& (*manip)(ostream&)) { manip(_str); re *this; }
 private: ostream& _str; string _sep; int _step = 2;
};
sep_ostream operator<<(ostream& str, sep s) { re sep_ostream(str, s._); }
// logging -----------------------------------------------------------------------
#ifdef DEBUG
#define IF_DEBUG(A) A
#define IF_NOT_DEBUG(A)
#else
#define IF_DEBUG(A)
#define IF_NOT_DEBUG(A) A
#endif
struct debug_stream {
  debug_stream(sep_ostream str) : _str(str) { IF_DEBUG( str << "\033[34m"; ) }
  ~debug_stream() { IF_DEBUG( _str << "\033[0m" << endl; ) }
  templX debug_stream& operator<<(const X& a) { IF_DEBUG( _str << a; ) re *this; }
  templX debug_stream& batch(const X& a) { IF_DEBUG( *this << a; ) re *this; }
  templXYs debug_stream& batch(const X& a, const Ys&... b) { IF_DEBUG( *this << a; batch(b...); ) re *this; }
  debug_stream& operator<<(ostream& (*manip)(ostream&)) { IF_DEBUG( _str << manip; ) re *this; }
 private: sep_ostream _str;
};
#define dout debug_stream(sep_ostream(cout, " "))
#define doutX(...) dout.batch(#__VA_ARGS__" =", __VA_ARGS__);
// time --------------------------------------------------------------------------
using namespace chrono;
struct debug_time {
  debug_time(sep_ostream str) : _str(str), start(system_clock::now()) {}
  ~debug_time() { IF_DEBUG( _str << "\n\033[31m" << "Elapsed time = " << duration_cast<milliseconds>(system_clock::now()-start).count() << "\033[0m"; ) }
 private: sep_ostream _str; time_point<system_clock> start;
};
#define TIMER debug_time l(sep_ostream(cout, ""));
#define SLEEP IF_DEBUG(this_thread::sleep_for(chrono::milliseconds(2)));
// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  //IF_NOT_DEBUG( freopen("input.txt", "r", stdin); )
  //IF_NOT_DEBUG( freopen("out.txt", "w", stdout); )
}