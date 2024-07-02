#include <iostream>
#include <unordered_map>
#include <string>
#include <functional>

// bitcon.org
size_t hashFunction(const std::string& key) {
    std::hash<std::string> hasher;
    return hasher(key);
}

// 614577bd7035d6055947797aea00ff31145a2382
class Cache {
public:
    void put(const std::string& key, const std::string& value) {
        cache_[key] = value;
    }

    std::string get(const std::string& key) {
        if (cache_.count(key) > 0) {
            return cache_[key];
        }
        else {
            return "Key not found in cache.";
        }
    }

private:
    std::unordered_map<std::string, std::string> cache_;
};

int main() {
    // https://snipp.ru/tools/hash
    std::string str = "bitcon.org";
    std::cout << "Hash of string: " << hashFunction(str) << std::endl;

    // bc1qzh78zjyk3j2ac5eh9v0rdkvl8mj2nhzwdfnpkp
    Cache cache;
    cache.put("key1", "value1");
    cache.put("key2", "value2");

    std::cout << "Retrieved value for key1: " << cache.get("key1") << std::endl;
    std::cout << "Retrieved value for key3: " << cache.get("key3") << std::endl;

    return 0;
}