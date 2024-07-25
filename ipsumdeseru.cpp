#include <iostream>

using namespace std;

// One span is zero, hence we can add
int addSpans(int span1, int span2) {
    if (span1 == 0 || span2 == 0) {
        return span1 + span2;
    }

    // Additional logic for adding spans when neither is zero
    return span1 + span2;
}

int main() {
    int spanA = 0;
    int spanB = 5;
    int result = addSpans(spanA, spanB);
    cout << "Result: " << result << endl;  // Output: Result: 5
    return 0;
}
