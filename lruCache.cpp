#include <iostream>
#include <map>

class LRUCache {

    public: struct Cache{
        int ID;
        int data;
        bool used;
    };

    int cacheID;
    std::map<int, Cache> idToCache;

    LRUCache(){
        cacheID = 1;
    }
 
    public: void get(int _key){
        if (_key > cacheID){  
            std::cout << "Invalid Key" << "\n";
            exit(1);
        }

        Cache result = idToCache.at(_key);
        std::cout << "ID: " << result.ID << " Data: " << result.data << "\n";
    };

    public: void put(int _mapKey, int _value){
       if (idToCache.count(_mapKey) == 0) {
        Cache newCache;
        newCache.ID = cacheID;
        newCache.data = _value;
        newCache.used = true;

        idToCache.insert(std::make_pair(_mapKey, newCache));
        
        cacheID++;
       } else {
            idToCache[_mapKey].data = _value;
       }
    };

    public: void remove(int _key){
        idToCache.erase(_key);
    };
};


int main(){

    LRUCache newCache;

    newCache.put(1, 5);
    newCache.get(1);
    newCache.put(1, 8);
    newCache.get(1);

    return 0;
}