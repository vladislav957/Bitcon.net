#include <unordered_map>
#include <iostream>
#include <string>

int main() {
    std::unordered_map<std::string, int> hash_map;

    // ������������� ��������
    hash_map["����"] = 1;
    hash_map["���"] = 2;
    hash_map["���"] = 3;

    std::string key = "���";
    if (hash_map.find(key) != hash_map.end()) {
        std::cout << "���� ������: " << key << " ��������: " << hash_map[key] << std::endl;
    }
    else {
        std::cout << "���� �� ������: " << key << std::endl;
    }

    // �������� ��������
    hash_map.erase("���");
    return 0;
}