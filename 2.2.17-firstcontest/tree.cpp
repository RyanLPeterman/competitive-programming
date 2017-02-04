#include <iostream>
#include <vector>
#include <sstream>
#include <map>

std::vector<std::vector<int>> do_io() {
    std::string tmp;

    std::vector<std::vector<int>> ret;

    while (std::getline(std::cin, tmp)) {
        std::stringstream ss(tmp);
        std::vector<int> nums;
        int ti;
        while (ss >> ti) {
            nums.push_back(ti);
        }

        ret.push_back(nums);
    }

    return ret;
}

void print_vec(std::vector<int> vec) {
    for(auto it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << ' ';
    } 
}

int main () {
    std::vector<std::vector<int>> input = do_io();
    
    // test contents of input
    // for(auto it = input.begin(); it != input.end(); it++) {
    //     for(auto iter = (*it).begin(); iter != (*it).end(); iter++) {
    //         std::cout << *iter << " ";
    //     }

    //     std::cout << std::endl;
    // }
    
    int n = input[0][0];
    std::vector<int> colors = input.back();

    // build graph
    std::map<int, std::vector<int>> edges;
    for (int i = 1; i < input.size() - 1; i++) { 
        int from = input[i][0];
        int to = input[i][1];

        edges[from].push_back(to);
        edges[to].push_back(from);
    }

    // for each node
    //    perform bfs to verify colors
    //      if any colors differ, terminate move onto next node
    //    if a node is found that satsfies, terminate with yes and output it

}
