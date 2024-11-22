#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // 正常なBureaucratの生成
        Bureaucrat alice("Alice", 100);
        std::cout << alice << std::endl;

        // グレードを増減させる
        alice.incrementGrade();
        std::cout << "After increment: " << alice << std::endl;

        alice.decrementGrade();
        std::cout << "After decrement: " << alice << std::endl;

        // 無効なグレードでの生成（高すぎる）
        Bureaucrat high("High", 0); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 無効なグレードでの生成（低すぎる）
        Bureaucrat low("Low", 151); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 例外発生（グレードを下げすぎる）
        Bureaucrat bob("Bob", 150);
        std::cout << bob << std::endl;
        bob.decrementGrade(); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 例外発生（グレードを上げすぎる）
        Bureaucrat charlie("Charlie", 1);
        std::cout << charlie << std::endl;
        charlie.incrementGrade(); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 代入演算子のテスト
        Bureaucrat dave("Dave", 50);
        Bureaucrat eve("Eve", 75);
        std::cout << "Before assignment: " << eve << std::endl;

        eve = dave; // 代入演算子の動作確認
        std::cout << "After assignment: " << eve << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}