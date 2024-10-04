////Number of laser beams in a bank(Leet: 2125)
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
//     int numberOfBeams(vector<string>& bank) {
//         int x = bank.size();
//         vector<int> FloorBeams;
//         int ans = 0;
//         for (int i = 0; i < x; i++) {
//             int beamCount = 0;
//             for (auto ch : bank[i]) {
//                 if (ch == '1') {
//                     beamCount++;
//                 }
//             }
//             FloorBeams.push_back(beamCount);
//         }
//         int z = FloorBeams.size();
//         for (int i = 1; i < z; i++) {//use for loop instead of while
//             if (FloorBeams[i - 1] != 0) {
//                 ans = ans + FloorBeams[i] * FloorBeams[i - 1];
//             } else {
//                 int j = i - 1;
//                 while (j >= 0 && FloorBeams[j] == 0) {
//                     j--;
//                 }
//                 if (j >= 0) {
//                     ans = ans + FloorBeams[i] * FloorBeams[j];
//                 }
//             }
//         }
//         return ans;
//     }
// int main() {
//     vector<string> bank = {"011001", "000000", "010100", "001000"};
//     long long result = solution.numberOfBeams(bank);  // Use long long for result
//     cout << "Output: " << result << endl;
//     return 0;
// }


