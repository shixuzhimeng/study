//万能头文件
//#include <bits/stdc++.h>

//对于unordered
//一个无序容器
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> age_map;
    
    // 插入键值对
    age_map["Alice"] = 25;
    age_map["Bob"] = 30;
    age_map["Charlie"] = 35;

    // 查找值
    std::cout << "Alice's age: " << age_map["Alice"] << std::endl;

    // 遍历 unordered_map
    for (const auto& pair : age_map) {
        std::cout << pair.first << " is " << pair.second << " years old" << std::endl;
    }

    return 0;
}
