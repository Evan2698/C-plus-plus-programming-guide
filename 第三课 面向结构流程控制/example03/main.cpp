#include <iostream>
#include <cmath>
#include <cstdlib> // 包含 srand 和 rand 函数
#include <ctime>    // 包含 time 函数

// 实现顺序语句
void sequence()
{
    // 声明语句
    // 变量声明
    int a = 0, b = 0, c = 0;
    double d = 10.0;
    // 常量声明
    const double pi = 3.14159;


    // 函数声明
    void sequence();

    // 类型声明
    typedef int feet;
    enum color
    {
        red,
        green,
        blue
    };
    extern int x;
    //------------------------
    // 表达式语句
    // 赋值语句
    a = b + c;
    // 复合赋值语句
    a += b;  // a = a + b;
    // 递增递减语句
    a++; // a = a + 1
    // 函数调用语句
    b = std::abs(-5);
    //------------------------

    // 输入输出语句
    std::cout << "请输入一个整数" << std::endl;  // 
    std::cin >> a;
    std::cout << "你输入的整数是：" << a << std::endl;
}

// 介绍输入输出语句
void input_and_output()
{
    int a = 0;
    std::cout << "请输入一个整数：" << std::endl;
    std::cin >> a;
    std::cout << "你输入的整数是：" << a << std::endl;

    std::string name;
    std::cout << "请输入你的名字：" << std::endl;
    std::cin >> name;
    std::cout << "你好，" << name << std::endl;

    double radius = 0.0;
    const double pi = 3.14159;
    std::cout << "请输入圆的半径：" << std::endl;
    std::cin >> radius;
    std::cout << "圆的周长是：" << 2 * pi * radius << std::endl;
}

// 介绍选择语句
void select_statement()
{
    int score = 62;
    if (score >= 90)
    {
        std::cout << "成绩为A" << std::endl;
    }
    else if (score >= 80)
    {
        std::cout << "成绩为B" << std::endl;
    }
    else if (score >= 70)
    {
        std::cout << "成绩为C" << std::endl;
    }
    else if (score >= 60)
    {
        std::cout << "成绩为D" << std::endl;
    }
    else
    {
        std::cout << "成绩为E" << std::endl;
    }
}

// 介绍选择语句
void switch_statement()
{   
    int score = 62;
    switch (score / 10)
    {
    case 10:
    case 9:
        std::cout << "成绩为A" << std::endl;
        break;
    case 8:
        std::cout << "成绩为B" << std::endl;
        break;
    case 7:
        std::cout << "成绩为C" << std::endl;
        break;
    case 6:
        std::cout << "成绩为D" << std::endl;
        break;
    default:
        std::cout << "成绩为E" << std::endl;
        break;
    }
}

// 介绍循环语句
void loop_statement()
{
    std::cout << "while 循环：" << std::endl;
    int i = 0;
    while (i < 10)
    {
        if (i == 6)
        {
            i++;
            break;
        } 
        std::cout << i << std::endl;
        i++;
      
    }

    std::cout << "-----------------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
    i = 0;

    do
    {
        std::cout << i << std::endl;
        i++;
    } while (false);

    std::cout << "while 循环：END" << std::endl;

    //   bool isOk = true;

    //  do {
    //     // do something1
    //     if (检测条件1)
    //     {
    //         isOk = false;
    //         break;
    //     }

    //       // do something2
    //       if (检测条件2)
    //       {
    //           isOk = false;
    //           break;
    //       }

    //                // do something3
    //                if (检测条件3)
    //                {
    //                    isOk = false;
    //                    break;
    //                }


    //  }while(false);

  
    //  if (!isOk) {
    //      // 错误处理， 释放资源，
    //  }



}

// 模拟猜数字游戏
void duplicate_demo()
{
    // 初始化随机数生成器
    std::srand(static_cast<unsigned int>(std::time(0)));
 
    // 设置猜数字游戏的范围
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
 
    // 设定游戏尝试次数（外层循环的计数器）
    const int NUMBER_OF_TRIES = 3;
  for (int tryCount = 1; tryCount <= NUMBER_OF_TRIES; ++tryCount) {
        // 生成一个随机数作为目标数字
        int targetNumber = std::rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
 
        std::cout << "游戏尝试次数: " << tryCount << "\n";
        std::cout << "我已经想好了一个 " << MIN_NUMBER << " 到 " << MAX_NUMBER << " 之间的数字。\n";
 
        bool hasGuessedCorrectly = false;
 
        // 使用一个无限循环来让用户不断猜测，直到猜中或选择退出
        while (true) {
            int guess;
            std::cout << "请输入你的猜测: ";
            std::cin >> guess;
 
            // 检查输入是否合法（在这个简单示例中，我们假设所有输入都是整数）
            if (guess < MIN_NUMBER || guess > MAX_NUMBER) {
                std::cout << "无效输入！请输入 " << MIN_NUMBER << " 到 " << MAX_NUMBER << " 之间的数字。\n";
                continue; // 跳过当前循环的剩余部分，要求用户重新输入
            } 
            // 检查猜测是否正确
            if (guess < targetNumber) {
                std::cout << "太小了！\n";
            } else if (guess > targetNumber) {
                std::cout << "太大了！\n";
            } else {
                std::cout << "恭喜你，猜对了！\n";
                hasGuessedCorrectly = true;
                //break; // 跳出内层循环，因为用户已经猜中了
            }
 
            // 可选：给用户一个退出游戏的机会（在这个示例中，我们始终继续游戏）
            std::cout << "要继续猜测吗？(y/n): ";
            char choice;
            std::cin >> choice;
            if (choice == 'n' || choice == 'N') {
                break; // 如果用户选择退出，则跳出内层循环（但在这个示例中，外层循环仍然会继续）
            }
 
            // 注意：在这个简单示例中，我们没有实现真正的退出逻辑，因为外层循环会重新开始新的游戏尝试。
            // 如果想要实现真正的退出，可以添加一个额外的标志来跳出外层循环。
        }
 
        // 如果用户在这一次尝试中猜中了，我们可以选择结束游戏（在这个示例中，我们总是继续到下一次尝试）
        if (hasGuessedCorrectly) {
            break; // 跳出外层循环，结束游戏（但在这个示例中，我们总是继续到 NUMBER_OF_TRIES 次尝试）
        }
 
        // 注意：在这个示例中，我们总是继续到下一次尝试，即使用户已经猜中了。
        // 这样做是为了展示嵌套循环和 break/continue 的使用，而不是实现一个实际的退出逻辑。
    }
 
    std::cout << "游戏结束！谢谢你参与。\n";
}

int main()
{
    //sequence();
    //input_and_output();
    //select_statement();
    //switch_statement();
    loop_statement();
    //duplicate_demo();
    return 0;
}
