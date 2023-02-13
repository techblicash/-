#include <bits/stdc++.h>
#include <time.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;
#define random(a,b) (rand()%(b-a)+a)
int nosame[10000];
void RandomOutput(int a, int b, int t) {
    srand((int)time(0));
    cout << "结果输出为:  \n";
    for (int i = 0; i < t; i++) cout << random(a, b) << ' ';
}
void RandomSort(int a,int b,int n) {
    int k;
    k = n;
    vector<int> nums;
    for (int i = a; i <= b; ++i) {
        nums.push_back(i);
    }
    mt19937 rng(random_device{}());
    shuffle(nums.begin(), nums.end(), rng);
    for (int i : nums) {
        cout << i << ' ';
        k--;
        if (k == 0)
            break;
    }
}
int main() {
    int a, b, t;
    string ifsame;
    cout << "请输入范围（最大值和最小值）： ";
    cin >> a >> b;
    cout << "请输入循环次数： ";
    cin >> t;
    cout << "是否允许重复（yes/no）： ";
    cin >> ifsame;
    if (ifsame == "yes") RandomOutput(a, b, t);
    else if (ifsame == "no")RandomSort(a, b, t);
    cout << "\n";
    system("pause");
    return 0;
}