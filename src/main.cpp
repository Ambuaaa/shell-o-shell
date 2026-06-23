#include <iostream>
#include <string>

int main()
{
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (1) // REPL
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
    else if (command.substr(0, 5) == "echo ") // echo command
    {
      std::cout << command.substr(5) << std::endl; // start at index and grab every character till the end
    }
    else if (command.substr(0, 9) == "type echo" || command.substr(0, 9) == "type exit" || command.substr(0, 9) == "type type") // type command
    {
      std::cout << command.substr(5) << " " << "is a shell builtin" << std::endl;
    }
    else
    {
      std::cout << command << ": command not found" << std::endl;
    }
  }
}
