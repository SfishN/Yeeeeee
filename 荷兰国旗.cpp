# include <iostream>
# include <vector>
using namespace std;

void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void flag(vector<int>& v, int n) {
	int p1 = -1;
	int p2 = v.size();
	for (int i = 0; i < p2; i++) {
		if (v[i] < n) {
			Swap(v[i], v[p1 + 1]);
			p1++;
		}
		else if(v[i] > n) {
			Swap(v[i], v[p2 - 1]);
			p2--;
			i--;
		}
	}
}

int main() {
	vector<int> v = { 7,45,6,4,3,34,4,6,6,1,2,4,5,9,7,5,6,43,10 };
	flag(v, 6);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}