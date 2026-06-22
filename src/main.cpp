#include <iostream>
#include <string>

int main()
{
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (1) // repl
  {
    std::cout << "$ ";

    // handling invalid comments
    std::string command;
    // std::cin >> command; // can't do because it will only print before the whitespace
    std::getline(std::cin, command); // getline() reads everything the user types until they press the Enter key,

    if (command == "exit") // exit command
    {
      break;
    }
    std::cout << command << ": command not found" << std::endl;
  }
}
