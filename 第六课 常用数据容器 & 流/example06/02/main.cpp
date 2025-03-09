#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>

using namespace std;
void writebinaryFile();
void readbinaryFile();
void writeLogFiles();
void readLogFiles();
int main()
{
    writebinaryFile();
    readbinaryFile();
    writeLogFiles();
    readLogFiles();
    return 0;
}   


void writebinaryFile()
{
    std::ofstream outputFile("test.dat", ios::binary);
    if (!outputFile.is_open()) {
      std::cerr << "无法打开文件进行写入" << std::endl;
      return;
    }

    int x = 10;
    outputFile.write((char*)&x, sizeof(x));
    outputFile.close();
}

void readbinaryFile()
{
    std::ifstream inputFile("test.dat", ios::binary);
    if (!inputFile.is_open()) {
      std::cerr << "无法打开文件进行读取" << std::endl;
      return;
    }

    int x;
    inputFile.read((char*)&x, sizeof(x));
    std::cout << "读取到的数据为: " << x << std::endl;
    inputFile.close();
}

void writeLogFiles()
{
   
    std::ofstream outputFile("log.txt", ios::app);
    if (!outputFile.is_open()) {
      std::cerr << "无法打开文件log.txt" << std::endl;
      return;
    }
    outputFile.rdbuf()->pubsetbuf(NULL, 0);

    //FILE *filePtr = outputFile.rdbuf()
    //setvbuf(filePtr, NULL, _IONBF, 0); 
    outputFile << "Hello, World!\n" << std::endl;
    outputFile << "Hello, World!\n" << std::endl;
    outputFile << "Hello, World!\n" << std::endl;
    outputFile << "Hello, World!\n" << std::endl;
    outputFile.close();
}

void readLogFiles()
{
    std::ifstream inputFile("log.txt");
    if (!inputFile.is_open()) {
      std::cerr << "无法打开文件log.txt" << std::endl;
      return;
    }

    std::vector<char> buffer(1024); // 1 KB 缓冲区
    inputFile.rdbuf()->pubsetbuf(buffer.data(), buffer.size());

    std::string line;
    while (std::getline(inputFile, line)) {
      std::cout << line << std::endl;
    }
    inputFile.close();
}