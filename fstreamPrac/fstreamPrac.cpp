#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::fstream file_to_write;
	std::string file_name ;
    std::string Msg;
	std::cout << "Enter the name of the file you want to write to: ";
    std::cin >> file_name;
    /*The code above will create a file with the name you provide and write the message ¡°Hello, I¡¯m writing to a file!¡± to it.
The code will then print a message to the console to let you know if the file was written successfully or if there was an error.
Reading from a file
To read from a file, you can use the  std::ifstream  class.
The code below reads from a file and prints the contents to the console.*/
    std::cout << "Writing to file...begins" << std::endl;
    file_to_write.open(file_name, std::ios::out);
    if (file_to_write.is_open())
    {
		file_to_write << "Hello, I'm writing to a file!\n";
        file_to_write << "This is the 2nd line!\n";
        file_to_write << "This is the 3rd\n";
        file_to_write.close();
		Msg = "File written successfully";

    }
    else
    {
        Msg = "Error opening file";

    }
	std::cout << std::setfill('<') << std::setw(25) << "<" << std::endl;
	std::cout << Msg << std::endl;
    std::cout << std::setfill('-') << std::setw(50) << "-" << std::endl;
    /*Retrive the input by reading the file */
	std::fstream file_to_read;
	std::string line;
	std::cout << "Reading from file...begins" << std::endl;
    file_to_read.open(file_name, std::ios::in);
    /*
	if(file_to_read.is_open()) || if(!file_to_read.fail()) || if(file_to_read) || if (file_to_read.good())

	eof() - returns true if the end of the file has been reached
	getline(file_to_read,line) - reads a line from the file and stores it in the variable line
    */
    if (file_to_read.is_open())
    {
        std::cout << std::setfill('>') << std::setw(25) << ">" << std::endl;
        while (getline(file_to_read,line))
        {
			std::cout << line << std::endl;
        }
		std::cout << "File read successfully" << std::endl;
    }
	else
	{
		std::cout << "Error opening file" << std::endl;
	}
	file_to_read.close();
	return 0;

}

