#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstdlib>
using namespace std;


class RandomizedSet {
private:
    std::unordered_map<int, int> data_map;
    std::vector<int> data;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (data_map.find(val) != data_map.end()){
            return false;
        }
        data_map[val] = data.size();
        data.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (data_map.find(val) == data_map.end()) {
            return false;
        }

        int val_pos = data_map[val];
        data[val_pos] = data[data.size()-1];
        data_map[data[val_pos]] = val_pos;

        data.pop_back();
        data_map.erase(val);
        return true;
    }
    
    int getRandom() {
        int r_index = rand() % data.size();
        return data[r_index];
    }
};


class RandomizedSet {
private:
    vector<int> data;
    unordered_map<int, int> data_map;
    
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (data_map.find(val) != data_map.end()) {
            return false;
        }
        data.push_back(val);
        data_map[val] = data.size()-1;
    }
    
    bool remove(int val) {
        if (data_map.find(val) == data_map.end()) {
            return false;
        }
        int idx = data_map[val];
        data[idx] = data[data.size()-1];
        data_map[data[idx]] = idx;
        data.pop_back();
        data_map.erase(val);
    }
    
    int getRandom() {
        int r_idx = rand() % data.size();
        return data[r_idx];
    }
};
