//
// Created by Kacper Murygin on 18/03/2022.
//

#include <iostream>
#include <vector>
#include "playlist.h"
using namespace std;

int main() {
    vector<int> v;
    v.push_back(15);
    v.push_back(122);
    int n = v.size();
    cout << "\nThe last element is: " << v[0];
    cout << "\nThe last element is: " << v[n - 1];
    v[0] = 2222;
    cout << "\nThe last element is: " << v[0];
}
