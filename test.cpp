#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, k;
    cout<<'Enter the n '<<endl;
    cin >> N;
    cout<<"Enter the k "<<endl
    cin>>k;

    vector<int> weights(N);
    for (int i = 0; i < N; i++) {
        cin >> weights[i];
    }

    // Find the heaviest box
    int maxWeight = *max_element(weights.begin(), weights.end());

    long long totalEffort = 0;

    // If the heaviest box is already at the required position, we don't need to move it
    if (k != 1) {
        // Calculate the effort needed to move the heaviest box to the first position
        totalEffort = maxWeight * weights[0];
        swap(weights[0], weights[k - 1]);
    }

    // Sort the rest of the boxes
    sort(weights.begin() + 1, weights.end());

    // Calculate the effort to sort the rest of the boxes
    for (int i = 1; i < N - 1; i++) {
        totalEffort += weights[i] * weights[i + 1];
    }

    cout << totalEffort << endl;

    return 0;
}
