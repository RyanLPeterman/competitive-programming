#include <iostream>
#include <vector>
#include <sstream>

int main () {

    std::string tmp;
    std::getline(std::cin, tmp);
    std::vector<int> nums;
    std::stringstream ss(tmp);
    
    int n;
    while (ss >> n) {
        nums.push_back(n);
    }

    n = nums[0];
    int m = nums[1];
    int z = nums[2];

    long long num_kill = 0;
    for (int i = 1; i <= z; i++) {

        if ((i % m == 0) && (i % n == 0)) {
            num_kill++;
        }
    }

    std::cout << num_kill << std::endl;
}
