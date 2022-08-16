/**
 * @description
 *
 * Let us consider this example (array written in general format):
 *
 * @examples
 * ls = [0, 1, 3, 6, 10]
 *
 * Its following parts:
 * ls = [0, 1, 3, 6, 10]
 * ls = [1, 3, 6, 10]
 * ls = [3, 6, 10]
 * ls = [6, 10]
 * ls = [10]
 * ls = []
 *
 * The corresponding sums are (put together in a list): [20, 20, 19, 16, 10, 0]
 *
 * The function parts_sums (or its variants in other languages)
 * will take as parameter a list ls and return a list of the sums of its parts as defined above.
 *
 *
 * More @examples
 *
 * ls = [1, 2, 3, 4, 5, 6]
 * parts_sums(ls) -> [21, 20, 18, 15, 11, 6, 0]
 *
 * ls = [744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358]
 * parts_sums(ls) -> [10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 0]
 *
 *
 * @notes
 * Take a look at performance: some lists have thousands of elements.
 * Please ask before translating.
 *
 */
#include <iostream>
#include <string>
#include <vector>
 
std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls);
 
int main() {
    std::cout << "Test #3" << std::endl << " Input: {0, 1, 3, 6, 10}" << std::endl << " Expected Output: {20, 20, 19, 16, 10, 0}" << std::endl << "Output: ";
    for(auto x: partsSum({0, 1, 3, 6, 10})) // {20, 20, 19, 16, 10, 0}
        std::cout << x << ' ';

    std::cout << std::endl << std::endl << std::endl << "Test #2" << std::endl << " Input: {1, 2, 3, 4, 5, 6}" << std::endl << " Expected Output: {21, 20, 18, 15, 11, 6, 0}" << std::endl << "Output: ";
    for(auto x: partsSum({1, 2, 3, 4, 5, 6})) // {21, 20, 18, 15, 11, 6, 0}
        std::cout << x << ' ';

    std::cout << std::endl << std::endl << std::endl << "Test #3"  << std::endl << " Input: {158077, 143494, 196531, 26272, 35656, 68756, 109861, 36958, 83895, 134127, 81618, 193758, 143422}" << std::endl << " Expected Output: {1412425, 1254348, 1110854, 914323, 888051, 852395, 783639, 673778, 636820, 552925, 418798, 337180, 143422, 0}" << std::endl << "Output: ";
    for(auto x: partsSum({158077, 143494, 196531, 26272, 35656, 68756, 109861, 36958, 83895, 134127, 81618, 193758, 143422})) // {1412425, 1254348, 1110854, 914323, 888051, 852395, 783639, 673778, 636820, 552925, 418798, 337180, 143422, 0}
        std::cout << x << ' ';
        
    return 0;
}

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
    std::vector<unsigned long long> in = ls;
    unsigned long long sum = 0;
    std::vector<unsigned long long> out;

    while (ls.size() > out.size())
    {
        for(auto i: in)
            sum += i;

        out.push_back(sum);
        sum = 0;
        in.erase(in.begin());
    }

    out.push_back(sum);


    return out;
}
