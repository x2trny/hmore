// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const char dt[] = "28.06.2023 22:28";
void myAsus(char *msg)
{
    printf("%-20s- %s\r\n", __FUNCTION__, msg);
}
void myMonster(char *msg)
{
    printf("%-20s- %s\r\n",__FUNCTION__,msg);
}
int main()
{
    std::cout << "Git merge testi 24.06.23 Kurban Bayram tatili basladi.!\n";
    char msg[]  = "deneme mesaj-1";
    char msg2[] = "deneme mesaj-2";
    myAsus(msg);
    myMonster(msg2);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
