#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void FirstWrongCode();

int main(int argc, char* argv[]) {

	int n;
	cin >> n;
	long long arr[1000000];
	arr[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr + 1, arr + (n + 1));
	int maxCnt = 0, tmpMaxCnt = 0;
	long long num = arr[1];
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] == arr[i]) {
			tmpMaxCnt++;
			if (tmpMaxCnt > maxCnt) {
				maxCnt = tmpMaxCnt;
				num = arr[i];
			}
		}
		else {
			tmpMaxCnt = 1;
		}
	}
	cout << num << '\n';
	

	return 0;
}

void FirstWrongCode() {
	int n;
	cin >> n;

	vector<long long> arr;
	vector<int> count;

	long long buf;
	int pos;
	for (size_t i = 0; i < n; i++) {
		cin >> buf;
		pos = find(arr.begin(), arr.end(), buf) - arr.begin();
		if (pos < arr.size()) {
			count[pos]++;
		}
		else {
			arr.push_back(buf);
			count.push_back(1);
		}
	}

	pos = max_element(count.begin(), count.end()) - count.begin();

	long long res = arr[pos];
	count[pos] = -1;

	int pos2 = 0;
	while (pos2 >= 0) {
		if (*max_element(count.begin(), count.end()) < 0) break;
		pos2 = max_element(count.begin(), count.end()) - count.begin();
		//cout << pos2 << endl;
		if (res > arr[pos2]) {
			res = arr[pos2];
			count[pos2] = -1;
		}
	}


	cout << res;
}