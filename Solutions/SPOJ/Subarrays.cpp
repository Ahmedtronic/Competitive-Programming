#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef pair <int, int> intpair;
#define longlongvector vector<long long>
typedef long long ll;
#define pause system("pause")
#define overtwo >> 1
#define intvector vector<int> 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define reverseall(x) reverse(all(x))
//#define size .size()
#define ever for(;;)
#define isnotempty(s) !s.empty()
// max element in a vector --> maxelement 
// count ... returns a number of time an element occurs in any array or vector  count ( a, a.end, item )
// lowerebound --> first equal or greater than 
// you can memeset a 2d char array....
// a pair is sorted according to its first
// sort(v.rbegin(), v.rend()-1);
// best practice strategy dealing with string creation or manipulation is to use a char array when needed.
string yes[3] = { "YES", "Yes", "yes" };
string no[3] = { "NO", "No", "no" };
#define inf 0x3f3f3f3f
int countones(int a) { int count = 0; while (a != 0) { count++; a = a & (a - 1); } return count; }
int countones(ll a) { int count = 0; while (a != 0) { count++; a = a & (a - 1); } return count; }
unsigned int reverse_bits(register unsigned int x) { x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1)); x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2)); x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4)); x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8)); return((x >> 16) | (x << 16)); }
#define here cout<<"here"<<endl;
#define maxelement(x) *max_element(all(x));

//smallest subarray of a given sum

vector<int> maxSlidingWindow(vector<int>& nums, int k)
{
	deque<int> dq;
	vector<int> res;

	for (int i = 0; i < nums.size(); ++i)
	{
		// Remove elements out of window
		if (!dq.empty() && dq.front() == i - k)
			dq.pop_front();

		// dq is in descending order (invariant)
		while (!dq.empty() && nums[dq.back()] < nums[i])
			dq.pop_back();

		// push the current element to the deque
		dq.push_back(i);
		if (i >= k - 1)
			res.push_back(nums[dq.front()]);
	}

	return res;
}


int main()
{
	int n; cin >> n; intvector v(n); for (int i = 0; i < n; i++) cin >> v[i]; int k; cin >> k;
	intvector a = maxSlidingWindow(v,k);

	for (auto i : a) cout << i << " ";
}


