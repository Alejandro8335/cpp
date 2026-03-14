# include <iostream>

using namespace std;

template <typename T,typename Z>
auto my_max(T x, Z y) {
    return x > y ? x : y;
}

int main() {
    cout << my_max(1, 2) << "\n";
    cout << my_max(0.15, 1.0) << "\n";
    cout << my_max('a', 'A') << "\n";

    cout << my_max(12,15.15) << "\n";
    return 0;
}
