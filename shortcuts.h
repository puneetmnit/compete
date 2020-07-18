/**
typedefs start
**/

// for
#define For(i,n) for(int i=0; i<(n); ++i)
#define rFor(i,n) for(int i=(n)-1; i>=0; --i)
#define kFor(i,k,n) for (int i=(k); i<(n); ++i)
#define rkFor(i,k,n) for(int i=(n)-1; i>=k; --i)
#define iFor(i,n) for(auto i=n.begin(); i<n.end(); ++i)
#define riFor(i,n) for(auto i=n.rbegin(); i<n.rend(); ++i)

// containers
template<typename T>
using V_ = std::vector<T>;

using VI = std::vector<int>;
using VVI = V_<VI>;

using LI = std::list<int>;
using LLI = std::list<list<int>>;
using LVI = std::list<vector<int>>;
using VLI = std::vector<list<int>>;

using MII = std::unordered_map<int, int>;
using MSS = std::unordered_map<string, string>;
using MSI = std::unordered_map<string, int>;
using MIS = std::unordered_map<int, string>;
using MIV = std::unordered_map<int, vector<int>>;
using MIVS = std::unordered_map<int, vector<string>>;

using SI = std::unordered_set<int>;
using SS = std::unordered_set<string>;

template<typename T>
inline void Sort(T& c, int i=0) {
  std::sort(std::begin(c)+i, std::end(c));
}
template<typename T>
inline void Sort(T& c, int i, int j) {
  std::sort(std::begin(c)+i, std::begin(c)+j);
}

template<typename T>
inline void rSort(T& c, int i=0) {
  std::sort(std::begin(c)+i, std::end(c), std::greater<typename T::value_type>{});
}
template<typename T>
inline void rSort(T& c, int i, int j) {
  std::sort(std::begin(c)+i, std::begin(c)+j, std::greater<typename T::value_type>{});
}

template<typename T>
inline void rev(T& c) { return std::reverse(std::begin(c), std::end(c)); }

VI Range(int nums, int start = 0) {
    VI ret(nums);
    iota(ret.begin(), ret.end(), start);
    return ret;
}

template<typename C>
inline auto Find(const C& cont, const typename C::value_type& val) {
    return std::find(std::begin(cont), std::end(cont), val);
}


/**
typedefs end
**/


