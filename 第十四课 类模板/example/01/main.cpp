#include <iostream>
#include <stdexcept>
#include <memory>
#include <vector>


// 类模板：一个通用的"盒子"
template<typename T>
class Box {
private:
    T content;
public:
    void set(T value) { content = value; }
    T get() { return content; }
};

template <typename T>
class SimpleVector {
private:
    T* data_;
    size_t size_;
    size_t capacity_;

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data_[i];
        }
        delete[] data_;
        data_ = newData;
        capacity_ = newCapacity;
    }

    void resize2(size_t newCapacity){
        size_t bytes = sizeof(T) * newCapacity;
        if (data_ == nullptr) {
            data_ = (T*)malloc(bytes);
        } else {
            T * newdata = (T*)realloc(data_, bytes);
            if (newdata == nullptr){
                // 扩容失败
                throw std::string("out of memory");
            } else {
                data_ = newdata;
            }        
        }
        this->capacity_ = newCapacity;
    }

    void release_memory(){
        delete [] data_;
    }

    void release_memory2(){
        free(data_);
    }

public:
    SimpleVector() : data_(nullptr), size_(0), capacity_(0) {}

    virtual ~SimpleVector() {
        release_memory2();
    }

    void push_back(const T& value) {
        if (size_ == capacity_) {
            // 扩容逻辑
            resize2(capacity_ == 0 ? 1 : capacity_ * 2);
        }
        data_[size_++] = value;
    }

    void pop_back() {
        if (size_ == 0) {
            throw std::out_of_range("Vector is empty");
        }
        --size_;
    }

    T& operator[](size_t index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    const T& operator[](size_t index) const {
        if (index >= size_) {
            throw std::out_of_range("Index out of range");
        }
        return data_[index];
    }

    size_t size() const {
        return size_;
    }

    size_t capacity() const {
        return capacity_;
    }
};


// 类模板偏特化：处理指针类型的 Box
template<typename T>
class Box<T*> {
private:
    T* content;
public:
    Box() : content(nullptr) {}
    void set(T* value) { content = value; }
    T* get() { return content; }
    void display() {
        if (content) {
            std::cout << "Pointer points to value: " << *content << std::endl;
        } else {
            std::cout << "Pointer is null" << std::endl;
        }
    }
};

// 类模板全特化：处理 int 类型的 Box
template<>
class Box<int> {
private:
    int content;
public:
    void set(int value) { content = value; }
    int get() { return content; }
    void display() {
        std::cout << "Box contains integer: " << content << std::endl;
    }
};

int main() {


    Box<double> box;
    box.set(5);


    std::cout << "content of box is: " << box.get() << std::endl;


    SimpleVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.pop_back();
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec[1] = 100;

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;
    double gg = 1.0;
    Box<double*> f;
    f.set(&gg);
    f.display();

    Box<int> inG;
    inG.set(88);
    inG.display();
    

    return 0;
}