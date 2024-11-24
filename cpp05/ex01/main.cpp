#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        // 正常なBureaucratとFormの生成
        Bureaucrat alice("Alice", 50);
        Form taxForm("Tax Form", 45, 30);

        // 初期状態の表示
        std::cout << taxForm << std::endl;

        // Aliceが署名を試みる（失敗するはず）
        alice.signForm(taxForm);

        // 署名後の状態
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 署名に十分な権限を持つBureaucratを生成
        Bureaucrat bob("Bob", 40);
        Form contract("Contract Form", 50, 20);

        std::cout << contract << std::endl;

        // Bobが署名を試みる（成功する）
        bob.signForm(contract);

        // 署名後の状態
        std::cout << contract << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 無効なグレードでのForm生成（例外が発生する）
        Form invalidForm("Invalid Form", 0, 150); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        // 無効なグレードでのForm生成（例外が発生する）
        Form invalidForm("Invalid Form", 151, 150); // 例外発生
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}