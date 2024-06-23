#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, m;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;
  A = vl(n);
  for (auto&& x : A) {
    cin >> x;
  }

  sort(A.begin(), A.end());
  auto l = 0;
  auto r = n - 1;
  auto ans = 0LL;
  while (l < r) {
    const auto& s = A[l] + A[r];
    if (m == s) {
      ++ans;
      ++l;
    } else if (s < m) {
      ++l;
    } else {
      --r;
    }
  }

  cout << ans;

  return 0;
}