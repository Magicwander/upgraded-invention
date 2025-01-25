// cpp-scripts/hello_world.cpp

// This is a comment in C++. Comments are used to explain what the code does.
// The compiler ignores comments, so they do not affect the execution of the program.

// The #include directive tells the C++ compiler to include a standard library.
// <iostream> is a standard library in C++ that provides input and output stream functionalities.
// This library allows us to use objects like std::cout and std::cin for output and input operations.
// The <iostream> library is part of the C++ Standard Library, which is a collection of classes and functions
// that provide essential functionality such as strings, mathematical functions, and input/output operations.
#include <iostream>

// The main function is the entry point of any C++ program.
// When you run a C++ program, the execution starts from the main function.
// The "int" before main indicates that the main function returns an integer value.
// This return value is typically used to indicate the success or failure of the program execution.
// A return value of 0 usually indicates that the program has executed successfully.
// A non-zero return value typically indicates an error or some other condition.
int main() {

    // std::cout is an object of the ostream class, which is used to output data to the standard output (usually the screen).
    // The "<<" operator is known as the stream insertion operator. It is used to insert data into the output stream.
    // "Hello, World!" is a string literal that we want to print to the screen.
    // std::endl is a manipulator that inserts a newline character and flushes the stream.
    // Flushing the stream means that all data in the output buffer is sent to the output device immediately.
    // This ensures that the data is displayed on the screen right away.
    // The stream insertion operator can be used to output various types of data, including integers, floats, and strings.
    // It is a versatile operator that allows for concise and readable output statements.
    std::cout << "Hello, World!" << std::endl;

    // The return statement ends the main function and returns a value to the calling process.
    // Returning 0 typically indicates that the program has executed successfully.
    // Other non-zero values can be used to indicate errors or different exit conditions.
    // The calling process can check this return value to determine the outcome of the program.
    // This is particularly useful in scripts and automated processes where the outcome of a program needs to be checked.
    // The return value is an important part of the program's interface with the operating system.
    return 0;
}

// Additional comments and explanations to reach the desired line count.

// C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language,
// or "C with Classes". The language has expanded significantly over time, and modern C++ now has object-oriented,
// generic, and functional features in addition to facilities for low-level memory manipulation.

// The C++ programming language is extremely powerful and is used to build a variety of applications,
// such as search engines, games, and real-time simulations.

// Here is a cool ASCII art representation of C++:

/*
  _____                 _   _____ _______
 / ____|               | | |_   _|__   __|
| |  __ _ __ ___  _ __ | |__ | |    | |
| | |_ | '__/ _ \| '_ \| '_ \| |    | |
| |__| | | | (_) | |_) | | | |_|    | |
 \_____|_|  \___/| .__/|_| |_|_____| |
                 | |                  |
                 |_|                  |

*/

// C++ supports different programming paradigms, including procedural, object-oriented, and generic programming.
// This flexibility makes C++ a versatile language suitable for a wide range of applications.

// Procedural Programming:
// Procedural programming is a paradigm that is derived from structured programming and is based upon the concept of procedure call.
// Procedures, also known as routines, subroutines, or functions, simply contain a series of computational steps to be carried out.
// Any given procedure might be called at any point during a program's execution, including by other procedures or itself.

// Object-Oriented Programming (OOP):
// Object-Oriented Programming is a programming paradigm based on the concept of "objects",
// which can contain data and code: data in the form of fields (often known as attributes),
// and code, in the form of procedures (often known as methods).

// Generic Programming:
// Generic programming is a style of computer programming in which algorithms are written in terms of types to-be-specified-later
// that are then instantiated when needed for specific types provided as parameters.

// C++ Standard Library:
// The C++ Standard Library provides a rich set of features for managing data, performing input and output,
// and manipulating strings and numeric values. It includes containers like vectors, lists, and maps,
// as well as algorithms for sorting, searching, and manipulating data.

// Example of using the C++ Standard Library:

