#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ifstream inFile("file.in", ios::in);
    if(!inFile){
        cerr << "Failed opening!" << endl;
        exit(1);
    }

    int n;
    inFile >> n;
    vector<int> v(n);

    int i;
    for(i=0; i<n; ++i) inFile >> v.at(i);
    sort(v.begin(), v.end());

    int sum = 0;
    for(i=n-1; i>n-6; --i) sum = sum + v.at(i);
    cout << sum << endl;

	return 0;
}
