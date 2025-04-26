#include "../bits/stdc++.h"
using namespace std;

class MyHashSet {
public:
    int idx;
    int n;
    int* hash;

    MyHashSet() {
        n = 10000;
        idx = 0;
        hash = new int[n];
    }

    void add(int key) {
        if (contains(key)) return;
        if (idx >= n) return;
        hash[idx++] = key;
    }

    void remove(int key) {
        for (int i = 0; i < idx; i++) {
            if (hash[i] == key) {
                swap(hash[i], hash[idx - 1]);
                idx--;
                break;
            }
        }
    }

    bool contains(int key) {
        for (int i = 0; i < idx; i++) {
            if (hash[i] == key) return true;
        }
        return false;
    }

    ~MyHashSet() {
        delete[] hash;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyHashSet* obj = new MyHashSet();

    obj->add(5);
    obj->add(10);
    obj->add(15);
    cout << obj->contains(10) << "\n"; // Output: 1 (true)
    obj->remove(10);
    cout << obj->contains(10) << "\n"; // Output: 0 (false)

    delete obj;
    return 0;
}
