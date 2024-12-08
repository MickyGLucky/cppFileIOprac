# cppFileIOprac
A repository for practice how to use the fstream

## Key syntax
- Initialize an instance

`std::fstream file_object`

- Open a file_object

`file_object.open(fileName,std::ios::in)` for write (input), `file_object.open(fileName,std::ios::in)` for read (output)

`.open()` The `.open()` function in C++ is used to open a file with a specified mode (e.g., read, write) using an `std::fstream` object.
`.is_open()`, `.fail()`, `.good()` to return a boolean to decice a file is open correctly.

- Read file method.

```cpp
if (file_object.is_open())
{
    while (getline(file_to_read,line))
    {
		std::cout << line << std::endl;
    }
}
else
{
	std::cout << "Errors" << std::endl;
}

```

`.getline()` can be used to read data in the file one line at a time

**Read method sample code snippet**
```cpp
if(!file_project)
{
    std::ceer << "error"<< std::endl;
    return 1;
}
while(!file_project.eof())
{
    std::getline(file_project,line);
    std::cout << line << std::endl;
}
file_project.close();

```

`.eof()`- returns true if the end of the file has been reached;
`.close()` - close the file

That's pretty much of this section.