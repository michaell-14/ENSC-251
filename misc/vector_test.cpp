#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> A = {1, 3, 5, 4, 1, 2};

int solution(vector<int> &A) {
    if (A.empty()) {
        return -1; // Return a default value if the array is empty
    }
    for (size_t i = 0; i < A.size(); i++) {
        if (A[i] < 0) {
            std::cout << "ERROR: negative number in the array" << std::endl;
            return -1; // Return an error value if a negative number is found
        }
    }
    return *max_element(A.begin(), A.end()); // Return the maximum element in the array
}

int main(){
    std::cout << solution(A) << std::endl;
    return 0;
}
