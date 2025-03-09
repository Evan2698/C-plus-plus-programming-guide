#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void print_example(){

    std::cout<<std::setiosflags(ios::left|ios::showpoint);  // 设左对齐，以一般实数方式显示
    std::cout.precision(7);       // 设置除小数点外有7位有效数字 
    std::cout<<123.456789<<endl;
    std::cout.width(10);          // 设置显示域宽10 
    std::cout.fill('*');          // 在显示区域空白处用*填充
    std::cout<<resetiosflags(ios::left);  // 清除状态左对齐
    std::cout<<setiosflags(ios::right);   // 设置右对齐
    std::cout<<123.456789<<endl;
    std::cout<<setiosflags(ios::left|ios::fixed);    // 设左对齐，以固定小数位显示
    std::cout.precision(3);    // 设置实数显示三位小数
    std::cout<<999.123456<<endl; 
    std::cout<<resetiosflags(ios::left|ios::fixed);  //清除状态左对齐和定点格式
    std::cout<<setiosflags(ios::left|ios::scientific);    //设置左对齐，以科学技术法显示 
    std::cout.precision(3);   //设置保留三位小数
    std::cout<<123.45678<<endl;
    }

    void cin_example(){
        int a;
        float b;
        char str[21];
        cin>>a>>b>>str;
        cout<<a<<","<<b<<","<<str<<endl;

        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::string line;
        std::getline(std::cin, line);
        std::cout << "line1: " << line << std::endl;

        std::cin.getline(str, 20);
        std::cout << "line2: " << str << std::endl;  
    
    }
int main() {
    print_example();
    cin_example();

    return 0;
}