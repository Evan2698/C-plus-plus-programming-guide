#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>


void vector_example();
void deque_example();
void list_example();
void set_example();
void map_example();



int main() {
    //vector_example();
    //deque_example();
    //list_example();
    //set_example();
    map_example();
}

void vector_example() {
    // Create a vector of integers
    std::vector<int> vec;
    typedef std::vector<int>::iterator iter;

    // Add elements to the vector
    vec.push_back(10);
    vec.emplace_back(20);
    vec.emplace_back(30);
    vec.emplace_back(20);

    for (iter it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "element in vector:" <<  *it << std::endl;
    }
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "element in vector:" <<  vec[i] << std::endl;
        vec.at(i);
        //vec[i] = 9;
    }

    if (vec[0] == vec.at(0)) {
        std::cout << "vec[0] and vec.at(0) are the same" << std::endl;
    }

    // Insert element at a specific position
//    vec.insert(vec.begin() + 1, 15);
//    std::cout << "Element at index 1 after insert: " << vec[1] << std::endl;

   for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (*it == 20) {
           it =  vec.insert(it, 15);     
           ++it;
        }
    }
    for (iter it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "element in vector 1:" <<  *it << std::endl;
    }
    


    // Erase element at a specific position
    vec.erase(vec.begin() + 1);
    std::cout << "Element at index 1 after erase: " << vec[1] << std::endl;

    // Clear all elements
    vec.clear();
    std::cout << "Size of vector after clear: " << vec.size() << std::endl;

    // 经常还有这样的用法
    std::vector<char> vec2(20,0);
    //vec2.reserve(20);
    //------------------------------------
    memcpy(&vec2[0], "hello world", 11);
 
    //------------------------------------------
    std::cout << "vec2[0] is " <<(char*) &vec2[0] << std::endl;
    for (auto it = vec2.begin(); it != vec2.end(); ++it) {
        std::cout << "element in vector:" <<  *it << std::endl;
    }

    // iterator will be invalid after erase and insert
    std::vector<int> vec3 = {1, 2, 3, 4, 3, 5, 7, 3, 4};
    for (auto it = vec3.begin(); it != vec3.end();) {
        if (*it == 3) {
            it = vec3.erase(it); // why it is not ++it
        } else {
            ++it;
        }
    }
    for (auto it = vec3.begin(); it != vec3.end(); ++it) {
            std::cout << "element in vector3:" <<  *it << std::endl;
    }

    for (auto it = vec3.begin(); it != vec3.end();) {
        if (*it == 4) {
            it = vec3.insert(it, 6);
            it += 2;   // why???
        } else {
            ++it;
        }
    }

    for (auto it = vec3.begin(); it != vec3.end(); ++it) {
            std::cout << "element in vector3-insert:" <<  *it << std::endl;
    }    
}

void deque_example(){
    std::deque<int> deq;
    deq.push_back(10);
    deq.push_front(20);
    deq.push_back(30);
    for (auto it = deq.begin(); it != deq.end(); ++it) {
        std::cout << "element in deque:" <<  *it << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;

    std::queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    while (que.size() > 0)     
    {   
        auto& item = que.front();
        std::cout << "element in queue:" <<  item << std::endl;
        que.pop();        
    }
    
    std::cout << "rest: " <<  que.size() << std::endl;
    
}

bool is_delete(int x) {
    return x == 20;
}

void list_example() {
    std::list<int> list;
    list.emplace_back(10);
    list.emplace_back(20);
    list.emplace_back(30);
    //list.remove_if([](int x) { return x == 20; });   // [capture-list] (parameters) mutable -> return-type { statement }
    list.remove_if(is_delete);
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << "element in list:" <<  *it << std::endl;
    }  

    std::cout << "-----------------------------" << std::endl;
    list.push_back(2);
    list.push_back(7);
    list.sort();
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << "element in list:" <<  *it << std::endl;
    }  
    std::cout << "-----------------------------" << std::endl;  
    std::list<int> list2;
    list2.push_back(1);
    list2.push_back(3);
    //list.merge(list2);
    auto it = list.begin();
    list.splice(it, list2);
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << "element in list2:" <<  *it << std::endl;
    }  
    std::cout << "-----------------------------" << std::endl; 
    // find 
    it = std::find(list.begin(), list.end(), 2);
    if (it != list.end()) {
        std::cout << "find element in list:" <<  *it << std::endl;
    }

}

void set_example() {
    std::set<int> set;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        set.emplace(arr[i]);
    }
    for (auto it = set.begin(); it != set.end(); ++it) {
        std::cout << "element in set:" <<  *it << std::endl;
    }
}

void map_example() {
    std::map<std::string, int> map;
    map["a"] = 1;
    map.insert(std::pair<std::string, int>("b", 2));
    map.emplace("c", 3);
    map.emplace("z", 5);
    map.emplace("c", 4); // with emplace, it will not update the value
    map.insert(std::make_pair("c", 4)); // with insert, it will not update the value
    //map["c"] = 4;  // with [], it will update the value
    for (auto it = map.begin(); it != map.end(); ++it) {
        std::cout << "element in map:" <<  it->first << " " << it->second << std::endl;
    }

    auto it = map.find("a");
    if (it != map.end()) {
        map.erase(it); // in loop, use it++
    }
    for (auto it = map.begin(); it != map.end(); ++it) {
        std::cout << "element in map2:" <<  it->first << " " << it->second << std::endl;
    }

}