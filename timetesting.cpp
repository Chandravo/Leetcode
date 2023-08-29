//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// pair<int,int> check(int low) {
//     int even = 0;
//     int odd = 0;
//     int cnt =0;
//     while (low > 0) {
//         if (low % 2 == 0) {
//             even++;
//         } else {
//             odd++;
//         }

//         low /= 10;
//         cnt++;
//     }

//     if (even == odd) {
//         return {1,cnt};
//     } else {
//         return {0,cnt};
//     }
// }
//     int numberOfBeautifulIntegers(int low, int high, int k) {
//     low = ((low - 1) / k + 1) * k;
//     int count = 0;
//     int prev = 0;
//     int low1=10000,high1=99999;
//     auto low2=1000000,high2=9999999;
//     auto mx = 100000000;
//     while (low <= high) {
//         auto temp = check(low);
//         count+=temp.first;
//         low += k;
//         if (prev!=temp.second){
//             if (low>=100 && low<=999){
//                 low = ((999)/k+1)*k;
//             } 
//             else if  (low>=low1 && low<=high1){
//                 low = ((high1)/k+1)*k;
//             }
//              else if  (low>=low2 && low<=high2) low = (high2/k+1)*k;
//             else if (low >= mx) {
//                 return count;
//             }
//             prev=temp.second;
//         }
//     }

//     return count;
// }


    int check(int low) {
        int even = 0;
        int odd = 0;

        while (low > 0) {
            if (low % 2 == 0) {
                even++;
            } else {
                odd++;
            }

            low /= 10;
        }

        if (even == odd) {
            return 1;
        } else {
            return 0;
        }
    }

    int numberOfBeautifulIntegers(int low, int high, int k) {
        low = ((low - 1) / k + 1) * k;
        int count = 0;
        while (low <= high) {
            count += check(low);
            low += k;

            if (low >= 100000000) {
                return count;
            }
        }

        return count;
    }

int main(){
    clock_t start,end;
    start = clock();
    // vector<int> nums{43, 17, 92, 68, 55, 23, 87, 5, 36, 71, 29, 81, 9, 62, 47, 14, 64, 33, 79, 58, 96, 11, 52, 27, 73, 39, 89, 2, 69, 45, 18, 82, 63, 31, 75, 21, 84, 53, 37, 91, 8, 66, 41, 86, 3, 24, 98, 57, 13, 78, 50, 16, 72, 28, 67, 94, 1, 49, 25, 76, 35, 61, 22, 88, 4, 65, 42, 97, 15, 93, 59, 19, 83, 51, 38, 85, 6, 32, 74, 10, 56, 26, 70, 7, 34, 80, 20, 54, 46, 90, 12, 60, 48, 95, 30, 77, 40, 99, 44};
    numberOfBeautifulIntegers(1,1000000000,3);
    end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

}