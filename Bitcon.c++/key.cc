#include <unordered_map>
#include <iostream>
#include <string>

int main() {
    std::unordered_map<std::string, int> hash_map;

    // Инициализация значений
    hash_map["один"] = 1;
    hash_map["два"] = 2;
    hash_map["три"] = 3;

    std::string key = "два";
    if (hash_map.find(key) != hash_map.end()) {
        std::cout << "Ключ найден: " << key << " Значение: " << hash_map[key] << std::endl;
    }
    else {
        std::cout << "Ключ не найден: " << key << std::endl;
    }

    // Удаление элемента
    hash_map.erase("три");
    return 0;
}