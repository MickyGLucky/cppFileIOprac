#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream file_to_write;
	std::string file_name ;
    std::string Msg;
	std::cout << "Enter the name of the file you want to write to: ";
    std::cin >> file_name;
    file_to_write.open(file_name, std::ios::out);
    if (file_to_write.is_open())
    {
		file_to_write << "Hello, I'm writing to a file!\n";
        file_to_write.close();
		Msg = "File written successfully";

    }
    else
    {
        Msg = "Error opening file";

    }
	std::cout << Msg << std::endl;
}
/*The code above will create a file with the name you provide and write the message ¡°Hello, I¡¯m writing to a file!¡± to it.
The code will then print a message to the console to let you know if the file was written successfully or if there was an error.
Reading from a file
To read from a file, you can use the  std::ifstream  class.
The code below reads from a file and prints the contents to the console.*/

