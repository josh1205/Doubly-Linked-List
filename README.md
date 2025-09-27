# Doubly Circular Linked List (DCL)

A comprehensive C++ implementation of a doubly circular linked list with full CRUD operations and memory management.

## Overview

This project implements a doubly circular linked list data structure where nodes are connected bidirectionally in a circular fashion. The implementation includes insertion, deletion, searching, and proper memory management through the Rule of Three.

## Features

- **Bidirectional Circular Structure**: Each node links to both next and previous nodes in a circle
- **Flexible Insertion**: Add elements at front or back
- **Key-Based Removal**: Delete specific elements by value
- **Search Functionality**: Locate nodes by key value
- **Deep Copy Support**: Proper copy constructor implementation
- **Memory Safety**: Destructor ensures no memory leaks

## File Structure

```
├── DLCirList.hpp     # Header with class declarations
├── DLCirList.cpp     # Implementation of all methods
└── main.cpp          # Test driver program
```

## Class Architecture

### Node Structure
```cpp
class node {
    List_type value;  // typedef int
    node *next;
    node *prev;
};
```

### DCL Class Methods

**Constructors & Destructor**
- `DCL()` - Initializes empty list
- `DCL(const DCL& org)` - Deep copy constructor
- `~DCL()` - Deallocates all nodes

**Core Operations**
- `void insert_back(const List_type& item)` - Add to end
- `void insert_front(const List_type& item)` - Add to beginning
- `void remove(const List_type& key)` - Delete node with specific value
- `void dequeue()` - Remove front node
- `node* search(const List_type& key)` - Find node by value
- `void display()` - Print all elements
- `bool isEmpty() const` - Check if list is empty

## Key Implementation Details

### Circular Links
- Last node's `next` points to `front`
- Front node's `prev` points to last node
- Single `front` pointer manages entire structure

### Remove Operation
Handles three cases:
1. Removing only node in list
2. Removing front node with multiple nodes
3. Removing middle/back node

### Deep Copy
Traverses original list and creates new nodes, maintaining circular structure

## Technical Skills

- **Advanced Data Structures**: Circular doubly linked lists
- **Complex Pointer Logic**: Managing bidirectional circular connections
- **Memory Management**: Rule of Three implementation
- **Edge Case Handling**: Empty list, single node, front removal
- **Search Algorithms**: Linear search in circular structure

## Compilation & Usage

```bash
g++ -std=c++11 main.cpp DLCirList.cpp -o dcl
./dcl
```

## Test Cases

The driver tests:
- Empty list display
- Single element insertion
- Multiple back insertions (1→2→3→4→5)
- Copy constructor validation
- Remove operation with specific keys
- Edge cases (removing from various positions)

## Learning Outcomes

- Managing complex pointer relationships in circular structures
- Implementing proper memory management patterns
- Handling multiple edge cases in data structure operations
- Understanding circular list traversal challenges

---

*Data Structures coursework project*
