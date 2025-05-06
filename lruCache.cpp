#include <iostream>
#include <map>

class LRUCache {

    struct Cache{
        int key;
        int data;
        bool empty;
    };

    int keyID = 1;
    std::map<int, Cache> idToCache;
 
    public: void get(int _key, int _value){
        if (_key > keyID){  
            std::cout << "Invalid Key" << "\n";
            exit(1);
        }
        
    };

    public: void put(int _key, int _value){

    };

    public: void remove(int _key){

    };
};