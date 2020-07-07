/* c+++ shortcuts
include this to add time saving shortcuts*/

// for
#define For(i,n) for(int i=0; i<(n); ++i)
#define rFor(i,n) for(int i=(n)-1; i>=0; --i)
#define kFor(i,n,k) for (int i=0; i<(n); i+=(k))
#define rkFor(i,n,k) for(int i=(n)-1; i>=0; i-=(k))
#define iFor(i,n) for(auto i=n.begin(); i<n.end(); ++i)
#define riFor(i,n) for(auto i=n.rbegin(); i<n.rend(); ++i)

// containers
template<typename T>
using V_ = vector<T>;

using VI = vector<int>;
using VVI = V_<VI>;

using LI = list<int>;
using LI = list<list<int>>;
using LVI = list<vector<int>>;
using VLI = vector<list<int>>;

using MII = unordered_map<int, int>;
using MSS = unordered_map<string, string>;
using MSI = unordered_map<string, int>;
using MIS = unordered_map<int, string>;
using MIV = unordered_map<int, vector<int>>;
using MIVS = unordered_map<int, vector<string>>;

using SI = unordered_set<int>;
using SS = unordered_set<string>;

#define Sort(c) = sort(c.begin(), c.end());
#define Sortj(c,i) = sort(c.begin(), c.begin()+(j));
#define Sortij(c,i,j) = sort(c.begin()+(i), c.begin()+(i)+(j));
#define Sorti(c,i) = sort(c.begin()+(i), c.end());


