#pragma once
#include <iostream>

//chef's kiss
std::string bookTitle[9] =          {"Core", "OOP", "Design", 
                                    "STL", "Concurrency & Multithreading", "File & I/O", 
                                    "Memory and Optimization", "Low-Level Programming","Templates and Meta-programming"};

std::string bookChapter[27] =       {"Rich Type System", "Support for Multiple Paradigms", "Powerful Memory Management",                                   //Core
                                    "Encapsulation", "Inheritance", "Polymorphism",                                                                        //OOP
                                    "Design Patterns", "RAII", "Separation of Concerns",                                                                   //Design
                                    "Generic Programming", "Containers and Their Categories", "Algorithms and Iterators",                                  //STL
                                    "Thread Management and Creation", "Synchronization Mechanisms", "Concurrency Utils and Atom Operations",               //Concurrency & Multithreading
                                    "Stream-Based I/O", "File Opening Modes", "Exception Handling and Error Checking",                                     //File & I/O
                                    "Manual Memory Management", "Smart Pointers", "Optimization Techniques",                                               //Memory and Optimization
                                    "Direct Memory Access", "Memory Management with new and delete", "Inline Assembly",                                    //Low-Level Programming  
                                    "Template Basics", "Template Specialization", "Template Metaprogramming"};                                             //Templates and Meta-programming

std::string bookContentFacts[27] = {"C++ offers a comprehensive type system that includes both built-in and user-defined types!",                                                                                    //CORE: Rich Type System
                                    "C++ supports multiple programming paradigms, making it a versatile language!",                                                                                                  //CORE: Support for Multiple Paradigms
                                    "C++ provides several mechanisms for managing memory, which gives you control but also requires careful handling!",                                                              //CORE: Powerful Memory Management
                                    "Encapsulation is the practice of bundling the data and methods that operate on the data into a single unit, typically a class!",                                                //OOP: Encapulation
                                    "Inheritance is a mechanism where a new class (derived class) is based on an existing class (base class)!",                                                                      //OOP: Inheritance
                                    "Polymorphism allows objects of different classes to be treated as objects of a common base class, typically through a common interface!",                                       //OOP: Polymorphism
                                    "Design patterns are standard solutions to common software design problems!",                                                                                                    //Design: Design Patterns
                                    "RAII is a programming idiom where resources (e.g., memory, file handles) are tied to the lifetime of objects!",                                                                 //Design: RAII
                                    "Separation of concerns is a design principle that aims to reduce complexity by dividing a program into distinct sections, each addressing a separate aspect of functionality!", //Design: Seperation of Concerns
                                    "The STL is based on the principle of generic programming!",                                                                                                                     //STL: Generic Programming
                                    "STL provides a variety of container types for storing collections of objects!",                                                                                                 //STL: Containers and Their Categories
                                    "STL provides a rich set of algorithms that operate on containers through iterators!",                                                                                           //STL: Algorithms and Iterators
                                    "C++11 introduced a standardized way to create and manage threads through the <thread> library!",                                                                                //Concurrency & Multithreading: Thread Management and Creation 
                                    "Synchronization mechanisms are used to coordinate access to shared resources among multiple threads, preventing data races and ensuring thread safety!",                        //Concurrency & Multithreading: Synchronization Mechanisms
                                    "The C++ Standard Library provides various utilities for working with concurrent programming and atomic operations!",                                                            //Concurrency & Multithreading: Concurrency Utils and Atom Operations
                                    "C++ uses a stream-based approach for I/O operations, where data is read from or written to streams!",                                                                           //File & I/O: Stream-Based I/O
                                    "When opening files, you can specify various modes to control how the file is accessed!",                                                                                        //File & I/O: File Opening Modes
                                    "C++ provides mechanisms to handle I/O errors and exceptions!",                                                                                                                  //File & I/O: Exception Handling and Error Checking
                                    "C++ allows developers to manually allocate and deallocate memory using new and delete operators!",                                                                              //Memory and Optimization: Manual Memory Management
                                    "C++11 introduced smart pointers to simplify memory management and prevent common errors such as memory leaks and dangling pointers!",                                           //Memory and Optimization: Smart Pointers
                                    "C++ provides various techniques for optimizing performance, including compiler optimizations, efficient use of data structures, and algorithmic improvements!",                 //Memory and Optimization: Optimization Techniques
                                    "C++ allows direct access to memory through pointers, enabling low-level operations like pointer arithmetic and direct manipulation of memory addresses!",                       //Low-Level Programming: Direct Memory Access
                                    "C++ provides direct control over dynamic memory allocation and deallocation using the new and delete operators!",                                                               //Low-Level Programming: Memory Management with new and delete
                                    "C++ allows embedding assembly language code directly within C++ programs!",                                                                                                     //Low-Level Programming: Inline Assembly
                                    "C++ templates allow you to write generic and reusable code by parameterizing types or values!",                                                                                 //Templates and Meta-programming: Template Basics
                                    "Template specialization allows you to define specific implementations of a template for particular types or values!",                                                           //Templates and Meta-programming: Template Specialization
                                    "Template metaprogramming uses C++ templates to perform computations at compile-time rather than runtime!"};                                                                     //Templates and Meta-programming: Template Metaprogramming