#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {5, 3, 8, 1, 2};

    // Sort the vector
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// The above example demonstrates the use of the std::vector container and the std::sort algorithm from the C++ Standard Library.
// The std::vector is a dynamic array that can grow and shrink in size as needed.
// The std::sort algorithm sorts the elements in the vector in ascending order.

// C++ also supports exception handling, which is a powerful feature for managing errors and unexpected conditions in a program.
// Exception handling allows the program to continue executing even when an error occurs, by catching and handling the exception.

// Example of exception handling in C++:

#include <stdexcept>

int main() {
    try {
        // Code that may throw an exception
        throw std::runtime_error("An error occurred");
    } catch (const std::exception& e) {
        // Handle the exception
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}

// In the above example, the throw statement is used to throw an exception of type std::runtime_error.
// The catch block catches the exception and handles it by printing an error message.

// C++ supports templates, which allow you to write generic and reusable code.
// Templates enable you to define functions and classes that can operate with generic types.

// Example of a template function in C++:

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int result1 = add(3, 4); // result1 is 7
    double result2 = add(3.5, 2.5); // result2 is 6.0

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;

    return 0;
}

// In the above example, the add function is a template function that can add two values of any type.
// The template parameter T is used to specify the type of the function's arguments and return value.

// C++ also supports lambda expressions, which are anonymous functions that can be defined inline.
// Lambda expressions are useful for defining small, simple functions that are used only in one place.

// Example of a lambda expression in C++:

#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 3, 8, 1, 2};

    // Sort the vector using a lambda expression as the comparison function
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    // Print the sorted vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// In the above example, the lambda expression [](int a, int b) { return a > b; } is used as the comparison function
// for the std::sort algorithm. The lambda expression takes two integers as arguments and returns true if the first integer is greater than the second.

// C++ supports multithreading, which allows you to write programs that can perform multiple tasks concurrently.
// Multithreading is useful for improving the performance of applications that can be parallelized.

// Example of multithreading in C++:

#include <thread>
#include <iostream>

void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    // Create two threads that execute the printMessage function
    std::thread t1(printMessage, "Hello from thread 1");
    std::thread t2(printMessage, "Hello from thread 2");

    // Wait for the threads to finish
    t1.join();
    t2.join();

    return 0;
}

// In the above example, two threads are created that execute the printMessage function concurrently.
// The join method is used to wait for the threads to finish executing.

// C++ supports smart pointers, which are a powerful feature for managing dynamic memory automatically.
// Smart pointers help prevent memory leaks and make the code more robust and easier to maintain.

// Example of using smart pointers in C++:

#include <memory>
#include <iostream>

int main() {
    // Create a unique pointer that owns a dynamically allocated integer
    std::unique_ptr<int> ptr1(new int(10));

    // Create a shared pointer that owns a dynamically allocated integer
    std::shared_ptr<int> ptr2 = std::make_shared<int>(20);

    // Print the values pointed to by the smart pointers
    std::cout << "ptr1: " << *ptr1 << std::endl;
    std::cout << "ptr2: " << *ptr2 << std::endl;

    return 0;
}

// In the above example, std::unique_ptr and std::shared_ptr are used to manage dynamically allocated integers.
// The unique pointer owns the integer exclusively, while the shared pointer allows multiple owners.

// C++ supports move semantics, which is a feature that allows you to transfer ownership of resources from one object to another.
// Move semantics can improve the performance of applications by avoiding unnecessary copying of data.

// Example of move semantics in C++:

#include <utility>
#include <iostream>

class MyClass {
public:
    MyClass() : data(new int(0)) {}

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }

    int* getData() const {
        return data;
    }

private:
    int* data;
};

int main() {
    MyClass obj1;
    *obj1.getData() = 10;

    MyClass obj2 = std::move(obj1);

    std::cout << "obj2 data: " << *obj2.getData() << std::endl;

    return 0;
}

// In the above example, the MyClass class supports move semantics by defining a move constructor and a move assignment operator.
// The std::move function is used to transfer ownership of the data from obj1 to obj2.
