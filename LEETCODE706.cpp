#include "../bits/stdc++.h"
using namespace std;

class MyHashMap {
public:
    int capacity;
    int *hash;
    MyHashMap() {
        capacity = 10000;
        hash = new int[capacity];
        for(int i = 0; i < capacity; i++) hash[i] = -1;
    }

    void put(int key, int value) {
        if (key >= capacity) return;
        hash[key] = value;
    }

    int get(int key) {
        if (key >= capacity) return -1;
        return hash[key];
    }

    void remove(int key) {
        if (key >= capacity) return;
        hash[key] = -1;
    }

    ~MyHashMap() {
        delete[] hash;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> commands = {
        "MyHashMap", "put", "put", "get", "remove", "get"
    };
    vector<vector<int>> arguments = {
        {}, {1, 1}, {2, 2}, {1}, {1}, {1}
    };

    MyHashMap* obj = nullptr;

    for (int i = 0; i < commands.size(); i++) {
        string cmd = commands[i];
        if (cmd == "MyHashMap") {
            obj = new MyHashMap();
            cout << "null\n";
        } else if (cmd == "put") {
            obj->put(arguments[i][0], arguments[i][1]);
            cout << "null\n";
        } else if (cmd == "get") {
            int res = obj->get(arguments[i][0]);
            cout << res << "\n";
        } else if (cmd == "remove") {
            obj->remove(arguments[i][0]);
            cout << "null\n";
        }
    }

    delete obj;
    return 0;
}
