#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<ll,ll> P;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define EFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,n)
#define FORE(i,I) for(const auto &(i):(I))
#define ALL(x) (x).begin(),(x).end()
#define SIZE(x) ll(x.size())
#define INF32 2147483647 
#define INF64 9223372036854775807
#define MOD 1000000007
#define PI acos(-1)
#define endl '\n'
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

void merge(vector<int> &arr, int l, int m, int r){
    int sz1 = m - l + 1, sz2 = r - m;
    vector<int> LT(sz1), RT(sz2);
    REP(i,sz1) LT[i] = arr[l + i];
    REP(i,sz2) RT[i] = arr[m + i + 1];
    int i = 0, j = 0, k = l;
    while(i < sz1 && j < sz2){
        if(LT[i] <= RT[j]){
            arr[k] = LT[i];
            i++;
        }else{
            arr[k] = RT[j];
            j++;
        }
        k++;
    }
    while(i < sz1){
        arr[k] = LT[i];
        i++, k++;
    }
    while(j < sz2){
        arr[k] = RT[j];
        j++, k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l , m , r);
    }
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    mergeSort(a, 0 , n-1);
    FORE(i,a) cout << i << ' ';
    return 0;
}