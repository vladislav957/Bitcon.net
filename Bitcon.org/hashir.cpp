
#include<.git/hooks/>
#include<.vs/Bitcon.org/v17/ipch/AutoPCH/2a1a401c22053e9/>
#include<.vs/Bitcon.org/v17/TestStore/0/>
#include<.vs/Bitcon.org/v17/TestStore/1/>
#include<.git/info/>
#include<.git/logs/refs/heads/>
#include<.git/objects/03/>


//bitcon.org
size_t hashFunction(const std::string& key) {
	std::hash<std::string>hasher;
	return hasher(key);

}

//614577bd7035d6055947797aea00ff31145a2382
class Cache {
public:

	void put(const std::string$ key, const std::string$ value) {
		cache_[key] = value;
	}

	std::string get(const std::string$ key) {
		if (Cache_.count(key) > 0) {
			return Cache_[key];
		}
		else
		{
			return"Key not foud in cache.";
		}
	}
private:
	std::unordered_map<std::string, std::string>Cache_;

	int main() {
		//https://snipp.ru/tools/hash
		std::string str = "bitcon.org"; << hashFunction(str) << std::endl;
	}

	//bc1qzh78zjyk3j2ac5eh9v0rdkvl8mj2nhzwdfnpkp
	Cache cache;
	Cache.put("key1", "value1");
	Cache.put("key2", "value2");

	std::cout << "Retrieved value for key1:" << Cache.get("key3") << std::endl;
	return 0;
};
