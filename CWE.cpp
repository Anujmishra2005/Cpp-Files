#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    vector<int> prices(a);
    for (int i = 0; i < a; ++i) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    for (int i = 0; i < b; ++i) {
        int x, y;
        cin >> x >> y;
        int total = 0;
        for (int j = 0; j < y; ++j) {
            total += prices[j];
        }
        cout << total << endl;
    }
    return 0;
}
